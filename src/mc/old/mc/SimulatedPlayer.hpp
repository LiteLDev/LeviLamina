/**
 * @file  SimulatedPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
    LLAPI bool simulateDestory();
    LLAPI bool simulateDestroy();
    LLAPI bool simulateUseItem();
    LLAPI bool simulateSneak();
    LLAPI bool simulateStopSneaking();
    LLAPI static class SimulatedPlayer* create(std::string const& name, class BlockPos const& position, class AutomaticID<class Dimension, int> dimensionId = 0);
    LLAPI static class SimulatedPlayer* create(std::string const& name, class AutomaticID<class Dimension, int> dimensionId = 0);
    LLAPI static class SimulatedPlayer* create(std::string const& name, class Vec3 const& position, class AutomaticID<class Dimension, int> dimensionId = 0);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYER
public:
    class SimulatedPlayer& operator=(class SimulatedPlayer const &) = delete;
    SimulatedPlayer(class SimulatedPlayer const &) = delete;
    SimulatedPlayer() = delete;
#endif

public:
    /**
     * @vftbl  12
     * @symbol  ?initializeComponents\@SimulatedPlayer\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~SimulatedPlayer();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  44
     * @symbol  ?teleportTo\@SimulatedPlayer\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  291
     * @symbol  ?aiStep\@SimulatedPlayer\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @vftbl  364
     * @symbol  __unk_vfn_364
     */
    virtual void __unk_vfn_364();
    /**
     * @vftbl  371
     * @symbol  __unk_vfn_371
     */
    virtual void __unk_vfn_371();
    /**
     * @vftbl  372
     * @symbol  __unk_vfn_372
     */
    virtual void __unk_vfn_372();
    /**
     * @vftbl  374
     * @symbol  __unk_vfn_374
     */
    virtual void __unk_vfn_374();
    /**
     * @vftbl  375
     * @symbol  __unk_vfn_375
     */
    virtual void __unk_vfn_375();
    /**
     * @vftbl  380
     * @symbol  __unk_vfn_380
     */
    virtual void __unk_vfn_380();
    /**
     * @vftbl  381
     * @symbol  __unk_vfn_381
     */
    virtual void __unk_vfn_381();
    /**
     * @vftbl  384
     * @symbol  __unk_vfn_384
     */
    virtual void __unk_vfn_384();
    /**
     * @vftbl  387
     * @symbol  __unk_vfn_387
     */
    virtual void __unk_vfn_387();
    /**
     * @vftbl  388
     * @symbol  __unk_vfn_388
     */
    virtual void __unk_vfn_388();
    /**
     * @vftbl  398
     * @symbol  __unk_vfn_398
     */
    virtual void __unk_vfn_398();
    /**
     * @vftbl  399
     * @symbol  __unk_vfn_399
     */
    virtual void __unk_vfn_399();
    /**
     * @vftbl  400
     * @symbol  ?isHostingPlayer\@SimulatedPlayer\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @vftbl  403
     * @symbol  __unk_vfn_403
     */
    virtual void __unk_vfn_403();
    /**
     * @vftbl  410
     * @symbol  __unk_vfn_410
     */
    virtual void __unk_vfn_410();
    /**
     * @vftbl  436
     * @symbol  __unk_vfn_436
     */
    virtual void __unk_vfn_436();
    /**
     * @vftbl  437
     * @symbol  ?getXuid\@SimulatedPlayer\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getXuid() const;
    /**
     * @vftbl  438
     * @symbol  ?getMovementSettings\@SimulatedPlayer\@\@UEBAAEBUPlayerMovementSettings\@\@XZ
     */
    virtual struct PlayerMovementSettings const & getMovementSettings() const;
    /**
     * @vftbl  439
     * @symbol  __unk_vfn_439
     */
    virtual void __unk_vfn_439();
    /**
     * @vftbl  441
     * @symbol  ?_createChunkSource\@SimulatedPlayer\@\@MEAA?AV?$shared_ptr\@VChunkViewSource\@\@\@std\@\@AEAVChunkSource\@\@\@Z
     */
    virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource &);
    /**
     * @vftbl  445
     * @symbol  ?_getSpawnChunkLimit\@SimulatedPlayer\@\@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @vftbl  446
     * @symbol  ?_updateChunkPublisherView\@SimulatedPlayer\@\@MEAAXAEBVVec3\@\@M\@Z
     */
    virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMULATEDPLAYER
    /**
     * @symbol  ?isSimulated\@SimulatedPlayer\@\@UEBA_NXZ
     */
    MCVAPI bool isSimulated() const;
#endif
    /**
     * @symbol  ??0SimulatedPlayer\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@AEAVNetworkHandler\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@V?$function\@$$A6AXAEAVServerPlayer\@\@\@Z\@std\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@H_NAEAVEntityContext\@\@\@Z
     */
    MCAPI SimulatedPlayer(class Level &, class PacketSender &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, enum class GameType, class NetworkIdentifier const &, enum class SubClientId, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    /**
     * @symbol  ?getGameTestHelper\@SimulatedPlayer\@\@QEBA?AV?$NonOwnerPointer\@VBaseGameTestHelper\@gametest\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;
    /**
     * @symbol  ?postAiStep\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @symbol  ?preAiStep\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void preAiStep();
    /**
     * @symbol  ?setGameTestHelper\@SimulatedPlayer\@\@QEAAXV?$NonOwnerPointer\@VBaseGameTestHelper\@gametest\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>);
    /**
     * @symbol  ?setXuid\@SimulatedPlayer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setXuid(std::string const &);
    /**
     * @symbol  ?simulateAttack\@SimulatedPlayer\@\@QEAA_NPEAVActor\@\@\@Z
     */
    MCAPI bool simulateAttack(class Actor *);
    /**
     * @symbol  ?simulateAttack\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateAttack();
    /**
     * @symbol  ?simulateDestroyBlock\@SimulatedPlayer\@\@QEAA_NAEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI bool simulateDestroyBlock(class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing);
    /**
     * @symbol  ?simulateDisconnect\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateDisconnect();
    /**
     * @symbol  ?simulateGiveItem\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@_N\@Z
     */
    MCAPI bool simulateGiveItem(class ItemStack &, bool);
    /**
     * @symbol  ?simulateInteract\@SimulatedPlayer\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool simulateInteract(class Actor &);
    /**
     * @symbol  ?simulateInteract\@SimulatedPlayer\@\@QEAA_NAEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI bool simulateInteract(class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing);
    /**
     * @symbol  ?simulateInteract\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateInteract();
    /**
     * @symbol  ?simulateJump\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateJump();
    /**
     * @symbol  ?simulateLocalMove\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@M\@Z
     */
    MCAPI void simulateLocalMove(class Vec3 const &, float);
    /**
     * @symbol  ?simulateLookAt\@SimulatedPlayer\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void simulateLookAt(class Actor &);
    /**
     * @symbol  ?simulateLookAt\@SimulatedPlayer\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void simulateLookAt(class BlockPos const &);
    /**
     * @symbol  ?simulateLookAt\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void simulateLookAt(class Vec3 const &);
    /**
     * @symbol  ?simulateMoveToLocation\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@M\@Z
     */
    MCAPI void simulateMoveToLocation(class Vec3 const &, float);
    /**
     * @symbol  ?simulateNavigateToEntity\@SimulatedPlayer\@\@QEAA?AUScriptNavigationResult\@ScriptModuleMinecraft\@\@AEAVActor\@\@M\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToEntity(class Actor &, float);
    /**
     * @symbol  ?simulateNavigateToLocation\@SimulatedPlayer\@\@QEAA?AUScriptNavigationResult\@ScriptModuleMinecraft\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToLocation(class Vec3 const &, float);
    /**
     * @symbol  ?simulateNavigateToLocations\@SimulatedPlayer\@\@QEAAX$$QEAV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@M\@Z
     */
    MCAPI void simulateNavigateToLocations(std::vector<class Vec3> &&, float);
    /**
     * @symbol  ?simulateRespawn\@SimulatedPlayer\@\@QEAA_NXZ
     */
    MCAPI bool simulateRespawn();
    /**
     * @symbol  ?simulateSetBodyRotation\@SimulatedPlayer\@\@QEAAXM\@Z
     */
    MCAPI void simulateSetBodyRotation(float);
    /**
     * @symbol  ?simulateSetItem\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@_NH\@Z
     */
    MCAPI bool simulateSetItem(class ItemStack &, bool, int);
    /**
     * @symbol  ?simulateStopDestroyingBlock\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopDestroyingBlock();
    /**
     * @symbol  ?simulateStopInteracting\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopInteracting();
    /**
     * @symbol  ?simulateStopMoving\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopMoving();
    /**
     * @symbol  ?simulateStopUsingItem\@SimulatedPlayer\@\@QEAAXXZ
     */
    MCAPI void simulateStopUsingItem();
    /**
     * @symbol  ?simulateUseItem\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@\@Z
     */
    MCAPI bool simulateUseItem(class ItemStack &);
    /**
     * @symbol  ?simulateUseItemInSlot\@SimulatedPlayer\@\@QEAA_NH\@Z
     */
    MCAPI bool simulateUseItemInSlot(int);
    /**
     * @symbol  ?simulateUseItemInSlotOnBlock\@SimulatedPlayer\@\@QEAA_NHAEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool simulateUseItemInSlotOnBlock(int, class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing, class Vec3 const &);
    /**
     * @symbol  ?simulateUseItemOnBlock\@SimulatedPlayer\@\@QEAA_NAEAVItemStack\@\@AEBVBlockPos\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool simulateUseItemOnBlock(class ItemStack &, class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing, class Vec3 const &);
    /**
     * @symbol  ?simulateWorldMove\@SimulatedPlayer\@\@QEAAXAEBVVec3\@\@M\@Z
     */
    MCAPI void simulateWorldMove(class Vec3 const &, float);
    /**
     * @symbol  ?create\@SimulatedPlayer\@\@SAPEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@V?$not_null\@V?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@\@gsl\@\@0\@Z
     */
    MCAPI static class SimulatedPlayer * create(std::string const &, class BlockPos const &, class AutomaticID<class Dimension, int>, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>, std::string const &);
    /**
     * @symbol  ?tryGetFromEntity\@SimulatedPlayer\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class SimulatedPlayer * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol  ?_addMoveComponent\@SimulatedPlayer\@\@AEAAXXZ
     */
    MCAPI void _addMoveComponent();
    /**
     * @symbol  ?_createNavigationResult\@SimulatedPlayer\@\@AEBA?AUScriptNavigationResult\@ScriptModuleMinecraft\@\@PEAVNavigationComponent\@\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult _createNavigationResult(class NavigationComponent *) const;
    /**
     * @symbol  ?_getInputSpeed\@SimulatedPlayer\@\@AEAAMXZ
     */
    MCAPI float _getInputSpeed();
    /**
     * @symbol  ?_startCooldown\@SimulatedPlayer\@\@AEAAXXZ
     */
    MCAPI void _startCooldown();
    /**
     * @symbol  ?_trySwing\@SimulatedPlayer\@\@AEAA_NXZ
     */
    MCAPI bool _trySwing();
    /**
     * @symbol  ?_updateMovement\@SimulatedPlayer\@\@AEAAXXZ
     */
    MCAPI void _updateMovement();

private:

};