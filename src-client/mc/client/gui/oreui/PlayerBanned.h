#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct UserBanDetails; }
// clang-format on

namespace OreUI::EntryPoints::PlayerBanned {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(::Social::UserBanDetails const& ban);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::PlayerBanned
