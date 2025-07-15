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
    // vIndex: 8
    virtual ~Horse() /*override*/ = default;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 177
    virtual void setHorseEating(bool state);

    // vIndex: 178
    virtual float getStandAnim(float a) const;

    // vIndex: 179
    virtual bool isHorseEating() const;

    // vIndex: 180
    virtual bool isMouthOpen() const;

    // vIndex: 59
    virtual void setStanding(bool value) /*override*/;

    // vIndex: 58
    virtual void onFailedTame() /*override*/;

    // vIndex: 181
    virtual void makeMad();

    // vIndex: 91
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 182
    virtual bool tameToPlayer(::Player& player, bool tamingParticles);

    // vIndex: 93
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 110
    virtual void openContainerComponent(::Player& player) /*override*/;

    // vIndex: 17
    virtual ::Vec3 getInterpolatedRidingOffset(float a, int const) const /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 68
    virtual void feed(int itemId) /*override*/;

    // vIndex: 85
    virtual bool canFreeze() const /*override*/;

    // vIndex: 40
    virtual bool isImmobile() const /*override*/;

    // vIndex: 92
    virtual float causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float dmg, bool knock, bool ignite) /*override*/;

    // vIndex: 2
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
