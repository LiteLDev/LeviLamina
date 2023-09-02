#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/projectile/AbstractArrow.h"
#include "mc/world/item/components/ItemUseMethod.h"

class ThrownTrident : public ::AbstractArrow {
public:
    // prevent constructor by default
    ThrownTrident& operator=(ThrownTrident const&) = delete;
    ThrownTrident(ThrownTrident const&)            = delete;
    ThrownTrident()                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 9, symbol: ?outOfWorld@ThrownTrident@@UEAAXXZ
    virtual void outOfWorld();

    // vIndex: 10, symbol:
    // ?reloadHardcoded@ThrownTrident@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 78, symbol: ?playerTouch@ThrownTrident@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 116, symbol: ?isEnchanted@ThrownTrident@@UEBA_NXZ
    virtual bool isEnchanted() const;

    // vIndex: 133, symbol: ?despawn@ThrownTrident@@UEAAXXZ
    virtual void despawn();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@ThrownTrident@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: ?readAdditionalSaveData@ThrownTrident@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@ThrownTrident@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 254, symbol: ?shoot@ThrownTrident@@UEAAXAEBVVec3@@MM0@Z
    virtual void shoot(class Vec3 const&, float, float, class Vec3 const&);

    // vIndex: 256, symbol: ?_getPickupItem@ThrownTrident@@MEBA?AVItemStack@@XZ
    virtual class ItemStack _getPickupItem() const;

    // symbol: ??0ThrownTrident@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ThrownTrident(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?doNormalTick@ThrownTrident@@QEAAXXZ
    MCAPI void doNormalTick();

    // symbol: ?getPickupItem@ThrownTrident@@QEBA?AVItemStack@@XZ
    MCAPI class ItemStack getPickupItem() const;

    // symbol: ?returnWithLoyalty@ThrownTrident@@QEAAXH@Z
    MCAPI void returnWithLoyalty(int);

    // symbol: ?setTridentItem@ThrownTrident@@QEAAXAEBVItemStack@@@Z
    MCAPI void setTridentItem(class ItemStack const&);

    // NOLINTEND
};
