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
    // vIndex: 4, symbol: ?reloadHardcoded@Shulker@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 9, symbol: ?_doInitialMove@Shulker@@UEAAXXZ
    virtual void _doInitialMove();

    // vIndex: 10, symbol: __gen_??1Shulker@@UEAA@XZ
    virtual ~Shulker() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 36, symbol: ?isInWall@Shulker@@UEBA_NXZ
    virtual bool isInWall() const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@Shulker@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 64, symbol: ?canAttack@Shulker@@UEBA_NPEAVActor@@_N@Z
    virtual bool canAttack(class Actor*, bool) const;

    // vIndex: 76, symbol: ?shouldRender@Shulker@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 79, symbol: ?isInvulnerableTo@Shulker@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 85, symbol: ?getPickRadius@Shulker@@UEAAMXZ
    virtual float getPickRadius();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 163, symbol: ?updateEntitySpecificMolangVariables@Shulker@@MEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Shulker@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@Shulker@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@Shulker@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 171, symbol: ?_onSizeUpdated@Shulker@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 183, symbol: ?checkSpawnRules@Shulker@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 188, symbol: ?getMaxHeadXRot@Shulker@@UEAAMXZ
    virtual float getMaxHeadXRot();

    // vIndex: 191, symbol: ?getArmorValue@Shulker@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 210, symbol:
    // ?initBodyControl@Shulker@@UEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // symbol: ?breaksFallingBlocks@Shulker@@UEBA_NXZ
    MCVAPI bool breaksFallingBlocks() const;

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
