#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct BlockPatternData;
// clang-format on

class BlockPatternBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkd5a757;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPatternBuilder& operator=(BlockPatternBuilder const&);
    BlockPatternBuilder(BlockPatternBuilder const&);
    BlockPatternBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockPatternBuilder& aisle(::std::vector<::std::string> patterns);

    MCNAPI ::BlockPatternData buildOrAssert();

    MCNAPI ::BlockPatternBuilder& define(char pattern, ::brstd::move_only_function<bool(::BlockSource&, ::BlockPos const&, ::Block const&)const> tester);

    MCNAPI ~BlockPatternBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
