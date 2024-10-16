#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/actor/animal/HorseFlags.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Horse : public ::Animal {
public:
    // prevent constructor by default
    Horse& operator=(Horse const&);
    Horse(Horse const&);
    Horse();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Horse() = default;

    // vIndex: 19
    virtual class Vec3 getInterpolatedRidingOffset(float a, int) const;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 43
    virtual bool isImmobile() const;

    // vIndex: 62
    virtual void onFailedTame();

    // vIndex: 63
    virtual void setStanding(bool value);

    // vIndex: 73
    virtual void feed(int itemId);

    // vIndex: 91
    virtual bool canFreeze() const;

    // vIndex: 97
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 98
    virtual float causeFallDamageToActor(float fallDistance, float multiplier, class ActorDamageSource source);

    // vIndex: 99
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 116
    virtual void openContainerComponent(class Player& player);

    // vIndex: 131
    virtual void die(class ActorDamageSource const& damagesource);

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float dmg, bool knock, bool ignite);

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const& pos, class Block const& _onBlock);

    // vIndex: 190
    virtual void setType(int i);

    // vIndex: 191
    virtual int getType() const;

    // vIndex: 192
    virtual void setHorseEating(bool state);

    // vIndex: 193
    virtual float getStandAnim(float a) const;

    // vIndex: 194
    virtual bool isHorseEating() const;

    // vIndex: 195
    virtual bool isMouthOpen() const;

    // vIndex: 196
    virtual void makeMad();

    // vIndex: 197
    virtual bool tameToPlayer(class Player& player, bool tamingParticles);

    MCAPI Horse(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void postAiStep();

    MCAPI void postNormalTick();

    MCAPI static class Vec3 getInterpolatedRidingOffset(
        struct RenderRotationComponent const& renderRotationComponent,
        struct StandAnimationComponent const& standAnimationComponent,
        float                                 alpha
    );

    MCAPI static class Vec3
    getInterpolatedRidingOffset(class Vec2 const& renderRot, float standAnimO, float standAnim, float alpha);

    MCAPI static class Vec3 getNewPassengerPos(
        struct RenderPositionComponent const& horseRenderPosComponent,
        struct RenderRotationComponent const& horseRenderRotComponent,
        struct StandAnimationComponent const& horseStandAnimComponent,
        float                                 alpha,
        float                                 passengerPosY
    );

    MCAPI static void setHorseFlag(
        struct ActorDataHorseFlagComponent&  actorDataHorseFlag,
        struct ActorDataDirtyFlagsComponent& actorDataDirtyFlags,
        ::HorseFlags                         flag,
        bool                                 shouldAddFlag
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _openMouth();

    MCAPI void _setHorseFlag(::HorseFlags flag, bool shouldAddFlag);

    MCAPI bool _setHorseType(::ActorType actorType);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI bool _hurt$(class ActorDamageSource const& source, float dmg, bool knock, bool ignite);

    MCAPI void _playStepSound$(class BlockPos const& pos, class Block const& _onBlock);

    MCAPI bool canFreeze$() const;

    MCAPI float causeFallDamageToActor$(float fallDistance, float multiplier, class ActorDamageSource source);

    MCAPI void die$(class ActorDamageSource const& damagesource);

    MCAPI void feed$(int itemId);

    MCAPI struct ActorUniqueID getControllingPlayer$() const;

    MCAPI class Vec3 getInterpolatedRidingOffset$(float a, int) const;

    MCAPI float getShadowRadius$() const;

    MCAPI float getStandAnim$(float a) const;

    MCAPI int getType$() const;

    MCAPI bool isHorseEating$() const;

    MCAPI bool isImmobile$() const;

    MCAPI bool isMouthOpen$() const;

    MCAPI void makeMad$();

    MCAPI void onFailedTame$();

    MCAPI void onSynchedDataUpdate$(int dataId);

    MCAPI void openContainerComponent$(class Player& player);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void setHorseEating$(bool state);

    MCAPI void setStanding$(bool value);

    MCAPI void setType$(int i);

    MCAPI bool tameToPlayer$(class Player& player, bool tamingParticles);

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams& renderParams);

    // NOLINTEND
};
