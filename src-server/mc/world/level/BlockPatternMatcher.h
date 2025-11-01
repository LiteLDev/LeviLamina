#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
struct BuildMatch;
// clang-format on

class BlockPatternMatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdeb64e;
    ::ll::UntypedStorage<8, 8> mUnkde5e37;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPatternMatcher& operator=(BlockPatternMatcher const&);
    BlockPatternMatcher(BlockPatternMatcher const&);
    BlockPatternMatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BuildMatch match(::BlockPos const& pos) const;

    MCNAPI ::BuildMatch match(::BlockPos const& pos, int subPattern, int rowIndex, uchar forward, uchar up) const;

    MCNAPI void replaceBlocks(char subPattern, ::BuildMatch const& buildMatch, ::Block const& block, ::brstd::function_ref<void(::Block const&, ::BlockPos const&)> preReplaceCallback) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void noopCallback(::Block const&, ::BlockPos const&);
    // NOLINTEND

};
