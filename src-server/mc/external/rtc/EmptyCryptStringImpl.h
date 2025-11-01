#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/CryptStringImpl.h"

namespace rtc {

class EmptyCryptStringImpl : public ::rtc::CryptStringImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EmptyCryptStringImpl() /*override*/ = default;

    // vIndex: 1
    virtual uint64 GetLength() const /*override*/;

    // vIndex: 2
    virtual void CopyTo(char*, bool) const /*override*/;

    // vIndex: 3
    virtual ::std::string UrlEncode() const /*override*/;

    // vIndex: 4
    virtual ::rtc::CryptStringImpl* Copy() const /*override*/;

    // vIndex: 5
    virtual void CopyRawTo(::std::vector<uchar>*) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
