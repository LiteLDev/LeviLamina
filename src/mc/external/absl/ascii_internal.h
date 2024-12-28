#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl::ascii_internal {
// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<uchar const[]> kPropertyBits();

MCAPI ::std::add_lvalue_reference_t<char const[]> kToLower();

MCAPI ::std::add_lvalue_reference_t<char const[]> kToUpper();
// NOLINTEND

} // namespace absl::ascii_internal
