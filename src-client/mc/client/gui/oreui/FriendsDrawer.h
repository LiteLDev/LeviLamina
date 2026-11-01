#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class RouterLocation; }
// clang-format on

namespace OreUI::EntryPoints::FriendsDrawer {
// functions
// NOLINTBEGIN
MCNAPI ::std::string composeRouteForTab(::std::string const& tab);

MCNAPI bool routeHasSocialDrawer(::OreUI::RouterLocation const& route);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();

MCNAPI ::std::add_lvalue_reference_t<char const[]> SOCIAL_DRAWER_TAB_QUERY();
// NOLINTEND

} // namespace OreUI::EntryPoints::FriendsDrawer
