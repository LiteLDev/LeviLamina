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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

class FallingBlockActor : public ::PredictableProjectile {
public:
    // prevent constructor by default
    FallingBlockActor& operator=(FallingBlockActor const&);
    FallingBlockActor(FallingBlockActor const&);
    FallingBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol:
    // ?reloadHardcoded@FallingBlockActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1FallingBlockActor@@UEAA@XZ
    virtual ~FallingBlockActor() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 26, symbol: ?teleportTo@FallingBlockActor@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);

    // vIndex: 29, symbol: ?normalTick@FallingBlockActor@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@FallingBlockActor@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 51, symbol: ?isPickable@FallingBlockActor@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 108, symbol: ?canChangeDimensionsUsingPortal@FallingBlockActor@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 113, symbol: ?causeFallDamageToActor@FallingBlockActor@@UEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 114, symbol: ?onSynchedDataUpdate@FallingBlockActor@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: ?getDeletionDelayTimeSeconds@FallingBlockActor@@UEBAMXZ
    virtual float getDeletionDelayTimeSeconds() const;

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@FallingBlockActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@FallingBlockActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@FallingBlockActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // symbol: ??0FallingBlockActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI FallingBlockActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?breakBlock@FallingBlockActor@@QEAAXXZ
    MCAPI void breakBlock();

    // symbol: ?doNormalTick@FallingBlockActor@@QEAAXAEAVITickDelegate@@@Z
    MCAPI void doNormalTick(class ITickDelegate&);

    // symbol: ?getFallingBlock@FallingBlockActor@@QEBAAEBVBlock@@XZ
    MCAPI class Block const& getFallingBlock() const;

    // symbol: ?setFallDamageAmount@FallingBlockActor@@QEAAXM@Z
    MCAPI void setFallDamageAmount(float);

    // symbol: ?setFallingBlock@FallingBlockActor@@QEAAXAEBVBlock@@_N@Z
    MCAPI void setFallingBlock(class Block const&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_waitRemoval@FallingBlockActor@@AEAAXXZ
    MCAPI void _waitRemoval();

    // NOLINTEND
};
