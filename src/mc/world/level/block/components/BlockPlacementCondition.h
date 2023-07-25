#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPLACEMENTCONDITION
public:
    BlockPlacementCondition() = delete;
#endif

public:
    /**
     * @symbol ??0BlockPlacementCondition\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockPlacementCondition(struct BlockPlacementCondition const&);
    /**
     * @symbol ??4BlockPlacementCondition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockPlacementCondition& operator=(struct BlockPlacementCondition&&);
    /**
     * @symbol ??4BlockPlacementCondition\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct BlockPlacementCondition& operator=(struct BlockPlacementCondition const&);
    /**
     * @symbol ??1BlockPlacementCondition\@\@QEAA\@XZ
     */
    MCAPI ~BlockPlacementCondition();
};
