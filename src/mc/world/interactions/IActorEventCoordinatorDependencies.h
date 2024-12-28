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
    // prevent constructor by default
    IActorEventCoordinatorDependencies& operator=(IActorEventCoordinatorDependencies const&);
    IActorEventCoordinatorDependencies(IActorEventCoordinatorDependencies const&);
    IActorEventCoordinatorDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IActorEventCoordinatorDependencies();

    // vIndex: 1
    virtual void sendActorUseItemEvent(::EntityContext&, ::ItemStack&, ::ItemUseMethod) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Interactions
