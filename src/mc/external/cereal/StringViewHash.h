#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::util::internal {

struct StringViewHash : public ::std::hash<::std::string_view> {
public:
    // prevent constructor by default
    StringViewHash& operator=(StringViewHash const&);
    StringViewHash(StringViewHash const&);
    StringViewHash();
};

} // namespace cereal::util::internal
