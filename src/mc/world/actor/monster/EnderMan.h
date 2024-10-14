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
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;

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

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI bool canBeAffectedByArrow$(class MobEffectInstance const&) const;

    MCAPI ::Puv::Legacy::LevelSoundEvent getAmbientSound$() const;

    MCAPI void hurtEffects$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void newServerAiStep$();

    MCAPI void normalTick$();

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI bool shouldRender$() const;

    MCAPI static std::shared_ptr<class AttributeModifier>& SPEED_MODIFIER_ATTACKING();

    MCAPI static class mce::UUID const& SPEED_MODIFIER_ATTACKING_UUID();

    MCAPI static std::set<class Block const*>& mMayTake();

    MCAPI static bool& mMayTakeIsSetup();

    // NOLINTEND
};
