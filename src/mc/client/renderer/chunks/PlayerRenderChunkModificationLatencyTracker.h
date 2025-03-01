#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class SubChunkPos;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class PlayerRenderChunkModificationLatencyTracker : public ::Bedrock::EnableNonOwnerReferences {
public:
    // PlayerRenderChunkModificationLatencyTracker inner types declare
    // clang-format off
    struct TimeDelta;
    struct TimeMarker;
    // clang-format on

    // PlayerRenderChunkModificationLatencyTracker inner types define
    struct TimeDelta {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk2fea42;
        ::ll::UntypedStorage<4, 4>  mUnk5a836e;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeDelta& operator=(TimeDelta const&);
        TimeDelta(TimeDelta const&);
        TimeDelta();
    };

    using TimeStamp = ::std::chrono::steady_clock::time_point;

    struct TimeMarker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnka1eac6;
        ::ll::UntypedStorage<8, 8>  mUnk654fbb;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeMarker& operator=(TimeMarker const&);
        TimeMarker(TimeMarker const&);
        TimeMarker();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                                      mTimingIsActive;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                                   mStartTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlayerRenderChunkModificationLatencyTracker::TimeMarker>> mTimeMarkers;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                               mBlockToTrack;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>               mRenderChunkPosToTrack;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerRenderChunkModificationLatencyTracker() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
