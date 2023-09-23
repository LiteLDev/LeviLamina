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

    // vIndex: 51, symbol: ?isInWall@Shulker@@UEBA_NXZ
    virtual bool isInWall() const;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@Shulker@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

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

    // vIndex: 99, symbol: ?canAttack@Shulker@@UEBA_NPEAVActor@@_N@Z
    virtual bool canAttack(class Actor*, bool) const;

    // vIndex: 116, symbol: ?shouldRender@Shulker@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 119, symbol: ?isInvulnerableTo@Shulker@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 126, symbol: ?getPickRadius@Shulker@@UEAAMXZ
    virtual float getPickRadius();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 233, symbol: ?updateEntitySpecificMolangVariables@Shulker@@MEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@Shulker@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 239, symbol: ?readAdditionalSaveData@Shulker@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@Shulker@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 247, symbol: ?_onSizeUpdated@Shulker@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 262, symbol: ?checkSpawnRules@Shulker@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 271, symbol: ?getMaxHeadXRot@Shulker@@UEAAMXZ
    virtual float getMaxHeadXRot();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 279, symbol: ?getArmorValue@Shulker@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 311, symbol:
    // ?initBodyControl@Shulker@@UEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

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
