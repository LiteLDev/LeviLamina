#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace FontLoadingUtils { struct ParsedFontAliasRefData; }
// clang-format on

namespace FontLoadingUtils {

struct ParsedFontAliasData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                             aliasName;
    ::ll::TypedStorage<8, 24, ::std::vector<::FontLoadingUtils::ParsedFontAliasRefData>> refs;
    ::ll::TypedStorage<4, 4, float>                                                      scaleFactorOverride;
    ::ll::TypedStorage<1, 1, bool>                                                       hasScaleFactorOverride;
    // NOLINTEND
};

} // namespace FontLoadingUtils
