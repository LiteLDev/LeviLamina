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
    virtual void reloadHardcoded(enum ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1ThrownTrident@@UEAA@XZ
    virtual ~ThrownTrident() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: ?playerTouch@ThrownTrident@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player& player);

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 74, symbol: ?isEnchanted@ThrownTrident@@UEBA_NXZ
    virtual bool isEnchanted() const;

    // vIndex: 86, symbol: ?despawn@ThrownTrident@@UEAAXXZ
    virtual void despawn();

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@ThrownTrident@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 164, symbol: ?readAdditionalSaveData@ThrownTrident@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 165, symbol: ?addAdditionalSaveData@ThrownTrident@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 169, symbol: ?shoot@ThrownTrident@@UEAAXAEBVVec3@@MM0@Z
    virtual void shoot(class Vec3 const& dir, float pow, float uncertainty, class Vec3 const& baseSpeed);

    // vIndex: 170, symbol: ?_getPickupItem@ThrownTrident@@MEBA?AVItemStack@@XZ
    virtual class ItemStack _getPickupItem() const;

    // symbol: ??0ThrownTrident@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ThrownTrident(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

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
