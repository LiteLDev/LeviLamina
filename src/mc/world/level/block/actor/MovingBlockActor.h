#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class MovingBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    MovingBlockActor& operator=(MovingBlockActor const&);
    MovingBlockActor(MovingBlockActor const&);
    MovingBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MovingBlockActor@@UEAA@XZ
    virtual ~MovingBlockActor() = default;

    // vIndex: 1, symbol: ?load@MovingBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@MovingBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@MovingBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 14, symbol: ?isPreserved@MovingBlockActor@@UEBA_NAEAVBlockSource@@@Z
    virtual bool isPreserved(class BlockSource& region) const;

    // vIndex: 15, symbol: ?shouldPreserve@MovingBlockActor@@UEAA_NAEAVBlockSource@@@Z
    virtual bool shouldPreserve(class BlockSource& region);

    // vIndex: 22, symbol: ?getCollisionShape@MovingBlockActor@@UEBA?AVAABB@@AEBVIConstBlockSource@@@Z
    virtual class AABB getCollisionShape(class IConstBlockSource const& region) const;

    // vIndex: 30, symbol: ?getOwningPiston@MovingBlockActor@@UEBAPEBVPistonBlockActor@@AEAVBlockSource@@@Z
    virtual class PistonBlockActor const* getOwningPiston(class BlockSource& region) const;

    // vIndex: 31, symbol: ?getOwningPiston@MovingBlockActor@@UEAAPEAVPistonBlockActor@@AEAVBlockSource@@@Z
    virtual class PistonBlockActor* getOwningPiston(class BlockSource& region);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@MovingBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@MovingBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0MovingBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit MovingBlockActor(class BlockPos const& pos);

    // symbol: ?getDrawPos@MovingBlockActor@@QEBA?AVVec3@@AEBVIConstBlockSource@@M@Z
    MCAPI class Vec3 getDrawPos(class IConstBlockSource const& region, float a) const;

    // symbol: ?moveCollidedEntities@MovingBlockActor@@QEAAXAEAVPistonBlockActor@@AEAVBlockSource@@@Z
    MCAPI void moveCollidedEntities(class PistonBlockActor& pistonBlock, class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getWrappedBlockCollisionShapes@MovingBlockActor@@AEBA?AU?$pair@VAABB@@V1@@std@@AEBVIConstBlockSource@@@Z
    MCAPI std::pair<class AABB, class AABB> _getWrappedBlockCollisionShapes(class IConstBlockSource const&) const;

    // symbol: ?_validPistonPos@MovingBlockActor@@AEBA_NAEBVIConstBlockSource@@@Z
    MCAPI bool _validPistonPos(class IConstBlockSource const& region) const;

    // NOLINTEND
};
