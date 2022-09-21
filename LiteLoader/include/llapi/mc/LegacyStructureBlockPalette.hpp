/**
 * @file  MC/LegacyStructureBlockPalette.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyStructureBlockPalette.
 *
 */
class LegacyStructureBlockPalette {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTUREBLOCKPALETTE
public:
    class LegacyStructureBlockPalette& operator=(class LegacyStructureBlockPalette const &) = delete;
    LegacyStructureBlockPalette(class LegacyStructureBlockPalette const &) = delete;
#endif

public:
    /**
     * @hash   1239367332
     * @symbol ??0LegacyStructureBlockPalette@@QEAA@XZ
     */
    MCAPI LegacyStructureBlockPalette();
    /**
     * @hash   1432305045
     * @symbol ?addMapping@LegacyStructureBlockPalette@@QEAAXHAEBVBlock@@@Z
     */
    MCAPI void addMapping(int, class Block const &);
    /**
     * @hash   -1256577967
     * @symbol ?clearMap@LegacyStructureBlockPalette@@QEAAXXZ
     */
    MCAPI void clearMap();
    /**
     * @hash   -1045572027
     * @symbol ?getBlock@LegacyStructureBlockPalette@@QEAAAEBVBlock@@H@Z
     */
    MCAPI class Block const & getBlock(int);
    /**
     * @hash   1304944804
     * @symbol ??1LegacyStructureBlockPalette@@QEAA@XZ
     */
    MCAPI ~LegacyStructureBlockPalette();

};