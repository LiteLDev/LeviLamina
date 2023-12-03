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
#include "mc/world/item/components/ItemUseMethod.h"

class HangingActor : public ::Actor {
public:
    // prevent constructor by default
    HangingActor& operator=(HangingActor const&);
    HangingActor(HangingActor const&);
    HangingActor();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@HangingActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 5, symbol:
    // ?reloadHardcodedClient@HangingActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: ??1HangingActor@@UEAA@XZ
    virtual ~HangingActor();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@HangingActor@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 46, symbol: ?getBrightness@HangingActor@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 51, symbol: ?isPickable@HangingActor@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 79, symbol: ?isInvulnerableTo@HangingActor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 144, symbol: ?setSize@HangingActor@@UEAAXMM@Z
    virtual void setSize(float, float);

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@HangingActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@HangingActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@HangingActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?setDir@HangingActor@@UEAAXH@Z
    virtual void setDir(int);

    // vIndex: 174, symbol: ?getWidth@Painting@@UEBAHXZ
    virtual int getWidth() const = 0;

    // vIndex: 175, symbol: ?getHeight@Painting@@UEBAHXZ
    virtual int getHeight() const = 0;

    // vIndex: 176, symbol: ?dropItem@Painting@@UEAAXXZ
    virtual void dropItem() = 0;

    // vIndex: 177, symbol: ?placeHangingEntity@HangingActor@@UEAA_NAEAVBlockSource@@H@Z
    virtual bool placeHangingEntity(class BlockSource&, int);

    // vIndex: 178, symbol: ?wouldSurvive@HangingActor@@UEAA_NAEAVBlockSource@@@Z
    virtual bool wouldSurvive(class BlockSource&);

    // symbol: ??0HangingActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI HangingActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getDirection@HangingActor@@QEBAHXZ
    MCAPI int getDirection() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_calculateAABB@HangingActor@@IEAAXXZ
    MCAPI void _calculateAABB();

    // symbol: ?_calculateActorPositionFromPlacementPosition@HangingActor@@IEAAXAEBVBlockPos@@@Z
    MCAPI void _calculateActorPositionFromPlacementPosition(class BlockPos const&);

    // symbol: ?_wouldSurvive@HangingActor@@IEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI bool _wouldSurvive(class BlockSource&, class BlockPos const&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_blockContainsObstruction@HangingActor@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _blockContainsObstruction(class BlockSource const&, class BlockPos const&) const;

    // symbol: ?_blockIsObstruction@HangingActor@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _blockIsObstruction(class BlockSource const&, class BlockPos const&) const;

    // symbol: ?_canSurviveOnBlock@HangingActor@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI bool _canSurviveOnBlock(class BlockSource const&, class BlockPos const&, bool) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?HANGING_OFFSET@HangingActor@@0MB
    MCAPI static float const HANGING_OFFSET;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $HANGING_OFFSET() { return HANGING_OFFSET; }

    // NOLINTEND
};
