#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/actor/animal/HorseFlags.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
struct RenderRotationComponent;
struct StandAnimationComponent;
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

    virtual void die(::ActorDamageSource const& damagesource) /*override*/;

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

    virtual bool isImmobile() const /*override*/;

    virtual float causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Horse(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _setHorseFlag(::HorseFlags flag, bool shouldAddFlag);

    MCNAPI void openMouth();

    MCNAPI void postAiStep();

    MCNAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 getInterpolatedRidingOffset(
        ::RenderRotationComponent const& renderRotationComponent,
        ::StandAnimationComponent const& standAnimationComponent,
        float                            alpha
    );
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
    MCNAPI void $die(::ActorDamageSource const& damagesource);

    MCNAPI void $setHorseEating(bool state);

    MCNAPI float $getStandAnim(float a) const;

    MCNAPI bool $isHorseEating() const;

    MCNAPI bool $isMouthOpen() const;

    MCNAPI void $setStanding(bool value);

    MCNAPI void $onFailedTame();

    MCNAPI void $makeMad();

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI bool $tameToPlayer(::Player& player, bool tamingParticles);

    MCNAPI void $onSynchedDataUpdate(int dataId);

    MCNAPI void $openContainerComponent(::Player& player);

    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float a, int const) const;

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $feed(int itemId);

    MCNAPI bool $isImmobile() const;

    MCNAPI float $causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source);

    MCNAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);


    // NOLINTEND
};
