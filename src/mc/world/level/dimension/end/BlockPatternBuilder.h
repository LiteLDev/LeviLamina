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
    MCAPI class BlockPatternBuilder& aisle(int, ...);

    MCAPI class BlockPatternBuilder& build();

    MCAPI class BlockPatternBuilder& define(char pattern, class Block const& block);

    MCAPI class BlockPatternBuilder&
    define(char pattern, std::function<bool(class BlockSource&, class BlockPos const&, class Block const&)> tester);

    MCAPI bool isReadyForMatch();

    MCAPI struct BuildMatch match(class BlockPos const& pos);

    MCAPI struct BuildMatch match(class BlockPos const& pos, int subPattern, int rowIndex);

    MCAPI struct BuildMatch match(class BlockPos const& pos, int subPattern, int rowIndex, uchar forward, uchar up);

    MCAPI void
    replaceBlocks(char, struct BuildMatch, class Block const&, std::function<void(class Block const&, class BlockPos const&)>);

    MCAPI static std::unique_ptr<class BlockPatternBuilder> start(class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _fitsBlockPatternEntry(int subPattern, int rowIndex, class BlockPos const& pos, class Block const& block);

    // NOLINTEND
};
