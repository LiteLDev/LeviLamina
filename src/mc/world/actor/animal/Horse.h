#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/HorseFlags.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

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
        struct RenderRotationComponent const&,
        struct StandAnimationComponent const&,
        float alpha
    );

    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const&, float, float, float alpha);

    MCAPI static class Vec3 getNewPassengerPos(
        struct RenderPositionComponent const&,
        struct RenderRotationComponent const&,
        struct StandAnimationComponent const&,
        float alpha,
        float
    );

    MCAPI static void
    setHorseFlag(struct ActorDataHorseFlagComponent&, struct ActorDataDirtyFlagsComponent&, ::HorseFlags, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _openMouth();

    MCAPI void _setHorseFlag(::HorseFlags flag, bool value);

    MCAPI bool _setHorseType(::ActorType actorType);

    // NOLINTEND
};
