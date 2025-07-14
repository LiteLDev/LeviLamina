#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class MessageDigest {
public:
    // MessageDigest inner types define
    enum : int {
        // bitfield representation
        KMaxSize = 1 << 6,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MessageDigest();

    // vIndex: 1
    virtual uint64 Size() const = 0;

    // vIndex: 2
    virtual void Update(void const*, uint64) = 0;

    // vIndex: 3
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
