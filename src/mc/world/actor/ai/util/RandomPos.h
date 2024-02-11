#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SolidityCheckType.h"

class RandomPos {
public:
    // prevent constructor by default
    RandomPos& operator=(RandomPos const&);
    RandomPos(RandomPos const&);
    RandomPos();

public:
    // NOLINTBEGIN
    // symbol: ?getPos@RandomPos@@SA_NAEAVVec3@@AEAVMob@@HHHW4SolidityCheckType@@@Z
    MCAPI static bool
    getPos(class Vec3& outPos, class Mob& mob, int xzDist, int yDist, int tries, ::SolidityCheckType blockTest);

    // symbol: ?getPosAvoid@RandomPos@@SA_NAEAVVec3@@AEAVMob@@HHAEBV2@W4SolidityCheckType@@H@Z
    MCAPI static bool getPosAvoid(
        class Vec3&         outPos,
        class Mob&          mob,
        int                 xzDist,
        int                 yDist,
        class Vec3 const&   avoidPos,
        ::SolidityCheckType blockTest,
        int                 tries
    );

    // symbol: ?getPosTowards@RandomPos@@SA_NAEAVVec3@@AEAVMob@@HHAEBV2@@Z
    MCAPI static bool
    getPosTowards(class Vec3& outPos, class Mob& mob, int xzDist, int yDist, class Vec3 const& towardsPos);

    // symbol: ?getPosTowards@RandomPos@@SA_NAEAVRandom@@AEAVVec3@@AEAVMob@@HHAEBV3@@Z
    MCAPI static bool getPosTowards(
        class Random&     random,
        class Vec3&       outPos,
        class Mob&        mob,
        int               xzDist,
        int               yDist,
        class Vec3 const& towardsPos
    );

    // symbol: ?getSpawnPos@RandomPos@@SA_NAEAVBlockSource@@AEAVRandom@@AEAVVec3@@HHH@Z
    MCAPI static bool getSpawnPos(
        class BlockSource& region,
        class Random&      random,
        class Vec3&        outPos,
        int                xzDist,
        int                yDist,
        int                numAttempts
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?generateRandomPos@RandomPos@@CA_NAEAVVec3@@AEAVMob@@HHPEBV2@_N3HW4SolidityCheckType@@@Z
    MCAPI static bool generateRandomPos(
        class Vec3&         outPos,
        class Mob&          mob,
        int                 xzDist,
        int                 yDist,
        class Vec3 const*   dir,
        bool                canFly,
        bool                canSwim,
        int                 tries,
        ::SolidityCheckType blockTest
    );

    // symbol:
    // ?generateRandomPos@RandomPos@@CA_NAEAVRandomize@@AEAVVec3@@AEAVMob@@HHHPEBV3@_N4AEBUIntRange@@HW4SolidityCheckType@@@Z
    MCAPI static bool generateRandomPos(
        class Randomize&       randomize,
        class Vec3&            outPos,
        class Mob&             mob,
        int                    xzDist,
        int                    yDist,
        int                    yOffset,
        class Vec3 const*      dir,
        bool                   canFly,
        bool                   canSwim,
        struct IntRange const& hoverHeight,
        int                    tries,
        ::SolidityCheckType    blockTest
    );

    // symbol: ?snapToGround@RandomPos@@CA_NAEAVBlockPos@@HHV?$function@$$A6A_NAEAVBlockPos@@@Z@std@@@Z
    MCAPI static bool
    snapToGround(class BlockPos& inOutPos, int minY, int maxY, std::function<bool(class BlockPos&)> solidityChecker);

    // symbol: ?snapToGround@RandomPos@@CA_NAEAVBlockPos@@AEAVMob@@HAEBUIntRange@@W4SolidityCheckType@@@Z
    MCAPI static bool snapToGround(
        class BlockPos&        inOutPos,
        class Mob&             mob,
        int                    yDist,
        struct IntRange const& hoverHeight,
        ::SolidityCheckType    blockTest
    );

    // symbol: ?snapToGround@RandomPos@@CA_NAEAVBlockPos@@HHHV?$function@$$A6A_NAEAVBlockPos@@@Z@std@@@Z
    MCAPI static bool snapToGround(
        class BlockPos&                      inOutPos,
        int                                  minY,
        int                                  maxY,
        int                                  hoverHeight,
        std::function<bool(class BlockPos&)> solidityChecker
    );

    // symbol: ?spawnSnapToGround@RandomPos@@CA_NAEAVBlockSource@@AEAVBlockPos@@MH@Z
    MCAPI static bool
    spawnSnapToGround(class BlockSource& region, class BlockPos& inOutPos, float startingY, int yDist);

    // NOLINTEND
};
