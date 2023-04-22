/**
 * @file  LevelDataHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace LevelDataHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?setCommandsEnabled\@LevelDataHelper\@\@YAXAEAVLevelData\@\@_NPEAVIMinecraftEventing\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void setCommandsEnabled(class LevelData &, bool, class IMinecraftEventing *, class Player *);
    /**
     * @symbol ?setDefaultGameType\@LevelDataHelper\@\@YAXAEAVLevelData\@\@W4GameType\@\@PEAVIMinecraftEventing\@\@\@Z
     */
    MCAPI void setDefaultGameType(class LevelData &, enum class GameType, class IMinecraftEventing *);
    /**
     * @symbol ?setDifficulty\@LevelDataHelper\@\@YAXAEAVLevelData\@\@W4Difficulty\@\@PEAVIMinecraftEventing\@\@PEAVILevel\@\@\@Z
     */
    MCAPI void setDifficulty(class LevelData &, enum class Difficulty, class IMinecraftEventing *, class ILevel *);

};