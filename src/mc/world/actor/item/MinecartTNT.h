#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class Block;
// clang-format on

class MinecartTNT : public ::Minecart {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual void destroy(::ActorDamageSource const& source, bool dropMinecartComponents) /*override*/;

    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    virtual ::MinecartType getType() /*override*/;

    virtual ::Block const* getDefaultDisplayBlock() const /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual float causeFallDamageToActor(float distance, float, ::ActorDamageSource) /*override*/;

    virtual ~MinecartTNT() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void primeFuse(::SharedTypes::Legacy::ActorDamageCause cause);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCAPI void $destroy(::ActorDamageSource const& source, bool dropMinecartComponents);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD ::MinecartType $getType();

    MCAPI ::Block const* $getDefaultDisplayBlock() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI float $causeFallDamageToActor(float distance, float, ::ActorDamageSource);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
