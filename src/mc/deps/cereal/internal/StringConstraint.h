#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct StringConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::basic_regex<char, ::std::regex_traits<char>>> mRegex;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mRegexStr;
    ::ll::TypedStorage<8, 8, uint64>                                               mMinSize;
    // NOLINTEND
};

} // namespace cereal::internal
