#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LevelDataHelper {
/**
 * @symbol ?setCommandsEnabled\@LevelDataHelper\@\@YAXAEAVLevelData\@\@_NPEAVIMinecraftEventing\@\@PEAVPlayer\@\@\@Z
 */
MCAPI void setCommandsEnabled(class LevelData&, bool, class IMinecraftEventing*, class Player*); // NOLINT
/**
 * @symbol ?setDefaultGameType\@LevelDataHelper\@\@YAXAEAVLevelData\@\@W4GameType\@\@PEAVIMinecraftEventing\@\@\@Z
 */
MCAPI void setDefaultGameType(class LevelData&, enum class GameType, class IMinecraftEventing*); // NOLINT
/**
 * @symbol
 * ?setDifficulty\@LevelDataHelper\@\@YAXAEAVLevelData\@\@W4Difficulty\@\@PEAVIMinecraftEventing\@\@PEAVILevel\@\@\@Z
 */
MCAPI void setDifficulty(class LevelData&, enum class Difficulty, class IMinecraftEventing*, class ILevel*); // NOLINT

}; // namespace LevelDataHelper
