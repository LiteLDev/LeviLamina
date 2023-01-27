/**
 * @file  LegacyStructureBlockPalette.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   2097747908
     * @symbol  ??0LegacyStructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI LegacyStructureBlockPalette();
    /**
     * @hash   -2004281675
     * @symbol  ?addMapping\@LegacyStructureBlockPalette\@\@QEAAXHAEBVBlock\@\@\@Z
     */
    MCAPI void addMapping(int, class Block const &);
    /**
     * @hash   -398182015
     * @symbol  ?clearMap\@LegacyStructureBlockPalette\@\@QEAAXXZ
     */
    MCAPI void clearMap();
    /**
     * @hash   -187176075
     * @symbol  ?getBlock\@LegacyStructureBlockPalette\@\@QEAAAEBVBlock\@\@H\@Z
     */
    MCAPI class Block const & getBlock(int);
    /**
     * @hash   1397877348
     * @symbol  ??1LegacyStructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI ~LegacyStructureBlockPalette();

};