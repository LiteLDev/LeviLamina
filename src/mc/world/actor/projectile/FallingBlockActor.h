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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FallingBlockActor : public ::PredictableProjectile {
public:
    // prevent constructor by default
    FallingBlockActor& operator=(FallingBlockActor const&);
    FallingBlockActor(FallingBlockActor const&);
    FallingBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol:
    // ?reloadHardcoded@FallingBlockActor@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1FallingBlockActor@@UEAA@XZ
    virtual ~FallingBlockActor() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 26, symbol: ?teleportTo@FallingBlockActor@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool);

    // vIndex: 29, symbol: ?normalTick@FallingBlockActor@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: ?getShadowRadius@FallingBlockActor@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 51, symbol: ?isPickable@FallingBlockActor@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 106, symbol: ?canChangeDimensionsUsingPortal@FallingBlockActor@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 111, symbol: ?causeFallDamageToActor@FallingBlockActor@@UEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 112, symbol: ?onSynchedDataUpdate@FallingBlockActor@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 145, symbol: ?getDeletionDelayTimeSeconds@FallingBlockActor@@UEBAMXZ
    virtual float getDeletionDelayTimeSeconds() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@FallingBlockActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 164, symbol: ?readAdditionalSaveData@FallingBlockActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 165, symbol: ?addAdditionalSaveData@FallingBlockActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ??0FallingBlockActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI FallingBlockActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?breakBlock@FallingBlockActor@@QEAAXXZ
    MCAPI void breakBlock();

    // symbol: ?doNormalTick@FallingBlockActor@@QEAAXAEAVITickDelegate@@@Z
    MCAPI void doNormalTick(class ITickDelegate&);

    // symbol: ?getFallingBlock@FallingBlockActor@@QEBAAEBVBlock@@XZ
    MCAPI class Block const& getFallingBlock() const;

    // symbol: ?setFallDamageAmount@FallingBlockActor@@QEAAXM@Z
    MCAPI void setFallDamageAmount(float amount);

    // symbol: ?setFallingBlock@FallingBlockActor@@QEAAXAEBVBlock@@_N@Z
    MCAPI void setFallingBlock(class Block const& block, bool creative);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_waitRemoval@FallingBlockActor@@AEAAXXZ
    MCAPI void _waitRemoval();

    // NOLINTEND
};
