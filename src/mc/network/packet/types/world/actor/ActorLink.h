#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/network/packet/types/world/actor/ActorLinkType.h"

struct ActorLink {
    ActorLinkType mType;               // this+0x0
    ActorUniqueID mA;                  // this+0x8
    ActorUniqueID mB;                  // this+0x10
    bool          mImmediate;          // this+0x18
    bool          mPassengerInitiated; // this+0x19

public:
    // prevent constructor by default
    ActorLink& operator=(ActorLink const&);
    ActorLink(ActorLink const&);
    ActorLink();
};
