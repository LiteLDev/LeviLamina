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
    // vIndex: 10, symbol: ?reloadHardcoded@Arrow@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@Arrow@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 77, symbol: ?playerTouch@Arrow@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 207, symbol: ?setAuxValue@Arrow@@UEAAXH@Z
    virtual void setAuxValue(int);

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 239, symbol: ?readAdditionalSaveData@Arrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@Arrow@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?shoot@Arrow@@UEAAXAEBVVec3@@MM0@Z
    virtual void shoot(class Vec3 const&, float, float, class Vec3 const&);

    // vIndex: 251, symbol: ?_getPickupItem@Arrow@@MEBA?AVItemStack@@XZ
    virtual class ItemStack _getPickupItem() const;

    // vIndex: 252, symbol: ?applyParticleColor@Arrow@@MEAAXPEAVParticle@@@Z
    virtual void applyParticleColor(class Particle*);

    // vIndex: 253, symbol: ?getEffectColor@Arrow@@MEAA?AVColor@mce@@XZ
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
