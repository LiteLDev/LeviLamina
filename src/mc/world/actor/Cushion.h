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
class Vec3;
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

    virtual void remove() /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const& source, float, ::HurtParameters const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Cushion(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI bool _wouldSurviveAt(::BlockSource const& region, ::Vec3 const& at) const;

    MCNAPI void dropCushionAndRemove(bool dropCushion, ::Actor* breakingActor);

    MCNAPI bool wouldSurvive(::BlockSource const& region) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString getVariantItemName(int color);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getInterpolatedBodyYaw(float) const;

    MCNAPI void $remove();

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float, ::HurtParameters const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
