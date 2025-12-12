#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class CryptStringImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CryptStringImpl() = default;

    virtual uint64 GetLength() const = 0;

    virtual void CopyTo(char*, bool) const = 0;

    virtual ::std::string UrlEncode() const = 0;

    virtual ::rtc::CryptStringImpl* Copy() const = 0;

    virtual void CopyRawTo(::std::vector<uchar>*) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
