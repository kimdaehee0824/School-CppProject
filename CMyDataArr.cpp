//
// Created by 김대희 on 2021/09/30.
//
#include <iostream>
#include "CMyDataArr.h"

CMyDataArr::CMyDataArr(int cmt) {
    mTotal = cmt;
    mCmt = 0;
    mPnArr = new int[cmt];
}
CMyDataArr::~CMyDataArr() {
delete[] mPnArr;
}

void CMyDataArr::Insert(int num) {
    if (mCmt < mTotal)
        mPnArr[++mCmt] = num;
}

void CMyDataArr::PrintData() {
    std::cout << " 전체 데이터 : ";
    for (int i = 0; i < mCmt; i++)
    {
        std::cout << mPnArr[i] << " ";
    }
    std::cout << "[ " << mCmt << " / " << mTotal << " ] " << std::endl;
}