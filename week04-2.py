// week04-2.py �O���Ѫ� LeetCode �D���D Easy �D (�G�X�@)
// LeetCode 2529. Maximum Count of Positive Integer and Negative Integer
int maximumCount(int* nums, int numsSize) {

    int pos = 0, neg = 0; // �j��e��, �ǳƦn, ����0

    for(int i=0; i<numsSize; i++){
        if( nums[i] > 0) pos++; // ����
        if( nums[i] < 0) neg++; // �t��
    } // �j�餤��, ��s�B�ק復

     //�j��᭱,�⥦���ӥ�
    if(pos>neg) return pos; // ���Ƥ���h, �N����
    else return neg; // ���M,�N�t��
}
