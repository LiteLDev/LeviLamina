#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorPlayer; }
namespace ScriptModuleMinecraft { enum class ScriptFacing; }
namespace ScriptModuleMinecraft { struct ScriptNavigationResult; }
namespace gametest { class BaseGameTestHelper; }
namespace mce { class UUID; }
// clang-format on

class SimulatedPlayer : public ::ServerPlayer {

public:
    // prevent constructor by default
    SimulatedPlayer& operator=(SimulatedPlayer const&) = delete;
    SimulatedPlayer(SimulatedPlayer const&)            = delete;
    SimulatedPlayer()                                  = delete;

public:
    /**
     * @vftbl 12
     * @symbol
     * ?initializeComponents\@SimulatedPlayer\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@SimulatedPlayer\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 264
     * @symbol ?aiStep\@SimulatedPlayer\@\@UEAAXXZ
     */
    virtual void aiStep(); // NOLINT
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276(); // NOLINT
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280(); // NOLINT
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
    /**
     * @vftbl 333
     * @symbol __unk_vfn_333
     */
    virtual void __unk_vfn_333(); // NOLINT
    /**
     * @vftbl 340
     * @symbol __unk_vfn_340
     */
    virtual void __unk_vfn_340(); // NOLINT
    /**
     * @vftbl 341
     * @symbol __unk_vfn_341
     */
    virtual void __unk_vfn_341(); // NOLINT
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343(); // NOLINT
    /**
     * @vftbl 344
     * @symbol __unk_vfn_344
     */
    virtual void __unk_vfn_344(); // NOLINT
    /**
     * @vftbl 349
     * @symbol __unk_vfn_349
     */
    virtual void __unk_vfn_349(); // NOLINT
    /**
     * @vftbl 350
     * @symbol __unk_vfn_350
     */
    virtual void __unk_vfn_350(); // NOLINT
    /**
     * @vftbl 353
     * @symbol __unk_vfn_353
     */
    virtual void __unk_vfn_353(); // NOLINT
    /**
     * @vftbl 356
     * @symbol __unk_vfn_356
     */
    virtual void __unk_vfn_356(); // NOLINT
    /**
     * @vftbl 357
     * @symbol __unk_vfn_357
     */
    virtual void __unk_vfn_357(); // NOLINT
    /**
     * @vftbl 368
     * @symbol __unk_vfn_368
     */
    virtual void __unk_vfn_368(); // NOLINT
    /**
     * @vftbl 369
     * @symbol ?isHostingPlayer\@SimulatedPlayer\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const; // NOLINT
    /**
     * @vftbl 372
     * @symbol __unk_vfn_372
     */
    virtual void __unk_vfn_372(); // NOLINT
    /**
     * @vftbl 379
     * @symbol __unk_vfn_379
     */
    virtual void __unk_vfn_379(); // NOLINT
    /**
     * @vftbl 402
     * @symbol __unk_vfn_402
     */
    virtual void __unk_vfn_402(); // NOLINT
    /**
     * @vftbl 403
     * @symbol
     * ?getXuid\@SimulatedPlayer\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getXuid() const; // NOLINT
    /**
     * @vftbl 404
     * @symbol ?getMovementSettings\@SimulatedPlayer\@\@UEBAAEBUPlayerMovementSettings\@\@XZ
     */
    virtual struct PlayerMovementSettings const& getMovementSettings() const; // NOLINT
    /**
     * @vftbl 405
     * @symbol __unk_vfn_405
     */
    virtual void __unk_vfn_405(); // NOLINT
    /**
     * @vftbl 408
     * @symbol
     * ?_createChunkSource\@SimulatedPlayer\@\@MEAA?AV?$shared_ptr\@VChunkViewSource\@\@\@std\@\@AEAVChunkSource\@\@\@Z
     */
    virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource&); // NOLINT
    /**
     * @vftbl 412
     * @symbol ?_getSpawnChunkLimit\@SimulatedPlayer\@\@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const; // NOLINT
    /**
     * @vftbl 413
     * @symbol ?_updateChunkPublisherView\@SimulatedPlayer\@\@MEAAXAEBVVec3\@\@M\@Z
     */
    virtual void _updateChunkPublisherView(class Vec3 const&, float); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMULATEDPLAYER
    /**
     * @symbol ?isSimulated\@SimulatedPlayer\@\@UEBA_NXZ
     */
    MCVAPI bool isSimulated() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0SimulatedPlayer\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@AEAVNetworkSystem\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@V?$function\@$$A6AXAEAVServerPlayer\@\@\@Z\@std\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@H_NAEAVEntityContext\@\@\@Z
     */
    MCAPI
    SimulatedPlayer(class Level&, class PacketSender&, class NetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&, enum class GameType, class NetworkIdentifier const&, enum class SubClientId, class std::function<void(class ServerPlayer&)>, class mce::UUID, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&); // NOLINT
    /**
     * @symbol
     * ?getGameTestHelper\@SimulatedPlayer\@\@QEBA?AV?$NonOwnerPointer\@VBaseGameTestHelper\@gametest\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const; // NOLINT
    /**
     * @symbol ?postAiStep\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void postAiStep(); // NOLINT
    /**
     * @symbol ?preAiStep\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void preAiStep(); // NOLINT
    /**
     * @symbol
     * ?setGameTestHelper\@SimulatedPlayer\@\@QEAAXV?$NonOwnerPointer\@VBaseGameTestHelper\@gametest\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>); // NOLINT
    /**
     * @symbol
     * ?setXuid\@SimulatedPlayer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setXuid(std::string const&); // NOLINT
    /**
     * @symbol ?simulateAttack\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateAttack(); // NOLINT
    /**
     * @symbol ?simulateAttack\@SimulatedPlayer\@\@QEAA_NPEAVActor\@\@\@Z
     */
    MCAPI bool simulateAttack(class Actor*); // NOLINT
    /**
     * @symbol
     * ?simulateDestroyBlock\@SimulatedPlayer\@\@QEAA_NAEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI bool simulateDestroyBlock(class BlockPos const&, enum class ScriptModuleMinecraft::ScriptFacing); // NOLINT
    /**
     * @symbol ?simulateDisconnect\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateDisconnect(); // NOLINT
    /**
     * @symbol ?simulateFly\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateFly(); // NOLINT
    /**
     * @symbol ?simulateGiveItem\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@_N\@Z
     */
    MCAPI bool simulateGiveItem(class ItemStack&, bool); // NOLINT
    /**
     * @symbol ?simulateInteract\@SimulatedPlayer\@\@QEAA_NAEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI bool simulateInteract(class BlockPos const&, enum class ScriptModuleMinecraft::ScriptFacing); // NOLINT
    /**
     * @symbol ?simulateInteract\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateInteract(); // NOLINT
    /**
     * @symbol ?simulateInteract\@SimulatedPlayer\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool simulateInteract(class Actor&); // NOLINT
    /**
     * @symbol ?simulateJump\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateJump(); // NOLINT
    /**
     * @symbol ?simulateLocalMove\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@M\@Z
     */
    MCAPI void simulateLocalMove(class Vec3 const&, float); // NOLINT
    /**
     * @symbol ?simulateLookAt\@SimulatedPlayer\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void simulateLookAt(class Actor&); // NOLINT
    /**
     * @symbol ?simulateLookAt\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void simulateLookAt(class Vec3 const&); // NOLINT
    /**
     * @symbol ?simulateLookAt\@SimulatedPlayer\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void simulateLookAt(class BlockPos const&); // NOLINT
    /**
     * @symbol ?simulateMoveToLocation\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@M\@Z
     */
    MCAPI void simulateMoveToLocation(class Vec3 const&, float); // NOLINT
    /**
     * @symbol
     * ?simulateNavigateToEntity\@SimulatedPlayer\@\@QEAA?AUScriptNavigationResult\@ScriptModuleMinecraft\@\@AEAVActor\@\@M\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToEntity(class Actor&, float); // NOLINT
    /**
     * @symbol
     * ?simulateNavigateToLocation\@SimulatedPlayer\@\@QEAA?AUScriptNavigationResult\@ScriptModuleMinecraft\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult
    simulateNavigateToLocation(class Vec3 const&, float); // NOLINT
    /**
     * @symbol
     * ?simulateNavigateToLocations\@SimulatedPlayer\@\@QEAAX$$QEAV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@M\@Z
     */
    MCAPI void simulateNavigateToLocations(std::vector<class Vec3>&&, float); // NOLINT
    /**
     * @symbol ?simulateRespawn\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateRespawn(); // NOLINT
    /**
     * @symbol ?simulateSetBodyRotation\@SimulatedPlayer\@\@QEAAXM\@Z
     */
    MCAPI void simulateSetBodyRotation(float); // NOLINT
    /**
     * @symbol ?simulateSetItem\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@_NH\@Z
     */
    MCAPI bool simulateSetItem(class ItemStack&, bool, int); // NOLINT
    /**
     * @symbol ?simulateStopDestroyingBlock\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopDestroyingBlock(); // NOLINT
    /**
     * @symbol ?simulateStopFlying\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopFlying(); // NOLINT
    /**
     * @symbol ?simulateStopInteracting\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopInteracting(); // NOLINT
    /**
     * @symbol ?simulateStopMoving\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopMoving(); // NOLINT
    /**
     * @symbol ?simulateStopUsingItem\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopUsingItem(); // NOLINT
    /**
     * @symbol ?simulateUseItem\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@\@Z
     */
    MCAPI bool simulateUseItem(class ItemStack&); // NOLINT
    /**
     * @symbol ?simulateUseItemInSlot\@SimulatedPlayer\@\@QEAA_NH\@Z
     */
    MCAPI bool simulateUseItemInSlot(int); // NOLINT
    /**
     * @symbol
     * ?simulateUseItemInSlotOnBlock\@SimulatedPlayer\@\@QEAA_NHAEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool
    simulateUseItemInSlotOnBlock(int, class BlockPos const&, enum class ScriptModuleMinecraft::ScriptFacing, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?simulateUseItemOnBlock\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@AEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool
    simulateUseItemOnBlock(class ItemStack&, class BlockPos const&, enum class ScriptModuleMinecraft::ScriptFacing, class Vec3 const&); // NOLINT
    /**
     * @symbol ?simulateWorldMove\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@M\@Z
     */
    MCAPI void simulateWorldMove(class Vec3 const&, float); // NOLINT
    /**
     * @symbol
     * ?create\@SimulatedPlayer\@\@SAPEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@V?$not_null\@V?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@\@gsl\@\@0\@Z
     */
    MCAPI static class SimulatedPlayer*
    create(std::string const&, class BlockPos const&, class AutomaticID<class Dimension, int>, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>, std::string const&); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@SimulatedPlayer\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class SimulatedPlayer* tryGetFromEntity(class EntityContext&, bool); // NOLINT

    // private:
    /**
     * @symbol ?_addMoveComponent\@SimulatedPlayer\@\@AEAAXXZ
     */
    MCAPI void _addMoveComponent(); // NOLINT
    /**
     * @symbol
     * ?_createNavigationResult\@SimulatedPlayer\@\@AEBA?AUScriptNavigationResult\@ScriptModuleMinecraft\@\@PEAVNavigationComponent\@\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult
    _createNavigationResult(class NavigationComponent*) const; // NOLINT
    /**
     * @symbol ?_getInputSpeed\@SimulatedPlayer\@\@AEAAMXZ
     */
    MCAPI float _getInputSpeed(); // NOLINT
    /**
     * @symbol ?_startCooldown\@SimulatedPlayer\@\@AEAAXXZ
     */
    MCAPI void _startCooldown(); // NOLINT
    /**
     * @symbol ?_trySwing\@SimulatedPlayer\@\@AEAA_NXZ
     */
    MCAPI bool _trySwing(); // NOLINT
    /**
     * @symbol ?_updateMovement\@SimulatedPlayer\@\@AEAAXXZ
     */
    MCAPI void _updateMovement(); // NOLINT

private:
};
