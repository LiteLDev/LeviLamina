/**
 * @file  PathfinderNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1168741065
     * @symbol  ??0PathfinderNode\@\@QEAA\@AEBVBlockPos\@\@W4NodeType\@\@\@Z
     */
    MCAPI PathfinderNode(class BlockPos const &, enum class NodeType);
    /**
     * @hash   -2064513743
     * @symbol  ??0PathfinderNode\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PathfinderNode(class PathfinderNode const &);
    /**
     * @hash   1282781158
     * @symbol  ?distanceTo\@PathfinderNode\@\@QEBAMPEAV1\@\@Z
     */
    MCAPI float distanceTo(class PathfinderNode *) const;
    /**
     * @hash   1472592700
     * @symbol  ?distanceToSqr\@PathfinderNode\@\@QEBAMPEAV1\@\@Z
     */
    MCAPI float distanceToSqr(class PathfinderNode *) const;
    /**
     * @hash   -1112752848
     * @symbol  ?equals\@PathfinderNode\@\@QEAA_NPEAV1\@\@Z
     */
    MCAPI bool equals(class PathfinderNode *);
    /**
     * @hash   -626712266
     * @symbol  ?getCostMalus\@PathfinderNode\@\@QEBAMXZ
     */
    MCAPI float getCostMalus() const;
    /**
     * @hash   775602886
     * @symbol  ?getType\@PathfinderNode\@\@QEBA?AW4NodeType\@\@XZ
     */
    MCAPI enum class NodeType getType() const;
    /**
     * @hash   1923386652
     * @symbol  ?inOpenSet\@PathfinderNode\@\@QEAA_NXZ
     */
    MCAPI bool inOpenSet();
    /**
     * @hash   1043270692
     * @symbol  ?setCostMalus\@PathfinderNode\@\@QEAAXM\@Z
     */
    MCAPI void setCostMalus(float);
    /**
     * @hash   1665210996
     * @symbol  ?setMoveMalus\@PathfinderNode\@\@QEAAXM\@Z
     */
    MCAPI void setMoveMalus(float);

};