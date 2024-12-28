#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/IActorEventCoordinatorDependencies.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
class EntityContext;
class ItemStack;
// clang-format on

namespace Interactions {

class ActorEventCoordinatorDependencies : public ::Interactions::IActorEventCoordinatorDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd92843;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEventCoordinatorDependencies& operator=(ActorEventCoordinatorDependencies const&);
    ActorEventCoordinatorDependencies(ActorEventCoordinatorDependencies const&);
    ActorEventCoordinatorDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void
    sendActorUseItemEvent(::EntityContext& actor, ::ItemStack& item, ::ItemUseMethod useMethod) /*override*/;

    // vIndex: 0
    virtual ~ActorEventCoordinatorDependencies() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorEventCoordinatorDependencies(::ActorEventCoordinator& impl);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorEventCoordinator& impl);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $sendActorUseItemEvent(::EntityContext& actor, ::ItemStack& item, ::ItemUseMethod useMethod);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Interactions
