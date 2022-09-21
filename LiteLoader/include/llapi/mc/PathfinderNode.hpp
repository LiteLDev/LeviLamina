/**
 * @file  MC/PathfinderNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PathfinderNode.
 *
 */
class PathfinderNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATHFINDERNODE
public:
    class PathfinderNode& operator=(class PathfinderNode const &) = delete;
    PathfinderNode() = delete;
#endif

public:
    /**
     * @hash   -2039038041
     * @symbol ??0PathfinderNode@@QEAA@AEBVBlockPos@@W4NodeType@@@Z
     */
    MCAPI PathfinderNode(class BlockPos const &, enum NodeType);
    /**
     * @hash   1360156577
     * @symbol ??0PathfinderNode@@QEAA@AEBV0@@Z
     */
    MCAPI PathfinderNode(class PathfinderNode const &);
    /**
     * @hash   412484182
     * @symbol ?distanceTo@PathfinderNode@@QEBAMPEAV1@@Z
     */
    MCAPI float distanceTo(class PathfinderNode *) const;
    /**
     * @hash   602295724
     * @symbol ?distanceToSqr@PathfinderNode@@QEBAMPEAV1@@Z
     */
    MCAPI float distanceToSqr(class PathfinderNode *) const;
    /**
     * @hash   -1983049824
     * @symbol ?equals@PathfinderNode@@QEAA_NPEAV1@@Z
     */
    MCAPI bool equals(class PathfinderNode *);
    /**
     * @hash   -1497009242
     * @symbol ?getCostMalus@PathfinderNode@@QEBAMXZ
     */
    MCAPI float getCostMalus() const;
    /**
     * @hash   524943334
     * @symbol ?getType@PathfinderNode@@QEBA?AW4NodeType@@XZ
     */
    MCAPI enum NodeType getType() const;
    /**
     * @hash   1053089676
     * @symbol ?inOpenSet@PathfinderNode@@QEAA_NXZ
     */
    MCAPI bool inOpenSet();
    /**
     * @hash   172973716
     * @symbol ?setCostMalus@PathfinderNode@@QEAAXM@Z
     */
    MCAPI void setCostMalus(float);
    /**
     * @hash   -1787951052
     * @symbol ?setMoveMalus@PathfinderNode@@QEAAXM@Z
     */
    MCAPI void setMoveMalus(float);

};