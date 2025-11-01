#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace QuerySetIdentifier {
// functions
// NOLINTBEGIN
MCNAPI ::gsl::span<::HashedString const> getDefaultCollection();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> Default();

MCNAPI ::std::add_lvalue_reference_t<char const[]> Tags();

MCNAPI ::std::add_lvalue_reference_t<char const[]> WorldGen();
// NOLINTEND

}
