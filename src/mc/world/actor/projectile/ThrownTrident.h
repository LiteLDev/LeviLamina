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

class ThrownTrident : public ::AbstractArrow {
public:
    // prevent constructor by default
    ThrownTrident& operator=(ThrownTrident const&);
    ThrownTrident(ThrownTrident const&);
    ThrownTrident();

public:
    // NOLINTBEGIN
    // vIndex: 3, symbol: ?outOfWorld@ThrownTrident@@UEAAXXZ
    virtual void outOfWorld();

    // vIndex: 4, symbol: ?reloadHardcoded@ThrownTrident@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1ThrownTrident@@UEAA@XZ
    virtual ~ThrownTrident() = default;

    // vIndex: 42, symbol: ?playerTouch@ThrownTrident@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player& player);

    // vIndex: 66, symbol: ?isEnchanted@ThrownTrident@@UEBA_NXZ
    virtual bool isEnchanted() const;

    // vIndex: 78, symbol: ?despawn@ThrownTrident@@UEAAXXZ
    virtual void despawn();

    // vIndex: 148, symbol: ?_hurt@ThrownTrident@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@ThrownTrident@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@ThrownTrident@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 153, symbol: ?shoot@ThrownTrident@@UEAAXAEBVVec3@@MM0@Z
    virtual void shoot(class Vec3 const& dir, float pow, float uncertainty, class Vec3 const& baseSpeed);

    // vIndex: 154, symbol: ?_getPickupItem@ThrownTrident@@MEBA?AVItemStack@@XZ
    virtual class ItemStack _getPickupItem() const;

    // symbol: ??0ThrownTrident@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ThrownTrident(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?doNormalTick@ThrownTrident@@QEAAXXZ
    MCAPI void doNormalTick();

    // symbol: ?getPickupItem@ThrownTrident@@QEBA?AVItemStack@@XZ
    MCAPI class ItemStack getPickupItem() const;

    // symbol: ?returnWithLoyalty@ThrownTrident@@QEAAXH@Z
    MCAPI void returnWithLoyalty(int enchantLevel);

    // symbol: ?setTridentItem@ThrownTrident@@QEAAXAEBVItemStack@@@Z
    MCAPI void setTridentItem(class ItemStack const& item);

    // NOLINTEND
};
