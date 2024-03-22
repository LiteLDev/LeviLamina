#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace FlatteningUtils { struct BlockNameRefAuxVariant; }
// clang-format on

namespace FlatteningUtils {

struct LegacyBlockInfo {
public:
    // prevent constructor by default
    LegacyBlockInfo& operator=(LegacyBlockInfo const&);
    LegacyBlockInfo(LegacyBlockInfo const&);
    LegacyBlockInfo();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0LegacyBlockInfo@FlatteningUtils@@QEAA@HVHashedString@@0EV?$vector@UBlockNameRefAuxVariant@FlatteningUtils@@V?$allocator@UBlockNameRefAuxVariant@FlatteningUtils@@@std@@@std@@@Z
    MCAPI
    LegacyBlockInfo(int, class HashedString, class HashedString, uchar, std::vector<struct FlatteningUtils::BlockNameRefAuxVariant>);

    // symbol: ??1LegacyBlockInfo@FlatteningUtils@@QEAA@XZ
    MCAPI ~LegacyBlockInfo();

    // NOLINTEND
};

}; // namespace FlatteningUtils
