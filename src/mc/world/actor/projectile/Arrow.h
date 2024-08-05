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
#include "mc/world/actor/projectile/AbstractArrow.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
};
