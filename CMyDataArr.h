//
// Created by 김대희 on 2021/09/30.
//

#ifndef CPPPROJECT1_CMYDATAARR_H
#define CPPPROJECT1_CMYDATAARR_H


class CMyDataArr {

public:
    CMyDataArr(int);
    ~CMyDataArr();
    void Insert(int num);
    void PrintData();
private:
    int *mPnArr;
    int mTotal;
    int mCmt;


};


#endif //CPPPROJECT1_CMYDATAARR_H
