#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"

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

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual void setHorseEating(bool);

    virtual float getStandAnim(float) const;

    virtual bool isHorseEating() const;

    virtual bool isMouthOpen() const;

    virtual void setStanding(bool value) /*override*/;

    virtual void onFailedTame() /*override*/;

    virtual void makeMad();

    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    virtual bool tameToPlayer(::Player&, bool);

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void openContainerComponent(::Player& player) /*override*/;

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual void feed(int itemId) /*override*/;

    virtual bool canFreeze() const /*override*/;

    virtual bool isImmobile() const /*override*/;

    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

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

    MCAPI void postAiStep();

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 getInterpolatedRidingOffset(
        ::RenderRotationComponent const& renderRotationComponent,
        ::StandAnimationComponent const& standAnimationComponent,
        float                            alpha
    );
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

    // NOLINTEND
};
