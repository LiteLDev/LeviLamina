#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PatternUtil { struct PatternLayer; }
// clang-format on

namespace PatternUtil {

struct PatternData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PatternUtil::PatternLayer>> mPatterns;
    ::ll::TypedStorage<1, 1, uchar>                                       mBaseColor;
    // NOLINTEND
};

} // namespace PatternUtil
