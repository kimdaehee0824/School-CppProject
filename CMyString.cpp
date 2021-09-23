
#include "CMyString.h"
#include <string.h>

CMyString::CMyString(): m_nLength(0), m_pszData(nullptr)
{
}

CMyString::~CMyString()
{
}

int CMyString::SetString(const char* pszParam)
{
    m_nLength = strlen(pszParam);
    pszParam = new char [m_nLength];
    strcpy(m_pszData, pszParam);

    return 0;
}

const char* CMyString::GetString()
{
    // TODO: 여기에 구현 코드 추가.
    return nullptr;
}

void CMyString::Release()
{
    // TODO: 여기에 구현 코드 추가.
}