#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SequenceLock.h"

namespace Bedrock::Threading {

class SequenceLockGenerator {
public:
    // SequenceLockGenerator inner types define
    using SequenceId = ::Bedrock::Threading::SequenceLock::SequenceId;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mValue;
    // NOLINTEND
};

} // namespace Bedrock::Threading
