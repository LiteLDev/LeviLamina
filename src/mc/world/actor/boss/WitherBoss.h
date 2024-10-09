#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/entity/components/WitherBossPreAIStepResult.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class WitherBoss : public ::Monster {
public:
    // WitherBoss inner types define
    enum class WitherAttackType {};

public:
    // prevent constructor by default
    WitherBoss& operator=(WitherBoss const&);
    WitherBoss(WitherBoss const&);
    WitherBoss();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~WitherBoss() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 14
    virtual class Vec3 getFiringPos() const;

    // vIndex: 29
    virtual bool startRiding(class Actor& vehicle);

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 91
    virtual bool canFreeze() const;

    // vIndex: 98
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 111
    virtual bool canBeAffected(uint effectId) const;

    // vIndex: 112
    virtual bool canBeAffectedByArrow(class MobEffectInstance const& effect) const;

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 157
    virtual void hurtEffects(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 158
    virtual void aiStep();

    // vIndex: 168
    virtual int getArmorValue() const;

    // vIndex: 187
    virtual void newServerAiStep();

    MCAPI WitherBoss(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void awardSpawnWitherAchievement() const;

    MCAPI class Vec3 getHeadPos(int headID) const;

    MCAPI class Vec2 getHeadRot(int headID) const;

    MCAPI int getInvulnerableTicks() const;

    MCAPI float getOverlayAlpha();

    MCAPI float getSwellAmount(float a) const;

    MCAPI bool hasAerialAttack() const;

    MCAPI void postAiStep();

    MCAPI ::WitherBossPreAIStepResult preAiStep();

    MCAPI void removeSkeleton();

    MCAPI void setAerialAttack(bool aerialAttack);

    MCAPI void setAlternativeTarget(int headIndex, struct ActorUniqueID entityId);

    MCAPI void setInvulnerableTicks(int invulnerableTicks);

    MCAPI void setIsPathing(bool isPathing);

    MCAPI void setShotDelay(int delay);

    MCAPI void setWantsToMove(bool shouldMove);

    MCAPI bool wantsToMove();

    MCAPI static bool canDestroy(class Block const& block, ::WitherBoss::WitherAttackType attackType);

    MCAPI static class mce::UUID const MAX_HEALTH_CAP_UUID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _destroyBlocks(
        class Level&                   level,
        class AABB const&              bb,
        class BlockSource&             region,
        int                            range,
        ::WitherBoss::WitherAttackType attackType
    );

    MCAPI void _performRangedAttack(int headID, class Actor& target);

    MCAPI void _performRangedAttack(int headID, class Vec3 const& targetPos, bool dangerous);

    MCAPI bool canShoot();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const TIME_BEFORE_MOVING;

    // NOLINTEND
};
