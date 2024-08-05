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
    MCAPI AnimationComponentID(
        struct ActorUniqueID const& actorUniqueId,
        ushort                      attachableDepth,
        ::AttachableSlotIndex       attachableIndex
    );

    MCAPI uint64 getHash() const;

    MCAPI bool operator==(class AnimationComponentID const& rhs) const;

    // NOLINTEND
};
