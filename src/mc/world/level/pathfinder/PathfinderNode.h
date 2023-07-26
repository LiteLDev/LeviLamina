#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PathfinderNode {

public:
    // prevent constructor by default
    PathfinderNode& operator=(PathfinderNode const&) = delete;
    PathfinderNode()                                 = delete;

public:
    /**
     * @symbol ??0PathfinderNode\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PathfinderNode(class PathfinderNode const&); // NOLINT
    /**
     * @symbol ??0PathfinderNode\@\@QEAA\@AEBVBlockPos\@\@W4NodeType\@\@\@Z
     */
    MCAPI PathfinderNode(class BlockPos const&, enum class NodeType); // NOLINT
    /**
     * @symbol ?distanceTo\@PathfinderNode\@\@QEBAMPEAV1\@\@Z
     */
    MCAPI float distanceTo(class PathfinderNode*) const; // NOLINT
    /**
     * @symbol ?distanceToSqr\@PathfinderNode\@\@QEBAMPEAV1\@\@Z
     */
    MCAPI float distanceToSqr(class PathfinderNode*) const; // NOLINT
    /**
     * @symbol ?equals\@PathfinderNode\@\@QEAA_NPEAV1\@\@Z
     */
    MCAPI bool equals(class PathfinderNode*); // NOLINT
    /**
     * @symbol ?getType\@PathfinderNode\@\@QEBA?AW4NodeType\@\@XZ
     */
    MCAPI enum class NodeType getType() const; // NOLINT
    /**
     * @symbol ?inOpenSet\@PathfinderNode\@\@QEAA_NXZ
     */
    MCAPI bool inOpenSet(); // NOLINT
};
