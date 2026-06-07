#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

class AnimationComponentID {
public:
    // member variables
    // NOLINTBEGIN
    union {
        uint64                           mActorUniqueId : 54;
        ::ll::TypedStorage<8, 8, uint64> mAllBits;
        uint64                           mAttachableIndex : 6;
        uint64                           mSubClientId     : 4;
    } mData;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationComponentID();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimationComponentID(
        ::ActorUniqueID const& actorUniqueId,
        ::SubClientId          subClientId,
        ::AttachableSlotIndex  attachableIndex
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ActorUniqueID const& actorUniqueId, ::SubClientId subClientId, ::AttachableSlotIndex attachableIndex);
    // NOLINTEND
};
