#pragma once

#include "mc/_HeaderOutputPredefine.h"
class Block;

class CommandBlockNameResult {
public:
    // CommandBlockNameResult inner types define
    enum class Result : uchar {
        Unknown       = 0x0,
        Success       = 0x1,
        NoBlockName   = 0x2,
        SetDataError  = 0x3,
        SetStateError = 0x4,
    };

public:
    Result                    mResult;
    bool                      mIsComplexAlias;
    Block const*              mBlock;
    std::vector<Block const*> mComplexAliasPostSplitBlocks;

    // prevent constructor by default
    CommandBlockNameResult& operator=(CommandBlockNameResult const&);
    CommandBlockNameResult(CommandBlockNameResult const&);
    CommandBlockNameResult();

public:
    // NOLINTBEGIN
    MCAPI CommandBlockNameResult(class HashedString const& originalName, class Block const* block, bool isComplexAlias);

    MCAPI class Block const* getBlock() const;

    MCAPI ::CommandBlockNameResult::Result getResult() const;

    MCAPI bool isComplexAlias() const;

    MCAPI bool isSameBlock(class Block const& rhs, bool onlyCompareBlockLegacy = false) const;

    MCAPI ~CommandBlockNameResult();

    // NOLINTEND
};
