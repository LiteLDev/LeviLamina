#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/Queue.h"

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
        ::ll::TypedStorage<8, 8, uint64> value1;
        ::ll::TypedStorage<8, 8, uint64> time;
        // NOLINTEND

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
    ::ll::TypedStorage<8, 8, uint64>                                                        total1;
    ::ll::TypedStorage<8, 8, uint64>                                                        lastSec1;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::BPSTracker::TimeAndValue2>> dataQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BPSTracker();

    MCAPI void Push1(uint64 time, uint64 value1);

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
