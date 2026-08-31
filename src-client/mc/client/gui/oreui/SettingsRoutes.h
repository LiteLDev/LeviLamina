#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/options/oreui/NewOreUIScreenOverride.h"

namespace OreUI::EntryPoints::SettingsRoutes {
// functions
// NOLINTBEGIN
MCAPI ::gsl::span<::std::string const> getOreUiSettingsRoutes();

MCAPI bool isMatchingRoute(::std::string const& route, ::std::optional<::SettingsTabIndex> indexToMatch);

MCAPI bool isUsingOreUi(::SettingsTabIndex settingsTabIndex, ::OreUI::NewOreUIScreenOverride screenOverride);
// NOLINTEND

} // namespace OreUI::EntryPoints::SettingsRoutes
