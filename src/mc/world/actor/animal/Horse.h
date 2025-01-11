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
class Block;
class BlockPos;
class EntityContext;
class Player;
class Vec2;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataHorseFlagComponent;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct RenderPositionComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct VariantParameterList;
// clang-format on

class Horse : public ::Animal {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~Horse() /*override*/ = default;

    // vIndex: 125
    virtual void die(::ActorDamageSource const& damagesource) /*override*/;

    // vIndex: 182
    virtual void setHorseEating(bool state);

    // vIndex: 183
    virtual float getStandAnim(float a) const;

    // vIndex: 184
    virtual bool isHorseEating() const;

    // vIndex: 185
    virtual bool isMouthOpen() const;

    // vIndex: 60
    virtual void setStanding(bool value) /*override*/;

    // vIndex: 59
    virtual void onFailedTame() /*override*/;

    // vIndex: 186
    virtual void makeMad();

    // vIndex: 93
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 187
    virtual bool tameToPlayer(::Player& player, bool tamingParticles);

    // vIndex: 95
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 112
    virtual void openContainerComponent(::Player& player) /*override*/;

    // vIndex: 17
    virtual ::Vec3 getInterpolatedRidingOffset(float a, int const) const /*override*/;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 70
    virtual void feed(int itemId) /*override*/;

    // vIndex: 87
    virtual bool canFreeze() const /*override*/;

    // vIndex: 41
    virtual bool isImmobile() const /*override*/;

    // vIndex: 94
    virtual float causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float dmg, bool knock, bool ignite) /*override*/;

    // vIndex: 142
    virtual void _playStepSound(::BlockPos const& pos, ::Block const& onBlock) /*override*/;

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

    MCAPI void _setHorseFlag(::HorseFlags flag, bool shouldAddFlag);

    MCAPI void openMouth();

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

    MCAPI static ::Vec3
    getInterpolatedRidingOffset(::Vec2 const& renderRot, float standAnimO, float standAnim, float alpha);

    MCAPI static ::Vec3 getNewPassengerPos(
        ::RenderPositionComponent const& horseRenderPosComponent,
        ::RenderRotationComponent const& horseRenderRotComponent,
        ::StandAnimationComponent const& horseStandAnimComponent,
        float                            alpha,
        float                            passengerPosY
    );

    MCAPI static void setHorseFlag(
        ::ActorDataHorseFlagComponent&  actorDataHorseFlag,
        ::ActorDataDirtyFlagsComponent& actorDataDirtyFlags,
        ::HorseFlags                    flag,
        bool                            shouldAddFlag
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $die(::ActorDamageSource const& damagesource);

    MCAPI void $setHorseEating(bool state);

    MCAPI float $getStandAnim(float a) const;

    MCAPI bool $isHorseEating() const;

    MCAPI bool $isMouthOpen() const;

    MCAPI void $setStanding(bool value);

    MCAPI void $onFailedTame();

    MCAPI void $makeMad();

    MCAPI ::ActorUniqueID $getControllingPlayer() const;

    MCAPI bool $tameToPlayer(::Player& player, bool tamingParticles);

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI void $openContainerComponent(::Player& player);

    MCAPI ::Vec3 $getInterpolatedRidingOffset(float a, int const) const;

    MCAPI float $getShadowRadius() const;

    MCAPI void $feed(int itemId);

    MCAPI bool $canFreeze() const;

    MCAPI bool $isImmobile() const;

    MCAPI float $causeFallDamageToActor(float fallDistance, float multiplier, ::ActorDamageSource source);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float dmg, bool knock, bool ignite);

    MCAPI void $_playStepSound(::BlockPos const& pos, ::Block const& onBlock);

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
