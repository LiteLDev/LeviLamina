#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class InterArrivalDelta {
public:
    // InterArrivalDelta inner types declare
    // clang-format off
    struct SendTimeGroup;
    // clang-format on

    // InterArrivalDelta inner types define
    struct SendTimeGroup {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1d296b;
        ::ll::UntypedStorage<8, 8> mUnkdfd765;
        ::ll::UntypedStorage<8, 8> mUnk56cb81;
        ::ll::UntypedStorage<8, 8> mUnkb2f97f;
        ::ll::UntypedStorage<8, 8> mUnk1dd84b;
        ::ll::UntypedStorage<8, 8> mUnk12d94b;
        // NOLINTEND

    public:
        // prevent constructor by default
        SendTimeGroup& operator=(SendTimeGroup const&);
        SendTimeGroup(SendTimeGroup const&);
        SendTimeGroup();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkdf3ca0;
    ::ll::UntypedStorage<8, 48> mUnk836a73;
    ::ll::UntypedStorage<8, 48> mUnk867d63;
    ::ll::UntypedStorage<4, 4>  mUnkcc56c8;
    // NOLINTEND

public:
    // prevent constructor by default
    InterArrivalDelta& operator=(InterArrivalDelta const&);
    InterArrivalDelta(InterArrivalDelta const&);
    InterArrivalDelta();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool ComputeDeltas(
        ::webrtc::Timestamp  send_time,
        ::webrtc::Timestamp  arrival_time,
        ::webrtc::Timestamp  system_time,
        uint64               packet_size,
        ::webrtc::TimeDelta* send_time_delta,
        ::webrtc::TimeDelta* arrival_time_delta,
        int*                 packet_size_delta
    );

    MCNAPI explicit InterArrivalDelta(::webrtc::TimeDelta send_time_group_length);

    MCNAPI void Reset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TimeDelta send_time_group_length);
    // NOLINTEND
};

} // namespace webrtc
