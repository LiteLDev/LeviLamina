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
#include "mc/world/actor/projectile/AbstractArrow.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Arrow : public ::AbstractArrow {
public:
    // prevent constructor by default
    Arrow& operator=(Arrow const&);
    Arrow(Arrow const&);
    Arrow();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Arrow() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 42
    virtual void playerTouch(class Player& player);

    // vIndex: 126
    virtual void setAuxValue(int aux);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151
    virtual void shoot(class Vec3 const& dir, float pow, float uncertainty, class Vec3 const& baseSpeed);

    // vIndex: 152
    virtual class ItemStack _getPickupItem() const;

    // vIndex: 153
    virtual void applyParticleColor(class Particle* p);

    // vIndex: 154
    virtual class mce::Color getEffectColor();

    MCAPI Arrow(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void addMobEffect(class MobEffectInstance effect);

    MCAPI int getAuxValue() const;

    MCAPI void setCritical(bool isCrit);

    MCAPI void setEnchantFlame(int level);

    MCAPI void setEnchantInfinity(int level);

    MCAPI void setEnchantPower(int level);

    MCAPI void setEnchantPunch(int level);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI class ItemStack _getPickupItem$() const;

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI void applyParticleColor$(class Particle* p);

    MCAPI class mce::Color getEffectColor$();

    MCAPI void normalTick$();

    MCAPI void playerTouch$(class Player& player);

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void setAuxValue$(int aux);

    MCAPI void shoot$(class Vec3 const& dir, float pow, float uncertainty, class Vec3 const& baseSpeed);

    // NOLINTEND
};
