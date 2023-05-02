/**
 * @file  BlockStateDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockStateDefinition.
 *
 */
struct BlockStateDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEDEFINITION
public:
    struct BlockStateDefinition& operator=(struct BlockStateDefinition const &) = delete;
    BlockStateDefinition(struct BlockStateDefinition const &) = delete;
    BlockStateDefinition() = delete;
#endif

public:
    /**
     * @symbol ??4BlockStateDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockStateDefinition & operator=(struct BlockStateDefinition &&);
    /**
     * @symbol ??1BlockStateDefinition\@\@QEAA\@XZ
     */
    MCAPI ~BlockStateDefinition();

//private:
    /**
     * @symbol ?_copy\@BlockStateDefinition\@\@AEAAXAEBU1\@\@Z
     */
    MCAPI void _copy(struct BlockStateDefinition const &);

};