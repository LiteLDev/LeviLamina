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
#include "mc/world/item/components/ItemUseMethod.h"

class HangingActor : public ::Actor {
public:
    // prevent constructor by default
    HangingActor& operator=(HangingActor const&);
    HangingActor(HangingActor const&);
    HangingActor();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol:
    // ?reloadHardcoded@HangingActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 11, symbol:
    // ?reloadHardcodedClient@HangingActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@HangingActor@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 76, symbol: ?getBrightness@HangingActor@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 82, symbol: ?isPickable@HangingActor@@UEAA_NXZ
    virtual bool isPickable();

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

    // vIndex: 120, symbol: ?isInvulnerableTo@HangingActor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 212, symbol: ?setSize@HangingActor@@UEAAXMM@Z
    virtual void setSize(float, float);

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@HangingActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: ?readAdditionalSaveData@HangingActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@HangingActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 254, symbol: ?setDir@HangingActor@@UEAAXH@Z
    virtual void setDir(int);

    // vIndex: 255, symbol: ?getWidth@Painting@@UEBAHXZ
    virtual int getWidth() const = 0;

    // vIndex: 256, symbol: ?getHeight@Painting@@UEBAHXZ
    virtual int getHeight() const = 0;

    // vIndex: 257, symbol: ?dropItem@Painting@@UEAAXXZ
    virtual void dropItem() = 0;

    // vIndex: 258, symbol: ?placeHangingEntity@HangingActor@@UEAA_NAEAVBlockSource@@H@Z
    virtual bool placeHangingEntity(class BlockSource&, int);

    // vIndex: 259, symbol: ?wouldSurvive@HangingActor@@UEAA_NAEAVBlockSource@@@Z
    virtual bool wouldSurvive(class BlockSource&);

    // symbol: ??1HangingActor@@UEAA@XZ
    MCVAPI ~HangingActor();

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
    auto& $HANGING_OFFSET() { return HANGING_OFFSET; }

    // NOLINTEND
};
