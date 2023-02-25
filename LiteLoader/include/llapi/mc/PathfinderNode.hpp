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
     * @symbol  ??0PathfinderNode\@\@QEAA\@AEBVBlockPos\@\@W4NodeType\@\@\@Z
     */
    MCAPI PathfinderNode(class BlockPos const &, enum class NodeType);
    /**
     * @symbol  ??0PathfinderNode\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PathfinderNode(class PathfinderNode const &);
    /**
     * @symbol  ?distanceTo\@PathfinderNode\@\@QEBAMPEAV1\@\@Z
     */
    MCAPI float distanceTo(class PathfinderNode *) const;
    /**
     * @symbol  ?distanceToSqr\@PathfinderNode\@\@QEBAMPEAV1\@\@Z
     */
    MCAPI float distanceToSqr(class PathfinderNode *) const;
    /**
     * @symbol  ?equals\@PathfinderNode\@\@QEAA_NPEAV1\@\@Z
     */
    MCAPI bool equals(class PathfinderNode *);
    /**
     * @symbol  ?getCostMalus\@PathfinderNode\@\@QEBAMXZ
     */
    MCAPI float getCostMalus() const;
    /**
     * @symbol  ?getType\@PathfinderNode\@\@QEBA?AW4NodeType\@\@XZ
     */
    MCAPI enum class NodeType getType() const;
    /**
     * @symbol  ?inOpenSet\@PathfinderNode\@\@QEAA_NXZ
     */
    MCAPI bool inOpenSet();
    /**
     * @symbol  ?setCostMalus\@PathfinderNode\@\@QEAAXM\@Z
     */
    MCAPI void setCostMalus(float);
    /**
     * @symbol  ?setMoveMalus\@PathfinderNode\@\@QEAAXM\@Z
     */
    MCAPI void setMoveMalus(float);

};