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
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class EnderMan : public ::Monster {
public:
    // prevent constructor by default
    EnderMan& operator=(EnderMan const&);
    EnderMan(EnderMan const&);
    EnderMan();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~EnderMan() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 66
    virtual bool shouldRender() const;

    // vIndex: 68
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 112
    virtual bool canBeAffectedByArrow(class MobEffectInstance const& effect) const;

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 157
    virtual void hurtEffects(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 187
    virtual void newServerAiStep();

    MCAPI EnderMan(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI class Block const& getCarryingBlock() const;

    MCAPI void setCarryingBlock(class Block const& block);

    MCAPI static void shutdown();

    MCAPI static std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_ATTACKING;

    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACKING_UUID;

    MCAPI static std::set<class Block const*> mMayTake;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool mMayTakeIsSetup;

    // NOLINTEND
};
