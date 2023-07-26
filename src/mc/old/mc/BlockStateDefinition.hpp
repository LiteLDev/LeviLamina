/**
 * @file  BlockStateDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
    BlockStateDefinition() = delete;
#endif

public:
    /**
     * @symbol  ??0BlockStateDefinition\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockStateDefinition(struct BlockStateDefinition const &);
    /**
     * @symbol  ??4BlockStateDefinition\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct BlockStateDefinition & operator=(struct BlockStateDefinition const &);
    /**
     * @symbol  ??4BlockStateDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockStateDefinition & operator=(struct BlockStateDefinition &&);
    /**
     * @symbol  ??1BlockStateDefinition\@\@QEAA\@XZ
     */
    MCAPI ~BlockStateDefinition();

//private:
    /**
     * @symbol  ?_copy\@BlockStateDefinition\@\@AEAAXAEBU1\@\@Z
     */
    MCAPI void _copy(struct BlockStateDefinition const &);

};