#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/SubClientId.h"
#include "mc/enums/TravelMethod.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/events/MovementEventType.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorPlayer; }
namespace ScriptModuleMinecraft { struct ScriptNavigationResult; }
namespace gametest { class BaseGameTestHelper; }
namespace mce { class UUID; }
// clang-format on

class SimulatedPlayer : public ::ServerPlayer {
public:
    // prevent constructor by default
    SimulatedPlayer& operator=(SimulatedPlayer const&);
    SimulatedPlayer(SimulatedPlayer const&);
    SimulatedPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 12, symbol:
    // ?initializeComponents@SimulatedPlayer@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 38, symbol: ?teleportTo@SimulatedPlayer@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

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

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 259, symbol: ?aiStep@SimulatedPlayer@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 326, symbol: __unk_vfn_326
    virtual void __unk_vfn_326();

    // vIndex: 333, symbol: __unk_vfn_333
    virtual void __unk_vfn_333();

    // vIndex: 334, symbol: __unk_vfn_334
    virtual void __unk_vfn_334();

    // vIndex: 336, symbol: __unk_vfn_336
    virtual void __unk_vfn_336();

    // vIndex: 337, symbol: __unk_vfn_337
    virtual void __unk_vfn_337();

    // vIndex: 342, symbol: __unk_vfn_342
    virtual void __unk_vfn_342();

    // vIndex: 343, symbol: __unk_vfn_343
    virtual void __unk_vfn_343();

    // vIndex: 346, symbol: __unk_vfn_346
    virtual void __unk_vfn_346();

    // vIndex: 349, symbol: __unk_vfn_349
    virtual void __unk_vfn_349();

    // vIndex: 350, symbol: __unk_vfn_350
    virtual void __unk_vfn_350();

    // vIndex: 361, symbol: __unk_vfn_361
    virtual void __unk_vfn_361();

    // vIndex: 362, symbol: ?isHostingPlayer@SimulatedPlayer@@UEBA_NXZ
    virtual bool isHostingPlayer() const;

    // vIndex: 365, symbol: __unk_vfn_365
    virtual void __unk_vfn_365();

    // vIndex: 372, symbol: __unk_vfn_372
    virtual void __unk_vfn_372();

    // vIndex: 395, symbol: __unk_vfn_395
    virtual void __unk_vfn_395();

    // vIndex: 396, symbol:
    // ?getXuid@SimulatedPlayer@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getXuid() const;

    // vIndex: 397, symbol: ?getMovementSettings@SimulatedPlayer@@UEBAAEBUPlayerMovementSettings@@XZ
    virtual struct PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 398, symbol: __unk_vfn_398
    virtual void __unk_vfn_398();

    // vIndex: 401, symbol:
    // ?_createChunkSource@SimulatedPlayer@@MEAA?AV?$shared_ptr@VChunkViewSource@@@std@@AEAVChunkSource@@@Z
    virtual std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource&);

    // vIndex: 405, symbol: ?_getSpawnChunkLimit@SimulatedPlayer@@MEBAHXZ
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 406, symbol: ?_updateChunkPublisherView@SimulatedPlayer@@MEAAXAEBVVec3@@M@Z
    virtual void _updateChunkPublisherView(class Vec3 const&, float);

    // symbol: ?isSimulated@SimulatedPlayer@@UEBA_NXZ
    MCVAPI bool isSimulated() const;

    // symbol:
    // ??0SimulatedPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVNetworkSystem@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z
    MCAPI
    SimulatedPlayer(class Level&, class PacketSender&, class NetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&, ::GameType, class NetworkIdentifier const&, ::SubClientId, std::function<void(class ServerPlayer&)>, class mce::UUID, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&);

    // symbol: ?getGameTestHelper@SimulatedPlayer@@QEBA?AV?$NonOwnerPointer@VBaseGameTestHelper@gametest@@@Bedrock@@XZ
    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;

    // symbol: ?postAiStep@SimulatedPlayer@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?preAiStep@SimulatedPlayer@@QEAAXXZ
    MCAPI void preAiStep();

    // symbol: ?setGameTestHelper@SimulatedPlayer@@QEAAXV?$NonOwnerPointer@VBaseGameTestHelper@gametest@@@Bedrock@@@Z
    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>);

    // symbol: ?setXuid@SimulatedPlayer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setXuid(std::string const&);

    // symbol: ?simulateAttack@SimulatedPlayer@@QEAA_NPEAVActor@@@Z
    MCAPI bool simulateAttack(class Actor*);

    // symbol: ?simulateAttack@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateAttack();

    // symbol: ?simulateDestroyBlock@SimulatedPlayer@@QEAA_NAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
    MCAPI bool simulateDestroyBlock(class BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing);

    // symbol: ?simulateDisconnect@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateDisconnect();

    // symbol: ?simulateDropSelectedItem@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateDropSelectedItem();

    // symbol: ?simulateFly@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateFly();

    // symbol: ?simulateGiveItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@_N@Z
    MCAPI bool simulateGiveItem(class ItemStack&, bool);

    // symbol: ?simulateInteract@SimulatedPlayer@@QEAA_NAEAVActor@@@Z
    MCAPI bool simulateInteract(class Actor&);

    // symbol: ?simulateInteract@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateInteract();

    // symbol: ?simulateInteract@SimulatedPlayer@@QEAA_NAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
    MCAPI bool simulateInteract(class BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing);

    // symbol: ?simulateJump@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateJump();

    // symbol: ?simulateLocalMove@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
    MCAPI void simulateLocalMove(class Vec3 const&, float);

    // symbol: ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVBlockPos@@@Z
    MCAPI void simulateLookAt(class BlockPos const&);

    // symbol: ?simulateLookAt@SimulatedPlayer@@QEAAXAEAVActor@@@Z
    MCAPI void simulateLookAt(class Actor&);

    // symbol: ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVVec3@@@Z
    MCAPI void simulateLookAt(class Vec3 const&);

    // symbol: ?simulateMoveToLocation@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
    MCAPI void simulateMoveToLocation(class Vec3 const&, float);

    // symbol:
    // ?simulateNavigateToEntity@SimulatedPlayer@@QEAA?AUScriptNavigationResult@ScriptModuleMinecraft@@AEAVActor@@M@Z
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToEntity(class Actor&, float);

    // symbol:
    // ?simulateNavigateToLocation@SimulatedPlayer@@QEAA?AUScriptNavigationResult@ScriptModuleMinecraft@@AEBVVec3@@M@Z
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToLocation(class Vec3 const&, float);

    // symbol:
    // ?simulateNavigateToLocations@SimulatedPlayer@@QEAAX$$QEAV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@M@Z
    MCAPI void simulateNavigateToLocations(std::vector<class Vec3>&&, float);

    // symbol: ?simulateRespawn@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateRespawn();

    // symbol: ?simulateSetBodyRotation@SimulatedPlayer@@QEAAXM@Z
    MCAPI void simulateSetBodyRotation(float);

    // symbol: ?simulateSetItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@_NH@Z
    MCAPI bool simulateSetItem(class ItemStack&, bool, int);

    // symbol: ?simulateStopDestroyingBlock@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateStopDestroyingBlock();

    // symbol: ?simulateStopFlying@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateStopFlying();

    // symbol: ?simulateStopInteracting@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateStopInteracting();

    // symbol: ?simulateStopMoving@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateStopMoving();

    // symbol: ?simulateStopUsingItem@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateStopUsingItem();

    // symbol: ?simulateUseItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@@Z
    MCAPI bool simulateUseItem(class ItemStack&);

    // symbol: ?simulateUseItemInSlot@SimulatedPlayer@@QEAA_NH@Z
    MCAPI bool simulateUseItemInSlot(int);

    // symbol:
    // ?simulateUseItemInSlotOnBlock@SimulatedPlayer@@QEAA_NHAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@AEBVVec3@@@Z
    MCAPI bool
    simulateUseItemInSlotOnBlock(int, class BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing, class Vec3 const&);

    // symbol:
    // ?simulateUseItemOnBlock@SimulatedPlayer@@QEAA_NAEAVItemStack@@AEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@AEBVVec3@@@Z
    MCAPI bool
    simulateUseItemOnBlock(class ItemStack&, class BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing, class Vec3 const&);

    // symbol: ?simulateWorldMove@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
    MCAPI void simulateWorldMove(class Vec3 const&, float);

    // symbol:
    // ?create@SimulatedPlayer@@SAPEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@0@Z
    MCAPI static class SimulatedPlayer*
    create(std::string const&, class BlockPos const&, DimensionType, Bedrock::NotNullNonOwnerPtr<class ServerNetworkHandler>, std::string const&);

    // symbol: ?tryGetFromEntity@SimulatedPlayer@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class SimulatedPlayer* tryGetFromEntity(class EntityContext&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addMoveComponent@SimulatedPlayer@@AEAAXXZ
    MCAPI void _addMoveComponent();

    // symbol:
    // ?_createNavigationResult@SimulatedPlayer@@AEBA?AUScriptNavigationResult@ScriptModuleMinecraft@@PEAVNavigationComponent@@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult
    _createNavigationResult(class NavigationComponent*) const;

    // symbol: ?_getInputSpeed@SimulatedPlayer@@AEAAMXZ
    MCAPI float _getInputSpeed();

    // symbol: ?_startCooldown@SimulatedPlayer@@AEAAXXZ
    MCAPI void _startCooldown();

    // symbol: ?_trySwing@SimulatedPlayer@@AEAA_NXZ
    MCAPI bool _trySwing();

    // symbol: ?_updateMovement@SimulatedPlayer@@AEAAXXZ
    MCAPI void _updateMovement();

    // NOLINTEND
};
