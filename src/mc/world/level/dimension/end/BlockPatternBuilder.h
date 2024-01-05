#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPatternBuilder {
public:
    // prevent constructor by default
    BlockPatternBuilder& operator=(BlockPatternBuilder const&);
    BlockPatternBuilder(BlockPatternBuilder const&);
    BlockPatternBuilder();

public:
    // NOLINTBEGIN
    // symbol: ?aisle@BlockPatternBuilder@@QEAAAEAV1@HZZ
    MCAPI class BlockPatternBuilder& aisle(int, ...);

    // symbol: ?build@BlockPatternBuilder@@QEAAAEAV1@XZ
    MCAPI class BlockPatternBuilder& build();

    // symbol: ?define@BlockPatternBuilder@@QEAAAEAV1@DAEBVBlock@@@Z
    MCAPI class BlockPatternBuilder& define(char pattern, class Block const& block);

    // symbol:
    // ?define@BlockPatternBuilder@@QEAAAEAV1@DV?$function@$$A6A_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z@std@@@Z
    MCAPI class BlockPatternBuilder&
    define(char pattern, std::function<bool(class BlockSource&, class BlockPos const&, class Block const&)> tester);

    // symbol: ?isReadyForMatch@BlockPatternBuilder@@QEAA_NXZ
    MCAPI bool isReadyForMatch();

    // symbol: ?match@BlockPatternBuilder@@QEAA?AUBuildMatch@@AEBVBlockPos@@@Z
    MCAPI struct BuildMatch match(class BlockPos const& pos);

    // symbol: ?match@BlockPatternBuilder@@QEAA?AUBuildMatch@@AEBVBlockPos@@HH@Z
    MCAPI struct BuildMatch match(class BlockPos const& pos, int subPattern, int rowIndex);

    // symbol: ?match@BlockPatternBuilder@@QEAA?AUBuildMatch@@AEBVBlockPos@@HHEE@Z
    MCAPI struct BuildMatch match(class BlockPos const& pos, int subPattern, int rowIndex, uchar forward, uchar up);

    // symbol:
    // ?replaceBlocks@BlockPatternBuilder@@QEAAXDUBuildMatch@@AEBVBlock@@V?$function@$$A6AXAEBVBlock@@AEBVBlockPos@@@Z@std@@@Z
    MCAPI void
    replaceBlocks(char, struct BuildMatch, class Block const&, std::function<void(class Block const&, class BlockPos const&)>);

    // symbol:
    // ?start@BlockPatternBuilder@@SA?AV?$unique_ptr@VBlockPatternBuilder@@U?$default_delete@VBlockPatternBuilder@@@std@@@std@@AEAVBlockSource@@@Z
    MCAPI static std::unique_ptr<class BlockPatternBuilder> start(class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fitsBlockPatternEntry@BlockPatternBuilder@@AEAA_NHHAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool
    _fitsBlockPatternEntry(int subPattern, int rowIndex, class BlockPos const& pos, class Block const& block);

    // NOLINTEND
};
