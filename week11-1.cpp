/// week11-1.cpp
/// ���� SOIT_ADVANCE_009���N�[
#include <stdio.h>
int main()
{
    printf("�п�J 1422: ");
    int n;
    scanf("%d", &n);
    ///Q:�����̤j�����?
    int ans = 0;
    while(n>0){
        printf("�{�b��X�Ӫ���:%d\n",n%10);
        if(n%10 > ans) ans = n%10; /// ��֪k,��X�C�@��
        n = n / 10;
    }
    printf("���̤j����,�O: %d\n", ans);
}
