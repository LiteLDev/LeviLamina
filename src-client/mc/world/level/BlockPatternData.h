#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

struct BlockPatternData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPattern;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            char,
            ::brstd::move_only_function<bool(::BlockSource&, ::BlockPos const&, ::Block const&) const>,
            ::std::less<char>,
            ::std::vector<char>,
            ::std::vector<::brstd::move_only_function<bool(::BlockSource&, ::BlockPos const&, ::Block const&) const>>>>
                                  mLookup;
    ::ll::TypedStorage<4, 4, int> mPatternLength;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockPatternData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
