
#include "CMyString.h"
#include <string.h>

CMyString::CMyString(): m_nLength(0), m_pszData(nullptr)
{
}

CMyString::~CMyString()
{
    Release();
}

CMyString::CMyString(const CMyString& rhk)
{
    m_nLength = rhk.m_nLength;
    m_pszData = new char[m_nLength + 1];
    strcpy(m_pszData, rhk.m_pszData);
}

CMyString& CMyString::operator=(const CMyString& rhk)
{
    if (m_pszData) delete[] m_pszData;
    this->m_nLength = rhk.m_nLength;
    this->m_pszData = new char [strlen(rhk.m_pszData) + 1];
    strcpy(this->m_pszData, rhk.m_pszData);
    return *this;
}

int CMyString::SetString(const char* pszParam)
{
    int size = strlen(pszParam);
    m_pszData = new char[size + 1];
    strcpy(m_pszData, pszParam);
    this -> m_nLength = size;
    return 0;
}

const char* CMyString::GetString() const
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