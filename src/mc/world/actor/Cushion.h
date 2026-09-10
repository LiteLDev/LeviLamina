#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockSource;
class EntityContext;
class HashedString;
struct ActorDefinitionIdentifier;
struct HurtParameters;
// clang-format on

class Cushion : public ::Actor {
public:
    // prevent constructor by default
    Cushion();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getInterpolatedBodyYaw(float) const /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const& source, float, ::HurtParameters const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Cushion(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void dropCushionAndRemove(bool dropCushion);

    MCAPI bool wouldSurvive(::BlockSource const& region) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString getVariantItemName(int color);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getInterpolatedBodyYaw(float) const;

    MCFOLD float $getShadowRadius() const;

    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float, ::HurtParameters const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
