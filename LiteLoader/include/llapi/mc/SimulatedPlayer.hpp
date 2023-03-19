/**
 * @file  SimulatedPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Bedrock.hpp"
#include "Editor.hpp"
#include "ScriptModuleMinecraft.hpp"
#include "ServerPlayer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimulatedPlayer.
 *
 */
class SimulatedPlayer : public ServerPlayer {

#define AFTER_EXTRA
// Add Member There
public:
    [[deprecated("This is a typo. Please use simulateDestroy")]]
    LIAPI bool simulateDestory();
    LIAPI bool simulateDestroy();
    LIAPI bool simulateUseItem();
    LIAPI bool simulateSneak();
    LIAPI bool simulateStopSneaking();
    LIAPI static class SimulatedPlayer* create(std::string const& name, class BlockPos const& position, class AutomaticID<class Dimension, int> dimensionId = 0);
    LIAPI static class SimulatedPlayer* create(std::string const& name, class AutomaticID<class Dimension, int> dimensionId = 0);
    LIAPI static class SimulatedPlayer* create(std::string const& name, class Vec3 const& position, class AutomaticID<class Dimension, int> dimensionId = 0);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYER
public:
    class SimulatedPlayer& operator=(class SimulatedPlayer const &) = delete;
    SimulatedPlayer(class SimulatedPlayer const &) = delete;
    SimulatedPlayer() = delete;
#endif

public:
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@SimulatedPlayer\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 44
     * @symbol ?teleportTo\@SimulatedPlayer\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 288
     * @symbol ?aiStep\@SimulatedPlayer\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 301
     * @symbol __unk_vfn_301
     */
    virtual void __unk_vfn_301();
    /**
     * @vftbl 305
     * @symbol __unk_vfn_305
     */
    virtual void __unk_vfn_305();
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl 361
     * @symbol __unk_vfn_361
     */
    virtual void __unk_vfn_361();
    /**
     * @vftbl 368
     * @symbol __unk_vfn_368
     */
    virtual void __unk_vfn_368();
    /**
     * @vftbl 369
     * @symbol __unk_vfn_369
     */
    virtual void __unk_vfn_369();
    /**
     * @vftbl 371
     * @symbol __unk_vfn_371
     */
    virtual void __unk_vfn_371();
    /**
     * @vftbl 372
     * @symbol __unk_vfn_372
     */
    virtual void __unk_vfn_372();
    /**
     * @vftbl 377
     * @symbol __unk_vfn_377
     */
    virtual void __unk_vfn_377();
    /**
     * @vftbl 378
     * @symbol __unk_vfn_378
     */
    virtual void __unk_vfn_378();
    /**
     * @vftbl 381
     * @symbol __unk_vfn_381
     */
    virtual void __unk_vfn_381();
    /**
     * @vftbl 384
     * @symbol __unk_vfn_384
     */
    virtual void __unk_vfn_384();
    /**
     * @vftbl 385
     * @symbol __unk_vfn_385
     */
    virtual void __unk_vfn_385();
    /**
     * @vftbl 395
     * @symbol __unk_vfn_395
     */
    virtual void __unk_vfn_395();
    /**
     * @vftbl 396
     * @symbol __unk_vfn_396
     */
    virtual void __unk_vfn_396();
    /**
     * @vftbl 397
     * @symbol ?isHostingPlayer\@SimulatedPlayer\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @vftbl 400
     * @symbol __unk_vfn_400
     */
    virtual void __unk_vfn_400();
    /**
     * @vftbl 407
     * @symbol __unk_vfn_407
     */
    virtual void __unk_vfn_407();
    /**
     * @vftbl 433
     * @symbol __unk_vfn_433
     */
    virtual void __unk_vfn_433();
    /**
     * @vftbl 434
     * @symbol ?getXuid\@SimulatedPlayer\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getXuid() const;
    /**
     * @vftbl 435
     * @symbol ?getMovementSettings\@SimulatedPlayer\@\@UEBAAEBUPlayerMovementSettings\@\@XZ
     */
    virtual struct PlayerMovementSettings const & getMovementSettings() const;
    /**
     * @vftbl 436
     * @symbol __unk_vfn_436
     */
    virtual void __unk_vfn_436();
    /**
     * @vftbl 438
     * @symbol ?_createChunkSource\@SimulatedPlayer\@\@MEAA?AV?$shared_ptr\@VChunkViewSource\@\@\@std\@\@AEAVChunkSource\@\@\@Z
     */
    virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource &);
    /**
     * @vftbl 442
     * @symbol ?_getSpawnChunkLimit\@SimulatedPlayer\@\@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @vftbl 443
     * @symbol ?_updateChunkPublisherView\@SimulatedPlayer\@\@MEAAXAEBVVec3\@\@M\@Z
     */
    virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMULATEDPLAYER
    /**
     * @symbol ?isSimulated\@SimulatedPlayer\@\@UEBA_NXZ
     */
    MCVAPI bool isSimulated() const;
#endif
    /**
     * @symbol ??0SimulatedPlayer\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@AEAVNetworkSystem\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@V?$function\@$$A6AXAEAVServerPlayer\@\@\@Z\@std\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@H_NAEAVEntityContext\@\@\@Z
     */
    MCAPI SimulatedPlayer(class Level &, class PacketSender &, class NetworkSystem &, class ClientBlobCache::Server::ActiveTransfersManager &, enum class GameType, class NetworkIdentifier const &, enum class SubClientId, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    /**
     * @symbol ?getGameTestHelper\@SimulatedPlayer\@\@QEBA?AV?$NonOwnerPointer\@VBaseGameTestHelper\@gametest\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;
    /**
     * @symbol ?postAiStep\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @symbol ?preAiStep\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void preAiStep();
    /**
     * @symbol ?setGameTestHelper\@SimulatedPlayer\@\@QEAAXV?$NonOwnerPointer\@VBaseGameTestHelper\@gametest\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>);
    /**
     * @symbol ?setXuid\@SimulatedPlayer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setXuid(std::string const &);
    /**
     * @symbol ?simulateAttack\@SimulatedPlayer\@\@QEAA_NPEAVActor\@\@\@Z
     */
    MCAPI bool simulateAttack(class Actor *);
    /**
     * @symbol ?simulateAttack\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateAttack();
    /**
     * @symbol ?simulateDestroyBlock\@SimulatedPlayer\@\@QEAA_NAEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI bool simulateDestroyBlock(class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing);
    /**
     * @symbol ?simulateDisconnect\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateDisconnect();
    /**
     * @symbol ?simulateGiveItem\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@_N\@Z
     */
    MCAPI bool simulateGiveItem(class ItemStack &, bool);
    /**
     * @symbol ?simulateInteract\@SimulatedPlayer\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool simulateInteract(class Actor &);
    /**
     * @symbol ?simulateInteract\@SimulatedPlayer\@\@QEAA_NAEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI bool simulateInteract(class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing);
    /**
     * @symbol ?simulateInteract\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateInteract();
    /**
     * @symbol ?simulateJump\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateJump();
    /**
     * @symbol ?simulateLocalMove\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@M\@Z
     */
    MCAPI void simulateLocalMove(class Vec3 const &, float);
    /**
     * @symbol ?simulateLookAt\@SimulatedPlayer\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void simulateLookAt(class Actor &);
    /**
     * @symbol ?simulateLookAt\@SimulatedPlayer\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void simulateLookAt(class BlockPos const &);
    /**
     * @symbol ?simulateLookAt\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void simulateLookAt(class Vec3 const &);
    /**
     * @symbol ?simulateMoveToLocation\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@M\@Z
     */
    MCAPI void simulateMoveToLocation(class Vec3 const &, float);
    /**
     * @symbol ?simulateNavigateToEntity\@SimulatedPlayer\@\@QEAA?AUScriptNavigationResult\@ScriptModuleMinecraft\@\@AEAVActor\@\@M\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToEntity(class Actor &, float);
    /**
     * @symbol ?simulateNavigateToLocation\@SimulatedPlayer\@\@QEAA?AUScriptNavigationResult\@ScriptModuleMinecraft\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToLocation(class Vec3 const &, float);
    /**
     * @symbol ?simulateNavigateToLocations\@SimulatedPlayer\@\@QEAAX$$QEAV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@M\@Z
     */
    MCAPI void simulateNavigateToLocations(std::vector<class Vec3> &&, float);
    /**
     * @symbol ?simulateRespawn\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateRespawn();
    /**
     * @symbol ?simulateSetBodyRotation\@SimulatedPlayer\@\@QEAAXM\@Z
     */
    MCAPI void simulateSetBodyRotation(float);
    /**
     * @symbol ?simulateSetItem\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@_NH\@Z
     */
    MCAPI bool simulateSetItem(class ItemStack &, bool, int);
    /**
     * @symbol ?simulateStopDestroyingBlock\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopDestroyingBlock();
    /**
     * @symbol ?simulateStopInteracting\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopInteracting();
    /**
     * @symbol ?simulateStopMoving\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopMoving();
    /**
     * @symbol ?simulateStopUsingItem\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopUsingItem();
    /**
     * @symbol ?simulateUseItem\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@\@Z
     */
    MCAPI bool simulateUseItem(class ItemStack &);
    /**
     * @symbol ?simulateUseItemInSlot\@SimulatedPlayer\@\@QEAA_NH\@Z
     */
    MCAPI bool simulateUseItemInSlot(int);
    /**
     * @symbol ?simulateUseItemInSlotOnBlock\@SimulatedPlayer\@\@QEAA_NHAEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool simulateUseItemInSlotOnBlock(int, class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing, class Vec3 const &);
    /**
     * @symbol ?simulateUseItemOnBlock\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@AEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool simulateUseItemOnBlock(class ItemStack &, class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing, class Vec3 const &);
    /**
     * @symbol ?simulateWorldMove\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@M\@Z
     */
    MCAPI void simulateWorldMove(class Vec3 const &, float);
    /**
     * @symbol ?create\@SimulatedPlayer\@\@SAPEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@V?$not_null\@V?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@\@gsl\@\@0\@Z
     */
    MCAPI static class SimulatedPlayer * create(std::string const &, class BlockPos const &, class AutomaticID<class Dimension, int>, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>, std::string const &);
    /**
     * @symbol ?tryGetFromEntity\@SimulatedPlayer\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class SimulatedPlayer * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol ?_addMoveComponent\@SimulatedPlayer\@\@AEAAXXZ
     */
    MCAPI void _addMoveComponent();
    /**
     * @symbol ?_createNavigationResult\@SimulatedPlayer\@\@AEBA?AUScriptNavigationResult\@ScriptModuleMinecraft\@\@PEAVNavigationComponent\@\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult _createNavigationResult(class NavigationComponent *) const;
    /**
     * @symbol ?_getInputSpeed\@SimulatedPlayer\@\@AEAAMXZ
     */
    MCAPI float _getInputSpeed();
    /**
     * @symbol ?_startCooldown\@SimulatedPlayer\@\@AEAAXXZ
     */
    MCAPI void _startCooldown();
    /**
     * @symbol ?_trySwing\@SimulatedPlayer\@\@AEAA_NXZ
     */
    MCAPI bool _trySwing();
    /**
     * @symbol ?_updateMovement\@SimulatedPlayer\@\@AEAAXXZ
     */
    MCAPI void _updateMovement();

private:

};
