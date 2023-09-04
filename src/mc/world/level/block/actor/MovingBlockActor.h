#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class MovingBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    MovingBlockActor& operator=(MovingBlockActor const&) = delete;
    MovingBlockActor(MovingBlockActor const&)            = delete;
    MovingBlockActor()                                   = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?load@MovingBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@MovingBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@MovingBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 14, symbol: ?isPreserved@MovingBlockActor@@UEBA_NAEAVBlockSource@@@Z
    virtual bool isPreserved(class BlockSource&) const;

    // vIndex: 15, symbol: ?shouldPreserve@MovingBlockActor@@UEAA_NAEAVBlockSource@@@Z
    virtual bool shouldPreserve(class BlockSource&);

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 22, symbol: ?getCollisionShape@MovingBlockActor@@UEBA?AVAABB@@AEBVIConstBlockSource@@@Z
    virtual class AABB getCollisionShape(class IConstBlockSource const&) const;

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@MovingBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@MovingBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ?getOwningPiston@MovingBlockActor@@UEAAPEAVPistonBlockActor@@AEAVBlockSource@@@Z
    MCVAPI class PistonBlockActor* getOwningPiston(class BlockSource&);

    // symbol: ?getOwningPiston@MovingBlockActor@@UEBAPEBVPistonBlockActor@@AEAVBlockSource@@@Z
    MCVAPI class PistonBlockActor const* getOwningPiston(class BlockSource&) const;

    // symbol: ??0MovingBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI MovingBlockActor(class BlockPos const&);

    // symbol: ?_validPistonPos@MovingBlockActor@@QEBA_NAEBVIConstBlockSource@@@Z
    MCAPI bool _validPistonPos(class IConstBlockSource const&) const;

    // symbol: ?getDrawPos@MovingBlockActor@@QEBA?AVVec3@@AEBVIConstBlockSource@@M@Z
    MCAPI class Vec3 getDrawPos(class IConstBlockSource const&, float) const;

    // symbol: ?moveCollidedEntities@MovingBlockActor@@QEAAXAEAVPistonBlockActor@@AEAVBlockSource@@@Z
    MCAPI void moveCollidedEntities(class PistonBlockActor&, class BlockSource&);

    // NOLINTEND
};
