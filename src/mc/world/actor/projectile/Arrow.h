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
#include "mc/enums/ArmorTextureType.h"
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
    // vIndex: 4, symbol: ?reloadHardcoded@Arrow@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Arrow@@UEAA@XZ
    virtual ~Arrow() = default;

    // vIndex: 26, symbol: ?normalTick@Arrow@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 42, symbol: ?playerTouch@Arrow@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player& player);

    // vIndex: 128, symbol: ?setAuxValue@Arrow@@UEAAXH@Z
    virtual void setAuxValue(int aux);

    // vIndex: 149, symbol: ?readAdditionalSaveData@Arrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Arrow@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 153, symbol: ?shoot@Arrow@@UEAAXAEBVVec3@@MM0@Z
    virtual void shoot(class Vec3 const& dir, float pow, float uncertainty, class Vec3 const& baseSpeed);

    // vIndex: 154, symbol: ?_getPickupItem@Arrow@@MEBA?AVItemStack@@XZ
    virtual class ItemStack _getPickupItem() const;

    // vIndex: 155, symbol: ?applyParticleColor@Arrow@@MEAAXPEAVParticle@@@Z
    virtual void applyParticleColor(class Particle* p);

    // vIndex: 156, symbol: ?getEffectColor@Arrow@@MEAA?AVColor@mce@@XZ
    virtual class mce::Color getEffectColor();

    // symbol: ??0Arrow@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Arrow(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?addMobEffect@Arrow@@QEAAXVMobEffectInstance@@@Z
    MCAPI void addMobEffect(class MobEffectInstance effect);

    // symbol: ?getAuxValue@Arrow@@QEBAHXZ
    MCAPI int getAuxValue() const;

    // symbol: ?setCritical@Arrow@@QEAAX_N@Z
    MCAPI void setCritical(bool isCrit);

    // symbol: ?setEnchantFlame@Arrow@@QEAAXH@Z
    MCAPI void setEnchantFlame(int level);

    // symbol: ?setEnchantInfinity@Arrow@@QEAAXH@Z
    MCAPI void setEnchantInfinity(int level);

    // symbol: ?setEnchantPower@Arrow@@QEAAXH@Z
    MCAPI void setEnchantPower(int level);

    // symbol: ?setEnchantPunch@Arrow@@QEAAXH@Z
    MCAPI void setEnchantPunch(int level);

    // NOLINTEND
};
