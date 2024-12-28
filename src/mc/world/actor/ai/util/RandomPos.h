#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/SolidityCheckType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
class Random;
class Randomize;
class Vec3;
struct IntRange;
// clang-format on

class RandomPos {
public:
    // prevent constructor by default
    RandomPos& operator=(RandomPos const&);
    RandomPos(RandomPos const&);
    RandomPos();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::Vec3> generateRandomPos(
        ::Randomize&        randomize,
        ::Mob&              mob,
        int                 xzDist,
        int                 yDist,
        int                 yOffset,
        ::Vec3 const*       dir,
        bool                canFly,
        bool                canSwim,
        ::IntRange const&   hoverHeight,
        int                 tries,
        ::SolidityCheckType blockTest
    );

    MCAPI static ::std::optional<::Vec3>
    getPos(::Mob& mob, int xzDist, int yDist, int tries, ::SolidityCheckType blockTest);

    MCAPI static ::std::optional<::Vec3>
    getPosAvoid(::Mob& mob, int xzDist, int yDist, ::Vec3 const& avoidPos, ::SolidityCheckType blockTest, int tries);

    MCAPI static ::std::optional<::Vec3> getPosInDirection(
        ::Mob&              mob,
        int                 xzDist,
        int                 yDist,
        int                 yOffset,
        bool                canFly,
        bool                canSwim,
        ::Vec3*             direction,
        ::IntRange const&   hoverHeight,
        int                 tries,
        ::SolidityCheckType blockTest
    );

    MCAPI static ::std::optional<::Vec3> getPosTowards(::Mob& mob, int xzDist, int yDist, ::Vec3 const& towardsPos);

    MCAPI static ::std::optional<::Vec3>
    getPosTowards(::Random& random, ::Mob& mob, int xzDist, int yDist, ::Vec3 const& towardsPos);

    MCAPI static ::std::optional<::Vec3>
    getSpawnPos(::BlockSource& region, ::Random& random, ::Vec3 const& inPos, int xzDist, int yDist, int numAttempts);

    MCAPI static bool spawnSnapToGround(::BlockSource& region, ::BlockPos& inOutPos, float startingY, int yDist);
    // NOLINTEND
};
