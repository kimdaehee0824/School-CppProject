
#include "CMyString.h"
#include <string.h>

CMyString::CMyString(): m_nLength(0), m_pszData(nullptr)
{
}

CMyString::~CMyString()
{
    Release();
}

int CMyString::SetString(const char* pszParam)
{
    int size = strlen(pszParam);
    m_pszData = new char[size + 1];
    strcpy(m_pszData, pszParam);
    this -> m_nLength = size;
    return 0;
}

const char* CMyString::GetString()
{
    if (m_pszData == nullptr) {
        return "CMyString is Empty\n";
    } else {
        return m_pszData;
    }
}

void CMyString::Release()
{
    delete[] m_pszData;
    m_pszData = nullptr;
}