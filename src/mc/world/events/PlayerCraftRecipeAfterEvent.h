#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct PlayerCraftRecipeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>             mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>                mItem;
    ::ll::TypedStorage<8, 16, ::WeakRef<::Dimension>>      mDimension;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mBlockPos;
    // NOLINTEND
};
