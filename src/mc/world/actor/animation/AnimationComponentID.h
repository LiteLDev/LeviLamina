#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

class AnimationComponentID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdb1217;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationComponentID& operator=(AnimationComponentID const&);
    AnimationComponentID(AnimationComponentID const&);
    AnimationComponentID();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimationComponentID(
        ::ActorUniqueID const& actorUniqueId,
        ushort                 attachableDepth,
        ::AttachableSlotIndex  attachableIndex
    );

    MCAPI uint64 getHash() const;

    MCAPI bool operator==(::AnimationComponentID const& rhs) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ActorUniqueID const& actorUniqueId, ushort attachableDepth, ::AttachableSlotIndex attachableIndex);
    // NOLINTEND
};
