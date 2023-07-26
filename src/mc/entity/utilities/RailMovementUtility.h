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
        RailExits& operator=(RailExits const&) = delete;
        RailExits(RailExits const&)            = delete;
        RailExits()                            = delete;
    };

public:
    // prevent constructor by default
    RailMovementUtility& operator=(RailMovementUtility const&) = delete;
    RailMovementUtility(RailMovementUtility const&)            = delete;
    RailMovementUtility()                                      = delete;

public:
    /**
     * @symbol
     * ?calculateGoldenRailSpeedIncrease\@RailMovementUtility\@\@SA?AVVec3\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@HV2\@\@Z
     */
    MCAPI static class Vec3
    calculateGoldenRailSpeedIncrease(class IConstBlockSource const&, class BlockPos const&, int, class Vec3); // NOLINT
    /**
     * @symbol
     * ?calculateMoveVelocity\@RailMovementUtility\@\@SA?AVVec3\@\@AEBVBlock\@\@HM_NAEAV2\@AEA_N3AEBV?$function\@$$A6A_NAEAVVec3\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static class Vec3
    calculateMoveVelocity(class Block const&, int, float, bool, class Vec3&, bool&, bool&, class std::function<bool(class Vec3&)> const&); // NOLINT
    /**
     * @symbol ?calculatePassengerRailMovementInput\@RailMovementUtility\@\@SA_NAEAVVec3\@\@MM\@Z
     */
    MCAPI static bool calculatePassengerRailMovementInput(class Vec3&, float, float); // NOLINT
    /**
     * @symbol
     * ?calculatePostRailMovementMinecartPosition\@RailMovementUtility\@\@SA?AVVec3\@\@AEBVIConstBlockSource\@\@AEBV2\@V2\@AEBVBlockPos\@\@HAEAV2\@\@Z
     */
    MCAPI static class Vec3
    calculatePostRailMovementMinecartPosition(class IConstBlockSource const&, class Vec3 const&, class Vec3, class BlockPos const&, int, class Vec3&); // NOLINT
    /**
     * @symbol ?calculatePreRailMovementMinecartPosition\@RailMovementUtility\@\@SA?AVVec3\@\@V2\@AEBVBlockPos\@\@HM\@Z
     */
    MCAPI static class Vec3
    calculatePreRailMovementMinecartPosition(class Vec3, class BlockPos const&, int, float); // NOLINT
    /**
     * @symbol ?getPos\@RailMovementUtility\@\@SA_NAEBVIConstBlockSource\@\@AEAVVec3\@\@V3\@\@Z
     */
    MCAPI static bool getPos(class IConstBlockSource const&, class Vec3&, class Vec3); // NOLINT

    // private:

private:
    /**
     * @symbol ?RAIL_EXITS\@RailMovementUtility\@\@0V?$array\@URailExits\@RailMovementUtility\@\@$09\@std\@\@B
     */
    MCAPI static class std::array<struct RailMovementUtility::RailExits, 10> const RAIL_EXITS; // NOLINT
};
