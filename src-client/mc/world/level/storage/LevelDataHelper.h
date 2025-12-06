#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct ILevel;
struct IMinecraftEventing;
// clang-format on

namespace LevelDataHelper {
// functions
// NOLINTBEGIN
MCAPI void setDifficulty(
    ::LevelData&                      levelData,
    ::SharedTypes::Legacy::Difficulty difficulty,
    ::IMinecraftEventing*             eventing,
    ::ILevel*                         level
);
// NOLINTEND

} // namespace LevelDataHelper
