#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class CryptStringImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CryptStringImpl() = default;

    // vIndex: 1
    virtual uint64 GetLength() const = 0;

    // vIndex: 2
    virtual void CopyTo(char*, bool) const = 0;

    // vIndex: 3
    virtual ::std::string UrlEncode() const = 0;

    // vIndex: 4
    virtual ::rtc::CryptStringImpl* Copy() const = 0;

    // vIndex: 5
    virtual void CopyRawTo(::std::vector<uchar>*) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
