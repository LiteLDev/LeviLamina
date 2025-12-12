#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class MessageDigest {
public:
    // MessageDigest inner types define
    enum : int {
        KMaxSize = 64,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MessageDigest();

    virtual uint64 Size() const = 0;

    virtual void Update(void const*, uint64) = 0;

    virtual uint64 Finish(void*, uint64) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
