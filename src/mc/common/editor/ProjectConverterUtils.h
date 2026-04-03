#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class LevelStorage;
class Player;
// clang-format on

namespace Editor::ProjectConverterUtils {
// functions
// NOLINTBEGIN
MCNAPI void backupPlayerData(::ILevel* level, ::Player const* player);

MCNAPI bool backupPlayerDataToLevel(::LevelStorage& levelStorage, ::std::string_view fromKey, ::std::string_view toKey);
// NOLINTEND

} // namespace Editor::ProjectConverterUtils
