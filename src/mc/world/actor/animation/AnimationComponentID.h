#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/AttachableSlotIndex.h"

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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
