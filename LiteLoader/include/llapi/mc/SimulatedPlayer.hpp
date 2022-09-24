/**
 * @file  SimulatedPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Bedrock.hpp"
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

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYER
public:
    class SimulatedPlayer& operator=(class SimulatedPlayer const &) = delete;
    SimulatedPlayer(class SimulatedPlayer const &) = delete;
    SimulatedPlayer() = delete;
#endif

public:
    /**
     * @hash   360345375
     * @vftbl  10
     * @symbol ?initializeComponents@SimulatedPlayer@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~SimulatedPlayer();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   2048674366
     * @vftbl  43
     * @symbol ?teleportTo@SimulatedPlayer@@UEAAXAEBVVec3@@_NHH1@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   902187450
     * @vftbl  300
     * @symbol ?aiStep@SimulatedPlayer@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @vftbl  375
     * @symbol __unk_vfn_375
     */
    virtual void __unk_vfn_375();
    /**
     * @vftbl  382
     * @symbol __unk_vfn_382
     */
    virtual void __unk_vfn_382();
    /**
     * @vftbl  383
     * @symbol __unk_vfn_383
     */
    virtual void __unk_vfn_383();
    /**
     * @vftbl  385
     * @symbol __unk_vfn_385
     */
    virtual void __unk_vfn_385();
    /**
     * @vftbl  386
     * @symbol __unk_vfn_386
     */
    virtual void __unk_vfn_386();
    /**
     * @vftbl  391
     * @symbol __unk_vfn_391
     */
    virtual void __unk_vfn_391();
    /**
     * @vftbl  392
     * @symbol __unk_vfn_392
     */
    virtual void __unk_vfn_392();
    /**
     * @vftbl  395
     * @symbol __unk_vfn_395
     */
    virtual void __unk_vfn_395();
    /**
     * @vftbl  398
     * @symbol __unk_vfn_398
     */
    virtual void __unk_vfn_398();
    /**
     * @vftbl  399
     * @symbol __unk_vfn_399
     */
    virtual void __unk_vfn_399();
    /**
     * @vftbl  409
     * @symbol __unk_vfn_409
     */
    virtual void __unk_vfn_409();
    /**
     * @vftbl  410
     * @symbol __unk_vfn_410
     */
    virtual void __unk_vfn_410();
    /**
     * @hash   270723816
     * @vftbl  411
     * @symbol ?isHostingPlayer@SimulatedPlayer@@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @vftbl  414
     * @symbol __unk_vfn_414
     */
    virtual void __unk_vfn_414();
    /**
     * @vftbl  421
     * @symbol __unk_vfn_421
     */
    virtual void __unk_vfn_421();
    /**
     * @vftbl  448
     * @symbol __unk_vfn_448
     */
    virtual void __unk_vfn_448();
    /**
     * @hash   -699458649
     * @vftbl  449
     * @symbol ?getXuid@SimulatedPlayer@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getXuid() const;
    /**
     * @hash   -408664930
     * @vftbl  450
     * @symbol ?getMovementSettings@SimulatedPlayer@@UEBAAEBUPlayerMovementSettings@@XZ
     */
    virtual struct PlayerMovementSettings const & getMovementSettings() const;
    /**
     * @hash   -559458027
     * @vftbl  453
     * @symbol ?_createChunkSource@SimulatedPlayer@@MEAA?AV?$shared_ptr@VChunkViewSource@@@std@@AEAVChunkSource@@@Z
     */
    virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource &);
    /**
     * @hash   -1026203531
     * @vftbl  454
     * @symbol ?_getSpawnChunkLimit@SimulatedPlayer@@MEBAHXZ
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @hash   -421715733
     * @vftbl  455
     * @symbol ?_updateChunkPublisherView@SimulatedPlayer@@MEAAXAEBVVec3@@M@Z
     */
    virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMULATEDPLAYER
    /**
     * @hash   1735057069
     * @symbol ?isSimulated@SimulatedPlayer@@UEBA_NXZ
     */
    MCVAPI bool isSimulated() const;
    /**
     * @hash   -1445392840
     * @symbol ?useNewAi@SimulatedPlayer@@UEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   15818504
     * @symbol ??0SimulatedPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVNetworkHandler@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z
     */
    MCAPI SimulatedPlayer(class Level &, class PacketSender &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, enum GameType, class NetworkIdentifier const &, enum SubClientId, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    /**
     * @hash   -1225916579
     * @symbol ?getGameTestHelper@SimulatedPlayer@@QEBA?AV?$NonOwnerPointer@VBaseGameTestHelper@gametest@@@Bedrock@@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;
    /**
     * @hash   1391937171
     * @symbol ?preAiStep@SimulatedPlayer@@QEAAXXZ
     */
    MCAPI void preAiStep();
    /**
     * @hash   -980636127
     * @symbol ?setGameTestHelper@SimulatedPlayer@@QEAAXV?$NonOwnerPointer@VBaseGameTestHelper@gametest@@@Bedrock@@@Z
     */
    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>);
    /**
     * @hash   -783291752
     * @symbol ?setXuid@SimulatedPlayer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setXuid(std::string const &);
    /**
     * @hash   974633214
     * @symbol ?simulateAttack@SimulatedPlayer@@QEAA_NPEAVActor@@@Z
     */
    MCAPI bool simulateAttack(class Actor *);
    /**
     * @hash   92018382
     * @symbol ?simulateAttack@SimulatedPlayer@@QEAA_NXZ
     */
    MCAPI bool simulateAttack();
    /**
     * @hash   742733596
     * @symbol ?simulateDestroyBlock@SimulatedPlayer@@QEAA_NAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
     */
    MCAPI bool simulateDestroyBlock(class BlockPos const &, enum ScriptModuleMinecraft::ScriptFacing);
    /**
     * @hash   -1011165453
     * @symbol ?simulateDisconnect@SimulatedPlayer@@QEAAXXZ
     */
    MCAPI void simulateDisconnect();
    /**
     * @hash   -1560803442
     * @symbol ?simulateGiveItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@_N@Z
     */
    MCAPI bool simulateGiveItem(class ItemStack &, bool);
    /**
     * @hash   2012308865
     * @symbol ?simulateInteract@SimulatedPlayer@@QEAA_NAEAVActor@@@Z
     */
    MCAPI bool simulateInteract(class Actor &);
    /**
     * @hash   -2083045988
     * @symbol ?simulateInteract@SimulatedPlayer@@QEAA_NAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
     */
    MCAPI bool simulateInteract(class BlockPos const &, enum ScriptModuleMinecraft::ScriptFacing);
    /**
     * @hash   -578800722
     * @symbol ?simulateInteract@SimulatedPlayer@@QEAA_NXZ
     */
    MCAPI bool simulateInteract();
    /**
     * @hash   -1377996850
     * @symbol ?simulateJump@SimulatedPlayer@@QEAA_NXZ
     */
    MCAPI bool simulateJump();
    /**
     * @hash   -1420152877
     * @symbol ?simulateLocalMove@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
     */
    MCAPI void simulateLocalMove(class Vec3 const &, float);
    /**
     * @hash   -1477460272
     * @symbol ?simulateLookAt@SimulatedPlayer@@QEAAXAEAVActor@@@Z
     */
    MCAPI void simulateLookAt(class Actor &);
    /**
     * @hash   -1243484612
     * @symbol ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void simulateLookAt(class BlockPos const &);
    /**
     * @hash   -2116798404
     * @symbol ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void simulateLookAt(class Vec3 const &);
    /**
     * @hash   1213103605
     * @symbol ?simulateMoveToLocation@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
     */
    MCAPI void simulateMoveToLocation(class Vec3 const &, float);
    /**
     * @hash   110183800
     * @symbol ?simulateNavigateToEntity@SimulatedPlayer@@QEAA?AUScriptNavigationResult@ScriptModuleMinecraft@@AEAVActor@@M@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToEntity(class Actor &, float);
    /**
     * @hash   2085756156
     * @symbol ?simulateNavigateToLocation@SimulatedPlayer@@QEAA?AUScriptNavigationResult@ScriptModuleMinecraft@@AEBVVec3@@M@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToLocation(class Vec3 const &, float);
    /**
     * @hash   -846885229
     * @symbol ?simulateNavigateToLocations@SimulatedPlayer@@QEAAX$$QEAV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@M@Z
     */
    MCAPI void simulateNavigateToLocations(std::vector<class Vec3> &&, float);
    /**
     * @hash   -420679288
     * @symbol ?simulateSetBodyRotation@SimulatedPlayer@@QEAAXM@Z
     */
    MCAPI void simulateSetBodyRotation(float);
    /**
     * @hash   219588913
     * @symbol ?simulateSetItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@_NH@Z
     */
    MCAPI bool simulateSetItem(class ItemStack &, bool, int);
    /**
     * @hash   1232760723
     * @symbol ?simulateStopDestroyingBlock@SimulatedPlayer@@QEAAXXZ
     */
    MCAPI void simulateStopDestroyingBlock();
    /**
     * @hash   1965967489
     * @symbol ?simulateStopInteracting@SimulatedPlayer@@QEAAXXZ
     */
    MCAPI void simulateStopInteracting();
    /**
     * @hash   -1156534005
     * @symbol ?simulateStopMoving@SimulatedPlayer@@QEAAXXZ
     */
    MCAPI void simulateStopMoving();
    /**
     * @hash   477923687
     * @symbol ?simulateStopUsingItem@SimulatedPlayer@@QEAAXXZ
     */
    MCAPI void simulateStopUsingItem();
    /**
     * @hash   -1800538045
     * @symbol ?simulateUseItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@@Z
     */
    MCAPI bool simulateUseItem(class ItemStack &);
    /**
     * @hash   -1068474673
     * @symbol ?simulateUseItemInSlot@SimulatedPlayer@@QEAA_NH@Z
     */
    MCAPI bool simulateUseItemInSlot(int);
    /**
     * @hash   547011182
     * @symbol ?simulateUseItemInSlotOnBlock@SimulatedPlayer@@QEAA_NHAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@AEBVVec3@@@Z
     */
    MCAPI bool simulateUseItemInSlotOnBlock(int, class BlockPos const &, enum ScriptModuleMinecraft::ScriptFacing, class Vec3 const &);
    /**
     * @hash   1971783384
     * @symbol ?simulateUseItemOnBlock@SimulatedPlayer@@QEAA_NAEAVItemStack@@AEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@AEBVVec3@@@Z
     */
    MCAPI bool simulateUseItemOnBlock(class ItemStack &, class BlockPos const &, enum ScriptModuleMinecraft::ScriptFacing, class Vec3 const &);
    /**
     * @hash   835216547
     * @symbol ?simulateWorldMove@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
     */
    MCAPI void simulateWorldMove(class Vec3 const &, float);
    /**
     * @hash   1322767655
     * @symbol ?create@SimulatedPlayer@@SAPEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@0@Z
     */
    MCAPI static class SimulatedPlayer * create(std::string const &, class BlockPos const &, class AutomaticID<class Dimension, int>, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>, std::string const &);
    /**
     * @hash   -2026535831
     * @symbol ?tryGetFromEntity@SimulatedPlayer@@SAPEAV1@AEAVEntityContext@@_N@Z
     */
    MCAPI static class SimulatedPlayer * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @hash   -1519907803
     * @symbol ?_addMoveComponent@SimulatedPlayer@@AEAAXXZ
     */
    MCAPI void _addMoveComponent();
    /**
     * @hash   -4809043
     * @symbol ?_createNavigationResult@SimulatedPlayer@@AEBA?AUScriptNavigationResult@ScriptModuleMinecraft@@PEAVNavigationComponent@@@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult _createNavigationResult(class NavigationComponent *) const;
    /**
     * @hash   -964613401
     * @symbol ?_getInputSpeed@SimulatedPlayer@@AEAAMXZ
     */
    MCAPI float _getInputSpeed();
    /**
     * @hash   -51001815
     * @symbol ?_startCooldown@SimulatedPlayer@@AEAAXXZ
     */
    MCAPI void _startCooldown();
    /**
     * @hash   -1683197497
     * @symbol ?_trySwing@SimulatedPlayer@@AEAA_NXZ
     */
    MCAPI bool _trySwing();
    /**
     * @hash   -1190353902
     * @symbol ?_updateMovement@SimulatedPlayer@@AEAAXXZ
     */
    MCAPI void _updateMovement();

private:

};