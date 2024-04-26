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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
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
    // vIndex: 4, symbol: ?reloadHardcoded@Shulker@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 9, symbol: ?_doInitialMove@Shulker@@UEAAXXZ
    virtual void _doInitialMove();

    // vIndex: 10, symbol: __gen_??1Shulker@@UEAA@XZ
    virtual ~Shulker() = default;

    // vIndex: 33, symbol: ?isInWall@Shulker@@UEBA_NXZ
    virtual bool isInWall() const;

    // vIndex: 38, symbol: ?getShadowRadius@Shulker@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 55, symbol: ?canAttack@Shulker@@UEBA_NPEAVActor@@_N@Z
    virtual bool canAttack(class Actor* actor, bool allowInvulnerable) const;

    // vIndex: 67, symbol: ?shouldRender@Shulker@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 70, symbol: ?isInvulnerableTo@Shulker@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 76, symbol: ?getPickRadius@Shulker@@UEAAMXZ
    virtual float getPickRadius();

    // vIndex: 146, symbol: ?updateEntitySpecificMolangVariables@Shulker@@MEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 148, symbol: ?_hurt@Shulker@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@Shulker@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Shulker@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 162, symbol: ?checkSpawnRules@Shulker@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 167, symbol: ?getMaxHeadXRot@Shulker@@UEAAMXZ
    virtual float getMaxHeadXRot();

    // vIndex: 170, symbol: ?getArmorValue@Shulker@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 188, symbol:
    // ?initBodyControl@Shulker@@UEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // symbol: ??0Shulker@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Shulker(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?postNormalTick@Shulker@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?applyShulkerBounds@Shulker@@SAXAEBUShulkerBounds@@AEAVEntityContext@@@Z
    MCAPI static void applyShulkerBounds(struct ShulkerBounds const&, class EntityContext&);

    // symbol: ?computeShulkerBounds@Shulker@@SA?AUShulkerBounds@@AEBUShulkerBoundsInput@@@Z
    MCAPI static struct ShulkerBounds computeShulkerBounds(struct ShulkerBoundsInput const&);

    // symbol: ?postSetPosSetShulkerAttachPosAndPeekAmount@Shulker@@SAXVSynchedActorDataWriter@@AEBVBlockPos@@@Z
    MCAPI static void
    postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter data, class BlockPos const&);

    // symbol: ?setShulkerAttachPos@Shulker@@SAXVSynchedActorDataWriter@@AEBVBlockPos@@@Z
    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter data, class BlockPos const& pos);

    // symbol: ?COVERED_ARMOR_MODIFIER@Shulker@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;

    // symbol: ?COVERED_ARMOR_MODIFIER_UUID@Shulker@@2VUUID@mce@@B
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canOpenLidAt@Shulker@@IEBA_NVBlockPos@@E@Z
    MCAPI bool _canOpenLidAt(class BlockPos position, uchar direction) const;

    // symbol: ?_setPeekAmount@Shulker@@KAXVSynchedActorDataWriter@@H@Z
    MCAPI static void _setPeekAmount(class SynchedActorDataWriter data, int amount);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateBB@Shulker@@AEAAXXZ
    MCAPI void _calculateBB();

    // symbol: ?_isPosOccupiedByOtherShulker@Shulker@@AEBA_NVBlockPos@@@Z
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos blockPos) const;

    // symbol: ?_isValidAttach@Shulker@@AEAA_NVBlockPos@@E@Z
    MCAPI bool _isValidAttach(class BlockPos attachPos, uchar direction);

    // symbol: ?_peekAmountTick@Shulker@@AEAAXXZ
    MCAPI void _peekAmountTick();

    // symbol: ?_setAttachFace@Shulker@@AEAAXE@Z
    MCAPI void _setAttachFace(uchar facing);

    // symbol: ?_tryAttachingToNeighbouringFaces@Shulker@@AEAA_NVBlockPos@@@Z
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos currentPos);

    // symbol: ?_trySpawnShulker@Shulker@@AEAAXXZ
    MCAPI void _trySpawnShulker();

    // symbol: ?_tryTeleportSomewhere@Shulker@@AEAA_NXZ
    MCAPI bool _tryTeleportSomewhere();

    // NOLINTEND
};
