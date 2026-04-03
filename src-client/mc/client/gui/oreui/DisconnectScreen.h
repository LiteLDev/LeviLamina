#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::DisconnectScreen {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(
    int                  reason,
    ::std::string const& titleMessage,
    ::std::string const& errorMessage,
    ::std::string const& codeword,
    ::std::string const& errorDetails,
    ::std::string const& serverMessage,
    ::std::string const& serverName
);
// NOLINTEND

} // namespace OreUI::EntryPoints::DisconnectScreen
