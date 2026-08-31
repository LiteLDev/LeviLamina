#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class RouterLocation; }
// clang-format on

namespace OreUI::EntryPoints::FriendsDrawer {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRouteForTab(::std::string const& tab);

MCAPI bool routeHasSocialDrawer(::OreUI::RouterLocation const& route);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();

MCAPI ::std::add_lvalue_reference_t<char const[]> SOCIAL_DRAWER_TAB_QUERY();
// NOLINTEND

} // namespace OreUI::EntryPoints::FriendsDrawer
