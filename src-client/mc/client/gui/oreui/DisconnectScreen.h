#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::DisconnectScreen {
// functions
// NOLINTBEGIN
MCNAPI ::std::string composeRoute(
    int                  reason,
    ::std::string const& titleMessage,
    ::std::string const& errorMessage,
    ::std::string const& codeword,
    ::std::string const& errorDetails,
    ::std::string const& serverMessage,
    ::std::string const& serverName
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::DisconnectScreen
