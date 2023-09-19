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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class Shulker : public ::Mob {
public:
    // prevent constructor by default
    Shulker& operator=(Shulker const&);
    Shulker(Shulker const&);
    Shulker();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@Shulker@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 15, symbol: ?_doInitialMove@Shulker@@UEAAXXZ
    virtual void _doInitialMove();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 52, symbol: ?isInWall@Shulker@@UEBA_NXZ
    virtual bool isInWall() const;

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?getShadowRadius@Shulker@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

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

    // vIndex: 100, symbol: ?canAttack@Shulker@@UEBA_NPEAVActor@@_N@Z
    virtual bool canAttack(class Actor*, bool) const;

    // vIndex: 117, symbol: ?shouldRender@Shulker@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 120, symbol: ?isInvulnerableTo@Shulker@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 128, symbol: ?getPickRadius@Shulker@@UEAAMXZ
    virtual float getPickRadius();

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

    // vIndex: 237, symbol: ?updateEntitySpecificMolangVariables@Shulker@@MEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@Shulker@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: ?readAdditionalSaveData@Shulker@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@Shulker@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 252, symbol: ?_onSizeUpdated@Shulker@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 268, symbol: ?checkSpawnRules@Shulker@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 277, symbol: ?getMaxHeadXRot@Shulker@@UEAAMXZ
    virtual float getMaxHeadXRot();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 285, symbol: ?getArmorValue@Shulker@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 317, symbol:
    // ?initBodyControl@Shulker@@UEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // symbol: ?breaksFallingBlocks@Shulker@@UEBA_NXZ
    MCVAPI bool breaksFallingBlocks() const;

    // symbol: ?isLeashableType@Shulker@@UEAA_NXZ
    MCVAPI bool isLeashableType();

    // symbol: ??0Shulker@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Shulker(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?postNormalTick@Shulker@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?postSetPosSetShulkerAttachPosAndPeekAmount@Shulker@@SAXVSynchedActorDataWriter@@AEBVBlockPos@@@Z
    MCAPI static void postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter, class BlockPos const&);

    // symbol: ?setShulkerAttachPos@Shulker@@SAXVSynchedActorDataWriter@@AEBVBlockPos@@@Z
    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter, class BlockPos const&);

    // symbol: ?COVERED_ARMOR_MODIFIER@Shulker@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;

    // symbol: ?COVERED_ARMOR_MODIFIER_UUID@Shulker@@2VUUID@mce@@B
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canOpenLidAt@Shulker@@IEBA_NVBlockPos@@E@Z
    MCAPI bool _canOpenLidAt(class BlockPos, uchar) const;

    // symbol: ?_setPeekAmount@Shulker@@KAXVSynchedActorDataWriter@@H@Z
    MCAPI static void _setPeekAmount(class SynchedActorDataWriter, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateBB@Shulker@@AEAAXXZ
    MCAPI void _calculateBB();

    // symbol: ?_isPosOccupiedByOtherShulker@Shulker@@AEBA_NVBlockPos@@@Z
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos) const;

    // symbol: ?_isValidAttach@Shulker@@AEAA_NVBlockPos@@E@Z
    MCAPI bool _isValidAttach(class BlockPos, uchar);

    // symbol: ?_peekAmountTick@Shulker@@AEAAXXZ
    MCAPI void _peekAmountTick();

    // symbol: ?_tryAttachingToNeighbouringFaces@Shulker@@AEAA_NVBlockPos@@@Z
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos);

    // symbol: ?_trySpawnShulker@Shulker@@AEAAXXZ
    MCAPI void _trySpawnShulker();

    // symbol: ?_tryTeleportSomewhere@Shulker@@AEAA_NXZ
    MCAPI bool _tryTeleportSomewhere();

    // NOLINTEND
};
