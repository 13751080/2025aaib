/// week10-4 今天的挑戰題(題目不好懂, 但是程式只用到上課)
/// LeetCode Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0; /// 數一下, 統計最多的, 是出現幾次
        int a[100]={}; /// 陣列宣告, 放「加總的total」有出現幾次
        for(int i=1; i<=n; i++){ /// 人類的 for 迴圈, 從1...n
            int total = 0, now = i; /// 加起來的結果叫 total, 現在的數 now
            while( now > 0){ /// 剝皮法 的while迴圈, 如果 now 還有剩, 繼續剝
                total += now % 10; /// 把 「皮」加起來(每一位數都加起來)
                now = now / 10; ///剝頑皮, 數字就變小
            }
            a[total]++; ///統計結果
            if(a[total] > max_count) max_count = a[total];
        }
        int ans = 0;///
        for(int i=0; i<100; i++){
            if(a[i]==max_count) ans++;
        }
        return ans;
    }
};
