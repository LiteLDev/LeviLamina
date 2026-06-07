#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SettingsTabIndex.h"

namespace OreUI::EntryPoints::SettingsRoutes {
// functions
// NOLINTBEGIN
MCAPI void forEachSettingsRoute(::std::function<void(::std::string_view, ::SettingsTabIndex)> forEachFunction);

MCAPI ::std::optional<::std::string_view> getKeyFromTabIndex(::SettingsTabIndex settingsTabIndex);

MCAPI ::gsl::span<::std::string const> getOreUiSettingsRoutes();

MCAPI bool isMatchingRoute(::std::string const& route, ::std::optional<::SettingsTabIndex> indexToMatch);

MCAPI bool isUsingOreUi(::SettingsTabIndex settingsTabIndex);
// NOLINTEND

} // namespace OreUI::EntryPoints::SettingsRoutes
