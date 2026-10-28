#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/chunk/ChunkState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct LevelChunkTimingData; }
namespace Bedrock::Profiling { class PerfClock; }
// clang-format on

namespace Bedrock {

class LevelChunkTimings {
public:
    // LevelChunkTimings inner types declare
    // clang-format off
    struct Self;
    // clang-format on

    // LevelChunkTimings inner types define
    struct Self {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 96, ::std::array<::std::atomic<int64>, 12>> mStateTimes;
        ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                   mNumChanges;
        ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                   mNumRejectedChanges;
        // NOLINTEND
    };

    using AtomicStateTimes = ::std::array<::std::atomic<int64>, 12>;

    using AtomicTime = ::std::atomic<int64>;

    using Clock = ::Bedrock::Profiling::PerfClock;

    using Lock = ::std::lock_guard<::SpinLockImpl>;

    using LockMutex = ::SpinLockImpl;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                       mDataMutex;
    ::ll::TypedStorage<8, 120, ::std::optional<::Bedrock::LevelChunkTimings::Self>> mSelf;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                                 mNumDiscards;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::LevelChunkTimingData cloneAllTimingData() const;

    MCAPI void onStateChange(::ChunkState from, ::ChunkState to);
    // NOLINTEND
};

} // namespace Bedrock
