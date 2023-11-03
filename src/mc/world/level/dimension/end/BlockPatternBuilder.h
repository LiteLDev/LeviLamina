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
    MCAPI class BlockPatternBuilder& define(char, class Block const&);

    // symbol:
    // ?define@BlockPatternBuilder@@QEAAAEAV1@DV?$function@$$A6A_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z@std@@@Z
    MCAPI class BlockPatternBuilder&
    define(char, std::function<bool(class BlockSource&, class BlockPos const&, class Block const&)>);

    // symbol: ?isReadyForMatch@BlockPatternBuilder@@QEAA_NXZ
    MCAPI bool isReadyForMatch();

    // symbol: ?match@BlockPatternBuilder@@QEAA?AUBuildMatch@@AEBVBlockPos@@@Z
    MCAPI struct BuildMatch match(class BlockPos const&);

    // symbol: ?match@BlockPatternBuilder@@QEAA?AUBuildMatch@@AEBVBlockPos@@HH@Z
    MCAPI struct BuildMatch match(class BlockPos const&, int, int);

    // symbol: ?match@BlockPatternBuilder@@QEAA?AUBuildMatch@@AEBVBlockPos@@HHEE@Z
    MCAPI struct BuildMatch match(class BlockPos const&, int, int, uchar, uchar);

    // symbol:
    // ?replaceBlocks@BlockPatternBuilder@@QEAAXDUBuildMatch@@AEBVBlock@@V?$function@$$A6AXAEBVBlock@@AEBVBlockPos@@@Z@std@@@Z
    MCAPI void
    replaceBlocks(char, struct BuildMatch, class Block const&, std::function<void(class Block const&, class BlockPos const&)>);

    // symbol:
    // ?start@BlockPatternBuilder@@SA?AV?$unique_ptr@VBlockPatternBuilder@@U?$default_delete@VBlockPatternBuilder@@@std@@@std@@AEAVBlockSource@@@Z
    MCAPI static std::unique_ptr<class BlockPatternBuilder> start(class BlockSource&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fitsBlockPatternEntry@BlockPatternBuilder@@AEAA_NHHAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool _fitsBlockPatternEntry(int, int, class BlockPos const&, class Block const&);

    // NOLINTEND
};
