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
class ActorHurtResult;
class Block;
struct HurtParameters;
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

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual float causeFallDamageToActor(float distance, float, ::ActorDamageSource) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void primeFuse(::SharedTypes::Legacy::ActorDamageCause cause);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $normalTick();

    MCNAPI void $destroy(::ActorDamageSource const& source, bool dropMinecartComponents);

    MCNAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCNAPI ::MinecartType $getType();

    MCNAPI ::Block const* $getDefaultDisplayBlock() const;

    MCNAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI float $causeFallDamageToActor(float distance, float, ::ActorDamageSource);


    // NOLINTEND
};
