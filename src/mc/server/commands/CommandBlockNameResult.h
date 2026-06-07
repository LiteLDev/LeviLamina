#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
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
    // prevent constructor by default
    CommandBlockNameResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockNameResult(::HashedString const& originalName, ::Block const* block, bool isComplexAlias);

    MCFOLD ::Block const* getBlock() const;

    MCFOLD ::CommandBlockNameResult::Result getResult() const;

    MCFOLD bool isComplexAlias() const;

    MCAPI bool isSameBlock(::Block const& rhs, bool onlyCompareBlockType, bool compareWithComplexAlias) const;

    MCAPI ~CommandBlockNameResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& originalName, ::Block const* block, bool isComplexAlias);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
