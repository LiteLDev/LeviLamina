#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
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
    // vIndex: 4, symbol: ?reloadHardcoded@Arrow@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@Arrow@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: ?playerTouch@Arrow@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 143, symbol: ?setAuxValue@Arrow@@UEAAXH@Z
    virtual void setAuxValue(int);

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 167, symbol: ?readAdditionalSaveData@Arrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@Arrow@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?shoot@Arrow@@UEAAXAEBVVec3@@MM0@Z
    virtual void shoot(class Vec3 const&, float, float, class Vec3 const&);

    // vIndex: 175, symbol: ?_getPickupItem@Arrow@@MEBA?AVItemStack@@XZ
    virtual class ItemStack _getPickupItem() const;

    // vIndex: 176, symbol: ?applyParticleColor@Arrow@@MEAAXPEAVParticle@@@Z
    virtual void applyParticleColor(class Particle*);

    // vIndex: 177, symbol: ?getEffectColor@Arrow@@MEAA?AVColor@mce@@XZ
    virtual class mce::Color getEffectColor();

    // symbol: ?canMakeStepSound@Arrow@@MEBA_NXZ
    MCVAPI bool canMakeStepSound() const;

    // symbol: ??0Arrow@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Arrow(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?addMobEffect@Arrow@@QEAAXVMobEffectInstance@@@Z
    MCAPI void addMobEffect(class MobEffectInstance);

    // symbol: ?getAuxValue@Arrow@@QEBAHXZ
    MCAPI int getAuxValue() const;

    // symbol: ?setCritical@Arrow@@QEAAX_N@Z
    MCAPI void setCritical(bool);

    // symbol: ?setEnchantFlame@Arrow@@QEAAXH@Z
    MCAPI void setEnchantFlame(int);

    // symbol: ?setEnchantInfinity@Arrow@@QEAAXH@Z
    MCAPI void setEnchantInfinity(int);

    // symbol: ?setEnchantPower@Arrow@@QEAAXH@Z
    MCAPI void setEnchantPower(int);

    // symbol: ?setEnchantPunch@Arrow@@QEAAXH@Z
    MCAPI void setEnchantPunch(int);

    // NOLINTEND
};
