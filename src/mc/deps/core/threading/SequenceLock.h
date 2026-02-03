#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class SequenceLock {
public:
    // SequenceLock inner types declare
    // clang-format off
    class LockAlgorithm;
    class SequenceId;
    // clang-format on

    // SequenceLock inner types define
    class LockAlgorithm {};

    class SequenceId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mValue;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::thread::id>   mOwningThreadId;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mAtom;
    union {
        struct {
            uint mRecursionCounter : 31;
            uint mTestEnabledFlag  : 1;
        };
        ::ll::TypedStorage<4, 4, uint> mBitfieldData;
    };
    // NOLINTEND
};

} // namespace Bedrock::Threading
