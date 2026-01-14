#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints {
// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> GAMEPLAY_FILE();

MCAPI ::std::add_lvalue_reference_t<char const[]> OUTOFGAME_FILE();

MCAPI ::std::add_lvalue_reference_t<char const[]> RENDER_DISTANCE_WARNING_MODAL_ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints
