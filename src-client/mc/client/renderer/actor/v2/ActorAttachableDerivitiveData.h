#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct ActorAttachableDerivitiveData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::EnumSet<::AttachableSlotIndex, 7>>> mAttachablesEquippedState;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack const*>>                           mAttachedItems;
    // NOLINTEND
};
