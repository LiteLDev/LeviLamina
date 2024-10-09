#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/SolidityCheckType.h"

class RandomPos {
public:
    // prevent constructor by default
    RandomPos& operator=(RandomPos const&);
    RandomPos(RandomPos const&);
    RandomPos();

public:
    // NOLINTBEGIN
    MCAPI static bool
    getPos(class Vec3& outPos, class Mob& mob, int xzDist, int yDist, int tries, ::SolidityCheckType blockTest);

    MCAPI static bool getPosAvoid(
        class Vec3&         outPos,
        class Mob&          mob,
        int                 xzDist,
        int                 yDist,
        class Vec3 const&   avoidPos,
        ::SolidityCheckType blockTest,
        int                 tries
    );

    MCAPI static bool
    getPosTowards(class Vec3& outPos, class Mob& mob, int xzDist, int yDist, class Vec3 const& towardsPos);

    MCAPI static bool getPosTowards(
        class Random&     random,
        class Vec3&       outPos,
        class Mob&        mob,
        int               xzDist,
        int               yDist,
        class Vec3 const& towardsPos
    );

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

    MCAPI static bool
    snapToGround(class BlockPos& inOutPos, int minY, int maxY, std::function<bool(class BlockPos&)> solidityChecker);

    MCAPI static bool snapToGround(
        class BlockPos&        inOutPos,
        class Mob&             mob,
        int                    yDist,
        struct IntRange const& hoverHeight,
        ::SolidityCheckType    blockTest
    );

    MCAPI static bool snapToGround(
        class BlockPos&                      inOutPos,
        int                                  minY,
        int                                  maxY,
        int                                  hoverHeight,
        std::function<bool(class BlockPos&)> solidityChecker
    );

    MCAPI static bool
    spawnSnapToGround(class BlockSource& region, class BlockPos& inOutPos, float startingY, int yDist);

    // NOLINTEND
};
