#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class EntityContext;
class ItemStack;
struct PlayerDestroyProgressCacheComponent;
// clang-format on

namespace PlayerDestroy {

struct DestroyProgressContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EntityContext const&>                 provider;
    ::ll::TypedStorage<8, 8, ::Block const&>                         block;
    ::ll::TypedStorage<8, 8, ::ItemStack const&>                     selectedItem;
    ::ll::TypedStorage<8, 8, ::PlayerDestroyProgressCacheComponent&> progressCache;
    ::ll::TypedStorage<1, 1, bool const>                             isRiding;
    ::ll::TypedStorage<1, 1, bool const>                             isOnGround;
    ::ll::TypedStorage<1, 1, bool const>                             isFlying;
    ::ll::TypedStorage<1, 1, bool const>                             actorIsUnderWater;
    ::ll::TypedStorage<1, 1, bool const>                             actorHasAquaAffinityArmor;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyProgressContext& operator=(DestroyProgressContext const&);
    DestroyProgressContext(DestroyProgressContext const&);
    DestroyProgressContext();
};

} // namespace PlayerDestroy
