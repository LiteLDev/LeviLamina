#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/level/GameType.h"

namespace PropertiesSettingsUtils {
// functions
// NOLINTBEGIN
MCNAPI bool parseBoolValue(::std::string const& value);

MCNAPI ::PlayerPermissionLevel parseDefaultPlayerPermissionLevel(::std::string const& value);

MCNAPI ::SharedTypes::Legacy::Difficulty parseDifficulty(::std::string const& value);

MCNAPI ::GameType parseGameType(::std::string const& value);

MCNAPI int parseInt32Value(::std::string const& value);

MCNAPI ::std::optional<ushort> parsePort(::std::string_view toParse);
// NOLINTEND

} // namespace PropertiesSettingsUtils
