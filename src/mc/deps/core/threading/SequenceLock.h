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
    class SequenceId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk8183f0;
        // NOLINTEND

    public:
        // prevent constructor by default
        SequenceId& operator=(SequenceId const&);
        SequenceId(SequenceId const&);
        SequenceId();
    };

    class LockAlgorithm {
    public:
        // prevent constructor by default
        LockAlgorithm& operator=(LockAlgorithm const&);
        LockAlgorithm(LockAlgorithm const&);
        LockAlgorithm();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdd11a0;
    ::ll::UntypedStorage<4, 4> mUnk4e67be;
    union {
        struct {
            uint mUnk851e4f : 31;
            uint mUnk2d3b17 : 1;
        };
        ::ll::UntypedStorage<4, 4> mUnk8c1911;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    SequenceLock& operator=(SequenceLock const&);
    SequenceLock(SequenceLock const&);
    SequenceLock();
};

} // namespace Bedrock::Threading
