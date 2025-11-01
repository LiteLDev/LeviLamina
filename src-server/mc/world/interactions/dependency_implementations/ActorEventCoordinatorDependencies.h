#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/IActorEventCoordinatorDependencies.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
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
    virtual void sendActorUseItemEvent(::EntityContext& actor, ::ItemStack& item, ::ItemUseMethod useMethod) /*override*/;

    // vIndex: 0
    virtual ~ActorEventCoordinatorDependencies() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendActorUseItemEvent(::EntityContext& actor, ::ItemStack& item, ::ItemUseMethod useMethod);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
