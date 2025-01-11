#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class CommandBlockNameResult {
public:
    // CommandBlockNameResult inner types define
    enum class Result : uchar {
        Unknown       = 0,
        Succeess      = 1,
        NoBlockName   = 2,
        SetDataError  = 3,
        SetStateError = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CommandBlockNameResult::Result> mResult;
    ::ll::TypedStorage<1, 1, bool>                             mIsComplexAlias;
    ::ll::TypedStorage<8, 8, ::Block const*>                   mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>   mComplexAliasPostSplitBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Block const* getBlock() const;

    MCFOLD ::CommandBlockNameResult::Result getResult() const;

    MCFOLD bool isComplexAlias() const;

    MCAPI bool isSameBlock(::Block const& rhs, bool onlyCompareBlockLegacy) const;

    MCAPI ~CommandBlockNameResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
