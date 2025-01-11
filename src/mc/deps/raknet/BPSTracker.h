#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct BPSTracker {
public:
    // BPSTracker inner types declare
    // clang-format off
    struct TimeAndValue2;
    // clang-format on

    // BPSTracker inner types define
    struct TimeAndValue2 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk3607c9;
        ::ll::UntypedStorage<8, 8> mUnk83e56b;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeAndValue2& operator=(TimeAndValue2 const&);
        TimeAndValue2(TimeAndValue2 const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI TimeAndValue2();

        MCAPI ~TimeAndValue2();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk85e95b;
    ::ll::UntypedStorage<8, 8>  mUnkfb361b;
    ::ll::UntypedStorage<8, 24> mUnke01d2f;
    // NOLINTEND

public:
    // prevent constructor by default
    BPSTracker& operator=(BPSTracker const&);
    BPSTracker(BPSTracker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BPSTracker();

    MCAPI ~BPSTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
