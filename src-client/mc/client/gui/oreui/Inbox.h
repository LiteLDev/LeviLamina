#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::Inbox {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(::std::string const& tab);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::Inbox
