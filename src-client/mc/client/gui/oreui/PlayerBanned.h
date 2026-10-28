#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct UserBanDetails; }
// clang-format on

namespace OreUI::EntryPoints::PlayerBanned {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(::Social::UserBanDetails const& ban, ::std::string const& banReasonLocKey);
// NOLINTEND

} // namespace OreUI::EntryPoints::PlayerBanned
