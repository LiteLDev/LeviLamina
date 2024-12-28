#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct BuildMatch;
// clang-format on

class BlockPatternBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc90572;
    ::ll::UntypedStorage<8, 24> mUnkdf8196;
    ::ll::UntypedStorage<8, 16> mUnk1300cd;
    ::ll::UntypedStorage<1, 1>  mUnk59c3f0;
    ::ll::UntypedStorage<4, 4>  mUnk64f13f;
    ::ll::UntypedStorage<4, 4>  mUnk612a6e;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPatternBuilder& operator=(BlockPatternBuilder const&);
    BlockPatternBuilder(BlockPatternBuilder const&);
    BlockPatternBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _fitsBlockPatternEntry(int subPattern, int rowIndex, ::BlockPos const& pos, ::Block const& block);

    MCAPI ::BlockPatternBuilder& aisle(int, ...);

    MCAPI ::BlockPatternBuilder& build();

    MCAPI ::BlockPatternBuilder& define(char pattern, ::Block const& block);

    MCAPI ::BlockPatternBuilder&
    define(char pattern, ::std::function<bool(::BlockSource&, ::BlockPos const&, ::Block const&)> tester);

    MCAPI bool isReadyForMatch();

    MCAPI ::BuildMatch match(::BlockPos const& pos);

    MCAPI ::BuildMatch match(::BlockPos const& pos, int subPattern, int rowIndex);

    MCAPI ::BuildMatch match(::BlockPos const& pos, int subPattern, int rowIndex, uchar forward, uchar up);

    MCAPI void replaceBlocks(
        char                                                     subPattern,
        ::BuildMatch                                             buildMatch,
        ::Block const&                                           block,
        ::std::function<void(::Block const&, ::BlockPos const&)> preReplaceCallback
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::BlockPatternBuilder> start(::BlockSource& region);
    // NOLINTEND
};
