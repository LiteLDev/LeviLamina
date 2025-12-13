#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/CryptStringImpl.h"

namespace rtc {

class EmptyCryptStringImpl : public ::rtc::CryptStringImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyCryptStringImpl() /*override*/ = default;

    virtual uint64 GetLength() const /*override*/;

    virtual void CopyTo(char*, bool) const /*override*/;

    virtual ::std::string UrlEncode() const /*override*/;

    virtual ::rtc::CryptStringImpl* Copy() const /*override*/;

    virtual void CopyRawTo(::std::vector<uchar>*) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
