#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPatternBuilder {

public:
    // prevent constructor by default
    BlockPatternBuilder& operator=(BlockPatternBuilder const&) = delete;
    BlockPatternBuilder(BlockPatternBuilder const&)            = delete;
    BlockPatternBuilder()                                      = delete;

public:
    /**
     * @symbol ?aisle\@BlockPatternBuilder\@\@QEAAAEAV1\@HZZ
     */
    MCAPI class BlockPatternBuilder& aisle(int, ...); // NOLINT
    /**
     * @symbol ?build\@BlockPatternBuilder\@\@QEAAAEAV1\@XZ
     */
    MCAPI class BlockPatternBuilder& build(); // NOLINT
    /**
     * @symbol ?define\@BlockPatternBuilder\@\@QEAAAEAV1\@DAEBVBlock\@\@\@Z
     */
    MCAPI class BlockPatternBuilder& define(char, class Block const&); // NOLINT
    /**
     * @symbol
     * ?define\@BlockPatternBuilder\@\@QEAAAEAV1\@DV?$function\@$$A6A_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class BlockPatternBuilder&
    define(char, class std::function<bool(class BlockSource&, class BlockPos const&, class Block const&)>); // NOLINT
    /**
     * @symbol ?isReadyForMatch\@BlockPatternBuilder\@\@QEAA_NXZ
     */
    MCAPI bool isReadyForMatch(); // NOLINT
    /**
     * @symbol ?match\@BlockPatternBuilder\@\@QEAA?AUBuildMatch\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI struct BuildMatch match(class BlockPos const&); // NOLINT
    /**
     * @symbol ?match\@BlockPatternBuilder\@\@QEAA?AUBuildMatch\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI struct BuildMatch match(class BlockPos const&, int, int); // NOLINT
    /**
     * @symbol ?match\@BlockPatternBuilder\@\@QEAA?AUBuildMatch\@\@AEBVBlockPos\@\@HHEE\@Z
     */
    MCAPI struct BuildMatch match(class BlockPos const&, int, int, unsigned char, unsigned char); // NOLINT
    /**
     * @symbol ?replaceBlocks\@BlockPatternBuilder\@\@QEAAXDUBuildMatch\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void replaceBlocks(char, struct BuildMatch, class Block const&); // NOLINT
    /**
     * @symbol
     * ?start\@BlockPatternBuilder\@\@SA?AV?$unique_ptr\@VBlockPatternBuilder\@\@U?$default_delete\@VBlockPatternBuilder\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI static std::unique_ptr<class BlockPatternBuilder> start(class BlockSource&); // NOLINT

    // private:
    /**
     * @symbol ?_fitsBlockPatternEntry\@BlockPatternBuilder\@\@AEAA_NHHAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool _fitsBlockPatternEntry(int, int, class BlockPos const&, class Block const&); // NOLINT

private:
};
