#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace QuerySetIdentifier {
// functions
// NOLINTBEGIN
MCAPI ::gsl::span<::HashedString const> getDefaultCollection();

MCAPI ::gsl::span<::HashedString const> getTagsCollection();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> Default();

MCAPI ::std::add_lvalue_reference_t<char const[]> Tags();

MCAPI ::std::add_lvalue_reference_t<char const[]> WorldGen();
// NOLINTEND

} // namespace QuerySetIdentifier
