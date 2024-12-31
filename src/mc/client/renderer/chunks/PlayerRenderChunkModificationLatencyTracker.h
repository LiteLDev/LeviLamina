#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

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
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk8e7234;
    ::ll::UntypedStorage<8, 8>  mUnkafcd6b;
    ::ll::UntypedStorage<8, 24> mUnk18501a;
    ::ll::UntypedStorage<4, 12> mUnk87d66a;
    ::ll::UntypedStorage<4, 12> mUnk90fcd5;
    ::ll::UntypedStorage<8, 80> mUnk425fc7;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRenderChunkModificationLatencyTracker& operator=(PlayerRenderChunkModificationLatencyTracker const&);
    PlayerRenderChunkModificationLatencyTracker(PlayerRenderChunkModificationLatencyTracker const&);
    PlayerRenderChunkModificationLatencyTracker();

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
