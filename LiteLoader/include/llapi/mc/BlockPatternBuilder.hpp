/**
 * @file  BlockPatternBuilder.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockPatternBuilder.
 *
 */
class BlockPatternBuilder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPATTERNBUILDER
public:
    class BlockPatternBuilder& operator=(class BlockPatternBuilder const &) = delete;
    BlockPatternBuilder(class BlockPatternBuilder const &) = delete;
    BlockPatternBuilder() = delete;
#endif

public:
    /**
     * @hash   1779780739
     * @symbol  ?aisle\@BlockPatternBuilder\@\@QEAAAEAV1\@HZZ
     */
    MCAPI class BlockPatternBuilder & aisle(int, ...);
    /**
     * @hash   -1145449083
     * @symbol  ?build\@BlockPatternBuilder\@\@QEAAAEAV1\@XZ
     */
    MCAPI class BlockPatternBuilder & build();
    /**
     * @hash   647701970
     * @symbol  ?define\@BlockPatternBuilder\@\@QEAAAEAV1\@DAEBVBlock\@\@\@Z
     */
    MCAPI class BlockPatternBuilder & define(char, class Block const &);
    /**
     * @hash   -662428740
     * @symbol  ?define\@BlockPatternBuilder\@\@QEAAAEAV1\@DV?$function\@$$A6A_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class BlockPatternBuilder & define(char, class std::function<bool (class BlockSource &, class BlockPos const &, class Block const &)>);
    /**
     * @hash   -1363595634
     * @symbol  ?isReadyForMatch\@BlockPatternBuilder\@\@QEAA_NXZ
     */
    MCAPI bool isReadyForMatch();
    /**
     * @hash   -1846577173
     * @symbol  ?match\@BlockPatternBuilder\@\@QEAA?AUBuildMatch\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI struct BuildMatch match(class BlockPos const &);
    /**
     * @hash   -1027068261
     * @symbol  ?match\@BlockPatternBuilder\@\@QEAA?AUBuildMatch\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI struct BuildMatch match(class BlockPos const &, int, int);
    /**
     * @hash   1319401899
     * @symbol  ?match\@BlockPatternBuilder\@\@QEAA?AUBuildMatch\@\@AEBVBlockPos\@\@HHEE\@Z
     */
    MCAPI struct BuildMatch match(class BlockPos const &, int, int, unsigned char, unsigned char);
    /**
     * @hash   -1230607591
     * @symbol  ?replaceBlocks\@BlockPatternBuilder\@\@QEAAXDUBuildMatch\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void replaceBlocks(char, struct BuildMatch, class Block const &);
    /**
     * @hash   608240949
     * @symbol  ?start\@BlockPatternBuilder\@\@SA?AV?$unique_ptr\@VBlockPatternBuilder\@\@U?$default_delete\@VBlockPatternBuilder\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI static std::unique_ptr<class BlockPatternBuilder> start(class BlockSource &);

//private:
    /**
     * @hash   1088681846
     * @symbol  ?_fitsBlockPatternEntry\@BlockPatternBuilder\@\@AEAA_NHHAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool _fitsBlockPatternEntry(int, int, class BlockPos const &, class Block const &);

private:

};