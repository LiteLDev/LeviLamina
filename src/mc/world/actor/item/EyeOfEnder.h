#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class Player;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class EyeOfEnder : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mTarget;
    ::ll::TypedStorage<1, 1, bool>        mSurviveAfterDeath;
    ::ll::TypedStorage<4, 4, int>         mLife;
    ::ll::TypedStorage<4, 12, ::Vec3>     mTargetPos;
    // NOLINTEND

public:
    // prevent constructor by default
    EyeOfEnder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void lerpMotion(::Vec3 const& delta) /*override*/;

    virtual void normalTick() /*override*/;

    virtual float getShadowRadius() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EyeOfEnder(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void preNormalTick();

    MCNAPI void signalTo(::Player const& player, ::BlockPos& target);
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
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $lerpMotion(::Vec3 const& delta);

    MCNAPI void $normalTick();

    MCNAPI float $getShadowRadius() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
