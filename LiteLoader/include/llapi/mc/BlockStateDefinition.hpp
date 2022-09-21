/**
 * @file  MC/BlockStateDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1401986975
     * @symbol ??0BlockStateDefinition@@QEAA@AEBU0@@Z
     */
    MCAPI BlockStateDefinition(struct BlockStateDefinition const &);
    /**
     * @hash   -162557114
     * @symbol ??4BlockStateDefinition@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct BlockStateDefinition & operator=(struct BlockStateDefinition const &);
    /**
     * @hash   1002469266
     * @symbol ??4BlockStateDefinition@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct BlockStateDefinition & operator=(struct BlockStateDefinition &&);
    /**
     * @hash   1954021185
     * @symbol ??1BlockStateDefinition@@QEAA@XZ
     */
    MCAPI ~BlockStateDefinition();

//private:
    /**
     * @hash   744143190
     * @symbol ?_copy@BlockStateDefinition@@AEAAXAEBU1@@Z
     */
    MCAPI void _copy(struct BlockStateDefinition const &);

};