/**
 * @file  RailMovementUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RailMovementUtility.
 *
 */
class RailMovementUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILMOVEMENTUTILITY
public:
    class RailMovementUtility& operator=(class RailMovementUtility const &) = delete;
    RailMovementUtility(class RailMovementUtility const &) = delete;
    RailMovementUtility() = delete;
#endif

public:
    /**
     * @symbol  ?calculateGoldenRailSpeedIncrease\@RailMovementUtility\@\@SA?AVVec3\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@HV2\@\@Z
     */
    MCAPI static class Vec3 calculateGoldenRailSpeedIncrease(class IConstBlockSource const &, class BlockPos const &, int, class Vec3);
    /**
     * @symbol  ?calculateMoveVelocity\@RailMovementUtility\@\@SA?AVVec3\@\@AEBVBlock\@\@HM_NAEAV2\@AEA_N3AEBV?$function\@$$A6A_NAEAVVec3\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static class Vec3 calculateMoveVelocity(class Block const &, int, float, bool, class Vec3 &, bool &, bool &, class std::function<bool (class Vec3 &)> const &);
    /**
     * @symbol  ?calculatePassengerRailMovementInput\@RailMovementUtility\@\@SA_NAEAVVec3\@\@MM\@Z
     */
    MCAPI static bool calculatePassengerRailMovementInput(class Vec3 &, float, float);
    /**
     * @symbol  ?calculatePostRailMovementMinecartPosition\@RailMovementUtility\@\@SA?AVVec3\@\@AEBVIConstBlockSource\@\@AEBV2\@V2\@AEBVBlockPos\@\@HAEAV2\@\@Z
     */
    MCAPI static class Vec3 calculatePostRailMovementMinecartPosition(class IConstBlockSource const &, class Vec3 const &, class Vec3, class BlockPos const &, int, class Vec3 &);
    /**
     * @symbol  ?calculatePreRailMovementMinecartPosition\@RailMovementUtility\@\@SA?AVVec3\@\@V2\@AEBVBlockPos\@\@HM\@Z
     */
    MCAPI static class Vec3 calculatePreRailMovementMinecartPosition(class Vec3, class BlockPos const &, int, float);
    /**
     * @symbol  ?getPos\@RailMovementUtility\@\@SA_NAEBVIConstBlockSource\@\@AEAVVec3\@\@V3\@\@Z
     */
    MCAPI static bool getPos(class IConstBlockSource const &, class Vec3 &, class Vec3);

//private:

private:
    /**
     * @symbol  ?RAIL_EXITS\@RailMovementUtility\@\@0V?$array\@URailExits\@RailMovementUtility\@\@$09\@std\@\@B
     */
    MCAPI static class std::array<struct RailMovementUtility::RailExits, 10> const RAIL_EXITS;

};