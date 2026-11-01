#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::AchievementDetails {
// functions
// NOLINTBEGIN
MCNAPI ::std::string composeRoute(::std::string const& achievementId);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::AchievementDetails
