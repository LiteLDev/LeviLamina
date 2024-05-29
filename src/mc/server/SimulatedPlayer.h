#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
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
#include "mc/server/sim/LookDuration.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorPlayer; }
namespace ScriptModuleGameTest { struct ScriptNavigationResult; }
namespace gametest { class BaseGameTestHelper; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class SimulatedPlayer : public ::ServerPlayer {
public:
    LLAPI static optional_ref<SimulatedPlayer> create(
        std::string const& name,
        class Vec3 const&  pos      = Vec3::MIN,
        DimensionType      dimId    = 0,
        class Vec2 const&  rotation = Vec2::ZERO
    );

    [[nodiscard]] inline bool simulateSneaking() {
        setSneaking(true);
        return isSneaking();
    };
    [[nodiscard]] inline bool simulateStopSneaking() {
        setSneaking(false);
        return !isSneaking();
    };
    inline bool simulateUseItem() { return simulateUseItemInSlot(getSelectedItemSlot()); };

    LLAPI bool simulateDestroyLookAt(float handLength = 5.5f);

    // prevent constructor by default
    SimulatedPlayer& operator=(SimulatedPlayer const&);
    SimulatedPlayer(SimulatedPlayer const&);
    SimulatedPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol:
    // ?initializeComponents@SimulatedPlayer@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1SimulatedPlayer@@UEAA@XZ
    virtual ~SimulatedPlayer() = default;

    // vIndex: 23, symbol: ?teleportTo@SimulatedPlayer@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool);

    // vIndex: 160, symbol: ?aiStep@SimulatedPlayer@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 247, symbol: ?isSimulated@SimulatedPlayer@@UEBA_NXZ
    virtual bool isSimulated() const;

    // vIndex: 248, symbol:
    // ?getXuid@SimulatedPlayer@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getXuid() const;

    // vIndex: 249, symbol: ?getMovementSettings@SimulatedPlayer@@UEBAAEBUPlayerMovementSettings@@XZ
    virtual struct PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 253, symbol:
    // ?_createChunkSource@SimulatedPlayer@@MEAA?AV?$shared_ptr@VChunkViewSource@@@std@@AEAVChunkSource@@@Z
    virtual std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource& mainChunkSource);

    // vIndex: 257, symbol: ?_getSpawnChunkLimit@SimulatedPlayer@@MEBAHXZ
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 258, symbol: ?_updateChunkPublisherView@SimulatedPlayer@@MEAAXAEBVVec3@@M@Z
    virtual void _updateChunkPublisherView(class Vec3 const&, float);

    // symbol:
    // ??0SimulatedPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVServerNetworkSystem@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z
    MCAPI SimulatedPlayer(
        class Level&                                           level,
        class PacketSender&                                    packetSender,
        class ServerNetworkSystem&                             network,
        class ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                             playerGameType,
        class NetworkIdentifier const&                         owner,
        ::SubClientId                                          subid,
        std::function<void(class ServerPlayer&)>,
        class mce::UUID                    uuid,
        std::string const&                 deviceId,
        std::unique_ptr<class Certificate> certificate,
        int                                maxChunkRadius,
        bool                               enableItemStackNetManager,
        class EntityContext&               entityContext
    );

    // symbol: ?getGameTestHelper@SimulatedPlayer@@QEBA?AV?$NonOwnerPointer@VBaseGameTestHelper@gametest@@@Bedrock@@XZ
    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;

    // symbol: ?postAiStep@SimulatedPlayer@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?preAiStep@SimulatedPlayer@@QEAAXXZ
    MCAPI void preAiStep();

    // symbol: ?setGameTestHelper@SimulatedPlayer@@QEAAXV?$NonOwnerPointer@VBaseGameTestHelper@gametest@@@Bedrock@@@Z
    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>);

    // symbol: ?setXuid@SimulatedPlayer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setXuid(std::string const& xuid);

    // symbol: ?simulateAttack@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateAttack();

    // symbol: ?simulateAttack@SimulatedPlayer@@QEAA_NPEAVActor@@@Z
    MCAPI bool simulateAttack(class Actor* actor);

    // symbol: ?simulateChat@SimulatedPlayer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void simulateChat(std::string const&);

    // symbol: ?simulateDestroyBlock@SimulatedPlayer@@QEAA_NAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
    MCAPI bool simulateDestroyBlock(class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    // symbol: ?simulateDisconnect@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateDisconnect();

    // symbol: ?simulateDropSelectedItem@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateDropSelectedItem();

    // symbol: ?simulateFly@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateFly();

    // symbol: ?simulateGiveItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@_N@Z
    MCAPI bool simulateGiveItem(class ItemStack& item, bool);

    // symbol: ?simulateInteract@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateInteract();

    // symbol: ?simulateInteract@SimulatedPlayer@@QEAA_NAEAVActor@@@Z
    MCAPI bool simulateInteract(class Actor& actor);

    // symbol: ?simulateInteract@SimulatedPlayer@@QEAA_NAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
    MCAPI bool simulateInteract(class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    // symbol: ?simulateJump@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateJump();

    // symbol: ?simulateLocalMove@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
    MCAPI void simulateLocalMove(class Vec3 const&, float speed);

    // symbol: ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVVec3@@@Z
    MCAPI void simulateLookAt(class Vec3 const& pos);

    // symbol: ?simulateLookAt@SimulatedPlayer@@QEAAXAEAVActor@@W4LookDuration@sim@@@Z
    MCAPI void simulateLookAt(class Actor&, ::sim::LookDuration);

    // symbol: ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVBlockPos@@W4LookDuration@sim@@@Z
    MCAPI void simulateLookAt(class BlockPos const&, ::sim::LookDuration);

    // symbol: ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVVec3@@W4LookDuration@sim@@@Z
    MCAPI void simulateLookAt(class Vec3 const&, ::sim::LookDuration);

    // symbol: ?simulateMoveToLocation@SimulatedPlayer@@QEAAXAEBVVec3@@M_N@Z
    MCAPI void simulateMoveToLocation(class Vec3 const&, float, bool);

    // symbol:
    // ?simulateNavigateToEntity@SimulatedPlayer@@QEAA?AUScriptNavigationResult@ScriptModuleGameTest@@AEAVActor@@M@Z
    MCAPI struct ScriptModuleGameTest::ScriptNavigationResult simulateNavigateToEntity(class Actor& actor, float speed);

    // symbol:
    // ?simulateNavigateToLocation@SimulatedPlayer@@QEAA?AUScriptNavigationResult@ScriptModuleGameTest@@AEBVVec3@@M@Z
    MCAPI struct ScriptModuleGameTest::ScriptNavigationResult
    simulateNavigateToLocation(class Vec3 const& position, float speed);

    // symbol:
    // ?simulateNavigateToLocations@SimulatedPlayer@@QEAAX$$QEAV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@M@Z
    MCAPI void simulateNavigateToLocations(std::vector<class Vec3>&& positions, float speed);

    // symbol: ?simulateRespawn@SimulatedPlayer@@QEAA_NXZ
    MCAPI bool simulateRespawn();

    // symbol: ?simulateSetBodyRotation@SimulatedPlayer@@QEAAXM@Z
    MCAPI void simulateSetBodyRotation(float);

    // symbol: ?simulateSetItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@_NH@Z
    MCAPI bool simulateSetItem(class ItemStack& item, bool, int slot);

    // symbol: ?simulateStartBuildInSlot@SimulatedPlayer@@QEAAXH@Z
    MCAPI void simulateStartBuildInSlot(int);

    // symbol: ?simulateStopBuild@SimulatedPlayer@@QEAAXXZ
    MCAPI void simulateStopBuild();

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
    MCAPI bool simulateUseItem(class ItemStack& item);

    // symbol: ?simulateUseItemInSlot@SimulatedPlayer@@QEAA_NH@Z
    MCAPI bool simulateUseItemInSlot(int slot);

    // symbol:
    // ?simulateUseItemInSlotOnBlock@SimulatedPlayer@@QEAA_NHAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@AEBVVec3@@@Z
    MCAPI bool
    simulateUseItemInSlotOnBlock(int slot, class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face, class Vec3 const&);

    // symbol:
    // ?simulateUseItemOnBlock@SimulatedPlayer@@QEAA_NAEAVItemStack@@AEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@AEBVVec3@@@Z
    MCAPI bool
    simulateUseItemOnBlock(class ItemStack& item, class BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face, class Vec3 const&);

    // symbol: ?simulateWorldMove@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
    MCAPI void simulateWorldMove(class Vec3 const&, float speed);

    // symbol:
    // ?create@SimulatedPlayer@@SAPEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@0@Z
    MCAPI static class SimulatedPlayer* create(
        std::string const&                                      name,
        class BlockPos const&                                   spawnPos,
        DimensionType                                           dimensionId,
        Bedrock::NotNullNonOwnerPtr<class ServerNetworkHandler> serverNetworkHandler,
        std::string const&                                      xuid
    );

    // symbol: ?tryGetFromEntity@SimulatedPlayer@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class SimulatedPlayer* tryGetFromEntity(class EntityContext& entity, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addMoveComponent@SimulatedPlayer@@AEAAXXZ
    MCAPI void _addMoveComponent();

    // symbol:
    // ?_createNavigationResult@SimulatedPlayer@@AEBA?AUScriptNavigationResult@ScriptModuleGameTest@@PEAVNavigationComponent@@@Z
    MCAPI struct ScriptModuleGameTest::ScriptNavigationResult
    _createNavigationResult(class NavigationComponent* navigation) const;

    // symbol: ?_startCooldown@SimulatedPlayer@@AEAAXXZ
    MCAPI void _startCooldown();

    // symbol: ?_trySwing@SimulatedPlayer@@AEAA_NXZ
    MCAPI bool _trySwing();

    // NOLINTEND
};
