#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AttachableSlotIndex.h"

class AnimationComponentID {
public:
    // prevent constructor by default
    AnimationComponentID& operator=(AnimationComponentID const&);
    AnimationComponentID(AnimationComponentID const&);
    AnimationComponentID();

public:
    // NOLINTBEGIN
    // symbol: ??0AnimationComponentID@@QEAA@AEBUActorUniqueID@@GW4AttachableSlotIndex@@@Z
    MCAPI AnimationComponentID(struct ActorUniqueID const&, ushort, ::AttachableSlotIndex);

    // NOLINTEND
};
