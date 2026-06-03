#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::util::internal {

struct StringViewHash : public ::std::hash<::std::string_view> {
public:
    // StringViewHash inner types define
    using is_transparent = void;
};

} // namespace cereal::util::internal
