#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace SplitBlockUtils { struct BlockNameRefAuxVariant; }
// clang-format on

namespace SplitBlockUtils {

struct LegacyBlockInfo {

public:
    // prevent constructor by default
    LegacyBlockInfo& operator=(LegacyBlockInfo const&) = delete;
    LegacyBlockInfo(LegacyBlockInfo const&)            = delete;
    LegacyBlockInfo()                                  = delete;

public:
    /**
     * @symbol
     * ??0LegacyBlockInfo\@SplitBlockUtils\@\@QEAA\@HVHashedString\@\@0V?$vector\@UBlockNameRefAuxVariant\@SplitBlockUtils\@\@V?$allocator\@UBlockNameRefAuxVariant\@SplitBlockUtils\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    LegacyBlockInfo(int, class HashedString, class HashedString, std::vector<struct SplitBlockUtils::BlockNameRefAuxVariant>); // NOLINT
    /**
     * @symbol ??1LegacyBlockInfo\@SplitBlockUtils\@\@QEAA\@XZ
     */
    MCAPI ~LegacyBlockInfo(); // NOLINT
};

}; // namespace SplitBlockUtils
