/**
 * @file  EndGatewayBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~EndGatewayBlockActor();
    /**
     * @vftbl  1
     * @symbol  ?load\@EndGatewayBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@EndGatewayBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol  ?tick\@EndGatewayBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol  ?onChanged\@EndGatewayBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @symbol  ?triggerEvent\@EndGatewayBlockActor\@\@UEAAXHH\@Z
     */
    virtual void triggerEvent(int, int);
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  20
     * @symbol  ?hasAlphaLayer\@EndGatewayBlockActor\@\@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const;
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@EndGatewayBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol  ??0EndGatewayBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI EndGatewayBlockActor(class BlockPos const &);
    /**
     * @symbol  ?canTeleport\@EndGatewayBlockActor\@\@QEBA_NPEBVGetCollisionShapeInterface\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI bool canTeleport(class GetCollisionShapeInterface const *, class BlockSource const &) const;
    /**
     * @symbol  ?getExitPosition\@EndGatewayBlockActor\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getExitPosition() const;
    /**
     * @symbol  ?getParticleAmount\@EndGatewayBlockActor\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI int getParticleAmount(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?setExitPosition\@EndGatewayBlockActor\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setExitPosition(class BlockPos const &);
    /**
     * @symbol  ?teleportEntity\@EndGatewayBlockActor\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void teleportEntity(class Actor &);
    /**
     * @symbol  ?COOLDOWN_TIME\@EndGatewayBlockActor\@\@2HB
     */
    MCAPI static int const COOLDOWN_TIME;
    /**
     * @symbol  ?EVENT_COOLDOWN\@EndGatewayBlockActor\@\@2HB
     */
    MCAPI static int const EVENT_COOLDOWN;
    /**
     * @symbol  ?SPAWN_TIME\@EndGatewayBlockActor\@\@2HB
     */
    MCAPI static int const SPAWN_TIME;
    /**
     * @symbol  ?findExitPortal\@EndGatewayBlockActor\@\@SA?AVBlockPos\@\@AEAVWorldGenerator\@\@AEBV2\@\@Z
     */
    MCAPI static class BlockPos findExitPortal(class WorldGenerator &, class BlockPos const &);
    /**
     * @symbol  ?findTallestBlock\@EndGatewayBlockActor\@\@SA?AVBlockPos\@\@AEAVBlockSource\@\@AEBV2\@H_N\@Z
     */
    MCAPI static class BlockPos findTallestBlock(class BlockSource &, class BlockPos const &, int, bool);
    /**
     * @symbol  ?findValidSpawnAround\@EndGatewayBlockActor\@\@SA?AVBlockPos\@\@AEAVBlockSource\@\@AEBV2\@_NH\@Z
     */
    MCAPI static class BlockPos findValidSpawnAround(class BlockSource &, class BlockPos const &, bool, int);

//private:
    /**
     * @symbol  ?_getHighestSection\@EndGatewayBlockActor\@\@CAHAEAVWorldGenerator\@\@AEAVBlockVolume\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static int _getHighestSection(class WorldGenerator &, class BlockVolume &, class BlockPos const &);

private:

};