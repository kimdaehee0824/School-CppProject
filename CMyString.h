//
// Created by 김대희 on 2021/09/23.
//

#ifndef CPPPROJECT1_CMYSTRING_H
#define CPPPROJECT1_CMYSTRING_H

#pragma once
class CMyString
{
public:
    CMyString();
    ~CMyString();
    CMyString(const CMyString& rhk);
    CMyString& operator=(const CMyString& rhk);
private:
    // 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
    char* m_pszData;
    // 저장된 문자열의 길이
    int m_nLength;
public:
    int SetString(const char* pszParam);
    const char* GetString() const;
    void Release();
};

#endif //CPPPROJECT1_CMYSTRING_H


