#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ItemStack;
// clang-format on

namespace Interactions {

class IActorEventCoordinatorDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActorEventCoordinatorDependencies() = default;

    virtual void sendActorUseItemEvent(::EntityContext&, ::ItemStack&, ::ItemUseMethod) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Interactions
