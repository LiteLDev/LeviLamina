#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FontLoadingUtils {

struct ParsedFontAliasRefData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                        fontReferenceName;
    ::ll::TypedStorage<8, 32, ::std::string>                        languageCode;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<int, int>>> ranges;
    ::ll::TypedStorage<4, 4, float>                                 fontScale;
    // NOLINTEND
};

} // namespace FontLoadingUtils
