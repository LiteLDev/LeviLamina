#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorLinkType.h"
#include "mc/world/ActorUniqueID.h"

struct ActorLink {
    ActorLinkType type;                // this+0x0
    ActorUniqueID A;                   // this+0x8
    ActorUniqueID B;                   // this+0x10
    bool          mImmediate;          // this+0x18
    bool          mPassengerInitiated; // this+0x19

public:
    // prevent constructor by default
    ActorLink& operator=(ActorLink const&);
    ActorLink(ActorLink const&);
    ActorLink();
};
