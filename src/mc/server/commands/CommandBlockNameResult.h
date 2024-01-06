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
    // symbol: ??0CommandBlockNameResult@@QEAA@AEBVHashedString@@PEBVBlock@@_N@Z
    MCAPI CommandBlockNameResult(class HashedString const& originalName, class Block const* block, bool);

    // symbol: ?getBlock@CommandBlockNameResult@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* getBlock() const;

    // symbol: ?getResult@CommandBlockNameResult@@QEBA?AW4Result@1@XZ
    MCAPI ::CommandBlockNameResult::Result getResult() const;

    // symbol: ?isComplexAlias@CommandBlockNameResult@@QEBA_NXZ
    MCAPI bool isComplexAlias() const;

    // symbol: ?isSameBlock@CommandBlockNameResult@@QEBA_NAEBVBlock@@_N@Z
    MCAPI bool isSameBlock(class Block const& block, bool compareBlockLegacyPtr = true) const;

    // symbol: ??1CommandBlockNameResult@@QEAA@XZ
    MCAPI ~CommandBlockNameResult();

    // NOLINTEND
};
