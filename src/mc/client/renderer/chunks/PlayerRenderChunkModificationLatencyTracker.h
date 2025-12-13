#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/SubChunkPos.h"

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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~TimeMarker();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    using TimeStamp = ::std::chrono::steady_clock::time_point;

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
    virtual ~PlayerRenderChunkModificationLatencyTracker() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void addTimeMarker(::std::string_view name);

    MCNAPI_C void clearData();

    MCNAPI_C bool shouldTrackNearbyPosition(::BlockPos const& blockToTrack);

    MCNAPI_C bool shouldTrackPosition(::BlockPos const& blockToTrack);

    MCNAPI_C bool shouldTrackPosition(::SubChunkPos const& renderChunkPos);

    MCNAPI_C void startTimer(::BlockPos const& blockToTrack);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
