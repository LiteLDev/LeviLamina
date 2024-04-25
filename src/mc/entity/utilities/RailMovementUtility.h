#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailMovementUtility {
public:
    // RailMovementUtility inner types declare
    // clang-format off
    struct RailExits;
    // clang-format on

    // RailMovementUtility inner types define
    struct RailExits {
    public:
        // prevent constructor by default
        RailExits& operator=(RailExits const&);
        RailExits(RailExits const&);
        RailExits();
    };

public:
    // prevent constructor by default
    RailMovementUtility& operator=(RailMovementUtility const&);
    RailMovementUtility(RailMovementUtility const&);
    RailMovementUtility();

public:
    // NOLINTBEGIN
    // symbol:
    // ?calculateGoldenRailSpeedIncrease@RailMovementUtility@@SA?AVVec3@@AEBVIConstBlockSource@@AEBVBlockPos@@HV2@@Z
    MCAPI static class Vec3 calculateGoldenRailSpeedIncrease(
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        int                            direction,
        class Vec3                     posDelta
    );

    // symbol:
    // ?calculateMoveVelocity@RailMovementUtility@@SA?AVVec3@@AEBVBlock@@HM_NAEAV2@AEA_N3AEBV?$function@$$A6A_NAEAVVec3@@@Z@std@@@Z
    MCAPI static class Vec3
    calculateMoveVelocity(class Block const& block, int, float, bool, class Vec3& posDelta, bool&, bool&, std::function<bool(class Vec3&)> const&);

    // symbol: ?calculatePassengerRailMovementInput@RailMovementUtility@@SA_NAEAVVec3@@MM@Z
    MCAPI static bool calculatePassengerRailMovementInput(class Vec3& posDelta, float forward, float);

    // symbol:
    // ?calculatePostRailMovementMinecartPosition@RailMovementUtility@@SA?AVVec3@@AEBVIConstBlockSource@@AEBV2@V2@AEBVBlockPos@@HAEAV2@@Z
    MCAPI static class Vec3 calculatePostRailMovementMinecartPosition(
        class IConstBlockSource const& region,
        class Vec3 const&,
        class Vec3            entityPos,
        class BlockPos const& pos,
        int,
        class Vec3& posDelta
    );

    // symbol: ?calculatePreRailMovementMinecartPosition@RailMovementUtility@@SA?AVVec3@@V2@AEBVBlockPos@@HM@Z
    MCAPI static class Vec3
    calculatePreRailMovementMinecartPosition(class Vec3 entityPos, class BlockPos const& pos, int, float heightOffset);

    // symbol: ?getPos@RailMovementUtility@@SA_NAEBVIConstBlockSource@@AEAVVec3@@V3@@Z
    MCAPI static bool getPos(class IConstBlockSource const& region, class Vec3& valueVec, class Vec3 pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?RAIL_EXITS@RailMovementUtility@@0V?$array@URailExits@RailMovementUtility@@$09@std@@B
    MCAPI static std::array<struct RailMovementUtility::RailExits, 10> const RAIL_EXITS;

    // NOLINTEND
};
