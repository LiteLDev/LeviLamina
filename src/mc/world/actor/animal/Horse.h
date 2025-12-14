#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/actor/animal/HorseFlags.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
class Player;
class Vec2;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class Horse : public ::Animal {
public:
    // prevent constructor by default
    Horse();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Horse() /*override*/ = default;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual void setHorseEating(bool state);

    virtual float getStandAnim(float a) const;

    virtual bool isHorseEating() const;

    virtual bool isMouthOpen() const;

    virtual void setStanding(bool value) /*override*/;

    virtual void onFailedTame() /*override*/;

    virtual void makeMad();

    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    virtual bool tameToPlayer(::Player& player, bool tamingParticles);

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void openContainerComponent(::Player& player) /*override*/;

    virtual ::Vec3 getInterpolatedRidingOffset(float a, int const) const /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual void feed(int itemId) /*override*/;

    virtual bool canFreeze() const /*override*/;

    virtual bool isImmobile() const /*override*/;

    virtual float causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source) /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float dmg, bool knock, bool ignite) /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Horse(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI bool _getHorseFlag(::HorseFlags flag) const;

    MCAPI void _setHorseFlag(::HorseFlags flag, bool shouldAddFlag);

    MCAPI bool _setHorseType(::ActorType actorType);

    MCAPI void postAiStep();

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3
    getInterpolatedRidingOffset(::Vec2 const& renderRot, float standAnimO, float standAnim, float alpha);

    MCAPI static bool isImmobile(::EntityContext const& entity);
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
    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $setHorseEating(bool state);

    MCAPI float $getStandAnim(float a) const;

    MCAPI bool $isHorseEating() const;

    MCAPI bool $isMouthOpen() const;

    MCAPI void $setStanding(bool value);

    MCAPI void $onFailedTame();

    MCAPI void $makeMad();

    MCAPI ::ActorUniqueID $getControllingPlayer() const;

    MCAPI bool $tameToPlayer(::Player& player, bool tamingParticles);

    MCFOLD void $onSynchedDataUpdate(int dataId);

    MCAPI void $openContainerComponent(::Player& player);

    MCAPI ::Vec3 $getInterpolatedRidingOffset(float a, int const) const;

    MCAPI float $getShadowRadius() const;

    MCAPI void $feed(int itemId);

    MCAPI bool $canFreeze() const;

    MCAPI bool $isImmobile() const;

    MCAPI float $causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float dmg, bool knock, bool ignite);

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
