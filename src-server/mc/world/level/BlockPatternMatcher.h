#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct BlockPatternData;
struct BuildMatch;
// clang-format on

class BlockPatternMatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&>            mRegion;
    ::ll::TypedStorage<8, 8, ::BlockPatternData const&> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPatternMatcher& operator=(BlockPatternMatcher const&);
    BlockPatternMatcher(BlockPatternMatcher const&);
    BlockPatternMatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BuildMatch match(::BlockPos const& pos) const;

    MCAPI ::BuildMatch match(::BlockPos const& pos, int subPattern, int rowIndex, uchar forward, uchar up) const;

    MCAPI void replaceBlocks(
        char                                                           subPattern,
        ::BuildMatch const&                                            buildMatch,
        ::Block const&                                                 block,
        ::brstd::function_ref<void(::Block const&, ::BlockPos const&)> preReplaceCallback
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static void noopCallback(::Block const&, ::BlockPos const&);
    // NOLINTEND
};
