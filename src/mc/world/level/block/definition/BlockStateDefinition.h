#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockStateDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEDEFINITION
public:
    BlockStateDefinition& operator=(BlockStateDefinition const&) = delete;
    BlockStateDefinition(BlockStateDefinition const&)            = delete;
    BlockStateDefinition()                                       = delete;
#endif

public:
    /**
     * @symbol ??4BlockStateDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockStateDefinition& operator=(struct BlockStateDefinition&&);
    /**
     * @symbol ??1BlockStateDefinition\@\@QEAA\@XZ
     */
    MCAPI ~BlockStateDefinition();

    // private:
    /**
     * @symbol ?_copy\@BlockStateDefinition\@\@AEAAXAEBU1\@\@Z
     */
    MCAPI void _copy(struct BlockStateDefinition const&);
};
