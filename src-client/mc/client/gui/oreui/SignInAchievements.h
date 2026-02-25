#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::SignInAchievements {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(::std::string const& redirectTo);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::SignInAchievements
