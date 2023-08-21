#pragma once

#include "mc/_HeaderOutputPredefine.h"
class Block;

class CommandBlockNameResult {
public:
    // CommandBlockNameResult inner types define
    enum class Result : uint8_t {
        Unknown       = 0x0,
        Succeess      = 0x1,
        NoBlockName   = 0x2,
        SetDataError  = 0x3,
        SetStateError = 0x4,
    };

public:
    enum class Result         mResult;
    bool                      mIsComplexAlias;
    Block const*              mBlock;
    std::vector<Block const*> mComplexAliasPostSplitBlocks;

    // prevent constructor by default
    CommandBlockNameResult& operator=(CommandBlockNameResult const&) = delete;
    CommandBlockNameResult(CommandBlockNameResult const&)            = delete;
    CommandBlockNameResult()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandBlockNameResult\@\@QEAA\@AEBVHashedString\@\@PEBVBlock\@\@_N\@Z
     */
    MCAPI CommandBlockNameResult(class HashedString const&, class Block const*, bool);
    /**
     * @symbol ?getBlock\@CommandBlockNameResult\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* getBlock() const;
    /**
     * @symbol ?getResult\@CommandBlockNameResult\@\@QEBA?AW4Result\@1\@XZ
     */
    MCAPI enum class CommandBlockNameResult::Result getResult() const;
    /**
     * @symbol ?isComplexAlias\@CommandBlockNameResult\@\@QEBA_NXZ
     */
    MCAPI bool isComplexAlias() const;
    /**
     * @symbol ?isSameBlock\@CommandBlockNameResult\@\@QEBA_NAEBVBlock\@\@_N\@Z
     */
    MCAPI bool isSameBlock(class Block const& block, bool compareBlockLegacyPtr = true) const;
    /**
     * @symbol ??1CommandBlockNameResult\@\@QEAA\@XZ
     */
    MCAPI ~CommandBlockNameResult();
    // NOLINTEND
};
