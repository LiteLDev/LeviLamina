/**
 * @file  EndGatewayBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndGatewayBlockActor.
 *
 */
class EndGatewayBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDGATEWAYBLOCKACTOR
public:
    class EndGatewayBlockActor& operator=(class EndGatewayBlockActor const &) = delete;
    EndGatewayBlockActor(class EndGatewayBlockActor const &) = delete;
    EndGatewayBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EndGatewayBlockActor();
    /**
     * @hash   1808219368
     * @vftbl  1
     * @symbol ?load@EndGatewayBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1685414889
     * @vftbl  2
     * @symbol ?save@EndGatewayBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1680464289
     * @vftbl  7
     * @symbol ?tick@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -1282453047
     * @vftbl  8
     * @symbol ?onChanged@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   665888296
     * @vftbl  14
     * @symbol ?triggerEvent@EndGatewayBlockActor@@UEAAXHH@Z
     */
    virtual void triggerEvent(int, int);
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   904245492
     * @vftbl  18
     * @symbol ?hasAlphaLayer@EndGatewayBlockActor@@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const;
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   718651882
     * @vftbl  35
     * @symbol ?_getUpdatePacket@EndGatewayBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   1722664660
     * @symbol ??0EndGatewayBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI EndGatewayBlockActor(class BlockPos const &);
    /**
     * @hash   -2120673881
     * @symbol ?canTeleport@EndGatewayBlockActor@@QEBA_NPEBVGetCollisionShapeInterface@@AEBVBlockSource@@@Z
     */
    MCAPI bool canTeleport(class GetCollisionShapeInterface const *, class BlockSource const &) const;
    /**
     * @hash   -562012336
     * @symbol ?getExitPosition@EndGatewayBlockActor@@QEBA?AVBlockPos@@XZ
     */
    MCAPI class BlockPos getExitPosition() const;
    /**
     * @hash   831068912
     * @symbol ?getParticleAmount@EndGatewayBlockActor@@QEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI int getParticleAmount(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -274651030
     * @symbol ?setExitPosition@EndGatewayBlockActor@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setExitPosition(class BlockPos const &);
    /**
     * @hash   -1962360822
     * @symbol ?teleportEntity@EndGatewayBlockActor@@QEAAXAEAVActor@@@Z
     */
    MCAPI void teleportEntity(class Actor &);
    /**
     * @hash   1858696543
     * @symbol ?COOLDOWN_TIME@EndGatewayBlockActor@@2HB
     */
    MCAPI static int const COOLDOWN_TIME;
    /**
     * @hash   -553032475
     * @symbol ?EVENT_COOLDOWN@EndGatewayBlockActor@@2HB
     */
    MCAPI static int const EVENT_COOLDOWN;
    /**
     * @hash   -1022031299
     * @symbol ?SPAWN_TIME@EndGatewayBlockActor@@2HB
     */
    MCAPI static int const SPAWN_TIME;
    /**
     * @hash   -1193270047
     * @symbol ?findExitPortal@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVWorldGenerator@@AEBV2@@Z
     */
    MCAPI static class BlockPos findExitPortal(class WorldGenerator &, class BlockPos const &);
    /**
     * @hash   712238667
     * @symbol ?findTallestBlock@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVBlockSource@@AEBV2@H_N@Z
     */
    MCAPI static class BlockPos findTallestBlock(class BlockSource &, class BlockPos const &, int, bool);
    /**
     * @hash   -1972178465
     * @symbol ?findValidSpawnAround@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVBlockSource@@AEBV2@_NH@Z
     */
    MCAPI static class BlockPos findValidSpawnAround(class BlockSource &, class BlockPos const &, bool, int);

//private:
    /**
     * @hash   1606652176
     * @symbol ?_getHighestSection@EndGatewayBlockActor@@CAHAEAVWorldGenerator@@AEAVBlockVolume@@AEBVBlockPos@@@Z
     */
    MCAPI static int _getHighestSection(class WorldGenerator &, class BlockVolume &, class BlockPos const &);

private:

};