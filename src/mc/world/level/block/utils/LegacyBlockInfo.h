#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SplitBlockUtils { struct BlockNameRefAuxVariant; }
// clang-format on

namespace SplitBlockUtils {

struct LegacyBlockInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPLITBLOCKUTILS_LEGACYBLOCKINFO
public:
    LegacyBlockInfo& operator=(LegacyBlockInfo const&) = delete;
    LegacyBlockInfo(LegacyBlockInfo const&)            = delete;
    LegacyBlockInfo()                                  = delete;
#endif

public:
    /**
     * @symbol
     * ??0LegacyBlockInfo\@SplitBlockUtils\@\@QEAA\@HVHashedString\@\@0V?$vector\@UBlockNameRefAuxVariant\@SplitBlockUtils\@\@V?$allocator\@UBlockNameRefAuxVariant\@SplitBlockUtils\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    LegacyBlockInfo(int, class HashedString, class HashedString, std::vector<struct SplitBlockUtils::BlockNameRefAuxVariant>);
    /**
     * @symbol ??1LegacyBlockInfo\@SplitBlockUtils\@\@QEAA\@XZ
     */
    MCAPI ~LegacyBlockInfo();
};

}; // namespace SplitBlockUtils
