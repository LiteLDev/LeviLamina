#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::util::internal {

struct StringViewHash : public ::std::hash<::std::string_view> {};

} // namespace cereal::util::internal
