#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class EndGatewayBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    EndGatewayBlockActor& operator=(EndGatewayBlockActor const&) = delete;
    EndGatewayBlockActor(EndGatewayBlockActor const&)            = delete;
    EndGatewayBlockActor()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@EndGatewayBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@EndGatewayBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@EndGatewayBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onChanged\@EndGatewayBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?triggerEvent\@EndGatewayBlockActor\@\@UEAAXHH\@Z
     */
    virtual void triggerEvent(int, int); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?hasAlphaLayer\@EndGatewayBlockActor\@\@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@EndGatewayBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ??0EndGatewayBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI EndGatewayBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?canTeleport\@EndGatewayBlockActor\@\@QEBA_NPEBVGetCollisionShapeInterface\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI bool canTeleport(class GetCollisionShapeInterface const*, class BlockSource const&) const; // NOLINT
    /**
     * @symbol ?getExitPosition\@EndGatewayBlockActor\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getExitPosition() const; // NOLINT
    /**
     * @symbol ?setExitPosition\@EndGatewayBlockActor\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setExitPosition(class BlockPos const&); // NOLINT
    /**
     * @symbol ?teleportEntity\@EndGatewayBlockActor\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void teleportEntity(class Actor&); // NOLINT
    /**
     * @symbol ?findExitPortal\@EndGatewayBlockActor\@\@SA?AVBlockPos\@\@AEAVWorldGenerator\@\@AEBV2\@\@Z
     */
    MCAPI static class BlockPos findExitPortal(class WorldGenerator&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?findTallestBlock\@EndGatewayBlockActor\@\@SA?AVBlockPos\@\@AEAVBlockSource\@\@AEBV2\@H_N\@Z
     */
    MCAPI static class BlockPos findTallestBlock(class BlockSource&, class BlockPos const&, int, bool); // NOLINT
    /**
     * @symbol ?findValidSpawnAround\@EndGatewayBlockActor\@\@SA?AVBlockPos\@\@AEAVBlockSource\@\@AEBV2\@_NH\@Z
     */
    MCAPI static class BlockPos findValidSpawnAround(class BlockSource&, class BlockPos const&, bool, int); // NOLINT
    /**
     * @symbol ?COOLDOWN_TIME\@EndGatewayBlockActor\@\@2HB
     */
    MCAPI static int const COOLDOWN_TIME; // NOLINT
    /**
     * @symbol ?EVENT_COOLDOWN\@EndGatewayBlockActor\@\@2HB
     */
    MCAPI static int const EVENT_COOLDOWN; // NOLINT
    /**
     * @symbol ?SPAWN_TIME\@EndGatewayBlockActor\@\@2HB
     */
    MCAPI static int const SPAWN_TIME; // NOLINT

    // private:
    /**
     * @symbol
     * ?_getHighestSection\@EndGatewayBlockActor\@\@CAHAEAVWorldGenerator\@\@AEAVBlockVolume\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static int _getHighestSection(class WorldGenerator&, class BlockVolume&, class BlockPos const&); // NOLINT

private:
};
