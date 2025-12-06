#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/level/BlockPatternData.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class BlockPatternBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::BlockPatternData> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockPatternBuilder& aisle(::std::vector<::std::string> patterns);

    MCAPI ::BlockPatternData buildOrAssert();

    MCAPI ::BlockPatternBuilder& define(
        char                                                                                       pattern,
        ::brstd::move_only_function<bool(::BlockSource&, ::BlockPos const&, ::Block const&) const> tester
    );

    MCAPI ~BlockPatternBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
