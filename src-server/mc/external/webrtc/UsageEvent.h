#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class UsageEvent : int {
    // bitfield representation
    TurnServerAdded = 1 << 0,
    StunServerAdded = 1 << 1,
    DataAdded = 1 << 2,
    AudioAdded = 1 << 3,
    VideoAdded = 1 << 4,
    SetLocalDescriptionSucceeded = 1 << 5,
    SetRemoteDescriptionSucceeded = 1 << 6,
    CandidateCollected = 1 << 7,
    AddIceCandidateSucceeded = 1 << 8,
    IceStateConnected = 1 << 9,
    CloseCalled = 1 << 10,
    PrivateCandidateCollected = 1 << 11,
    RemotePrivateCandidateAdded = 1 << 12,
    MdnsCandidateCollected = 1 << 13,
    RemoteMdnsCandidateAdded = 1 << 14,
    Ipv6CandidateCollected = 1 << 15,
    RemoteIpv6CandidateAdded = 1 << 16,
    RemoteCandidateAdded = 1 << 17,
    DirectConnectionSelected = 1 << 18,
    MaxValue = 1 << 19,
};

}
