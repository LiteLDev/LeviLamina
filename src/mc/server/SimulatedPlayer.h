#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
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
    // vIndex: 6, symbol:
    // ?initializeComponents@SimulatedPlayer@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1SimulatedPlayer@@UEAA@XZ
    virtual ~SimulatedPlayer() = default;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 26, symbol: ?teleportTo@SimulatedPlayer@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 120, symbol: __unk_vfn_120
    virtual void __unk_vfn_120();

    // vIndex: 142, symbol: __unk_vfn_142
    virtual void __unk_vfn_142();

    // vIndex: 143, symbol: __unk_vfn_143
    virtual void __unk_vfn_143();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 154, symbol: __unk_vfn_154
    virtual void __unk_vfn_154();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 181, symbol: ?aiStep@SimulatedPlayer@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 204, symbol: __unk_vfn_204
    virtual void __unk_vfn_204();

    // vIndex: 212, symbol: __unk_vfn_212
    virtual void __unk_vfn_212();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 227, symbol: __unk_vfn_227
    virtual void __unk_vfn_227();

    // vIndex: 228, symbol: __unk_vfn_228
    virtual void __unk_vfn_228();

    // vIndex: 230, symbol: __unk_vfn_230
    virtual void __unk_vfn_230();

    // vIndex: 231, symbol: __unk_vfn_231
    virtual void __unk_vfn_231();

    // vIndex: 232, symbol: __unk_vfn_232
    virtual void __unk_vfn_232();

    // vIndex: 233, symbol: __unk_vfn_233
    virtual void __unk_vfn_233();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 238, symbol: __unk_vfn_238
    virtual void __unk_vfn_238();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?isHostingPlayer@SimulatedPlayer@@UEBA_NXZ
    virtual bool isHostingPlayer() const;

    // vIndex: 252, symbol: __unk_vfn_252
    virtual void __unk_vfn_252();

    // vIndex: 273, symbol: __unk_vfn_273
    virtual void __unk_vfn_273();

    // vIndex: 274, symbol:
    // ?getXuid@SimulatedPlayer@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getXuid() const;

    // vIndex: 275, symbol: ?getMovementSettings@SimulatedPlayer@@UEBAAEBUPlayerMovementSettings@@XZ
    virtual struct PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 278, symbol:
    // ?_createChunkSource@SimulatedPlayer@@MEAA?AV?$shared_ptr@VChunkViewSource@@@std@@AEAVChunkSource@@@Z
    virtual std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource&);

    // vIndex: 282, symbol: ?_getSpawnChunkLimit@SimulatedPlayer@@MEBAHXZ
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 283, symbol: ?_updateChunkPublisherView@SimulatedPlayer@@MEAAXAEBVVec3@@M@Z
    virtual void _updateChunkPublisherView(class Vec3 const&, float);

    // symbol: ?isSimulated@SimulatedPlayer@@UEBA_NXZ
    MCVAPI bool isSimulated() const;

    // symbol:
    // ??0SimulatedPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVServerNetworkSystem@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z
    MCAPI SimulatedPlayer(class Level&, class PacketSender&, class ServerNetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&, ::GameType, class NetworkIdentifier const&, ::SubClientId, std::function<void(class ServerPlayer&)>, class mce::UUID, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&);

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

    // symbol: ?simulateAttack@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateAttack();

    // symbol: ?simulateAttack@SimulatedPlayer@@QEAA_NPEAVActor@@@Z
    MCAPI bool simulateAttack(class Actor*);

    // symbol: ?simulateChat@SimulatedPlayer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void simulateChat(std::string const&);

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

    // symbol: ?simulateInteract@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateInteract();

    // symbol: ?simulateInteract@SimulatedPlayer@@QEAA_NAEAVActor@@@Z
    MCAPI bool simulateInteract(class Actor&);

    // symbol: ?simulateInteract@SimulatedPlayer@@QEAA_NAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
    MCAPI bool simulateInteract(class BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing);

    // symbol: ?simulateJump@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateJump();

    // symbol: ?simulateLocalMove@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
    MCAPI void simulateLocalMove(class Vec3 const&, float);

    // symbol: ?simulateLookAt@SimulatedPlayer@@QEAAXAEAVActor@@@Z
    MCAPI void simulateLookAt(class Actor&);

    // symbol: ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVBlockPos@@@Z
    MCAPI void simulateLookAt(class BlockPos const&);

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
