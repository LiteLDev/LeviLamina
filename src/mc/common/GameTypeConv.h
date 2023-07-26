#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameTypeConv {
/**
 * @symbol
 * ?gameTypeToNonLocString\@GameTypeConv\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GameType\@\@\@Z
 */
MCAPI std::string gameTypeToNonLocString(enum class GameType); // NOLINT
/**
 * @symbol
 * ?gameTypeToString\@GameTypeConv\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GameType\@\@\@Z
 */
MCAPI std::string gameTypeToString(enum class GameType); // NOLINT
/**
 * @symbol ?intToGameType\@GameTypeConv\@\@YA?AW4GameType\@\@H\@Z
 */
MCAPI enum class GameType intToGameType(int); // NOLINT
/**
 * @symbol ?intToGameTypeForCommands\@GameTypeConv\@\@YA?AW4GameType\@\@H\@Z
 */
MCAPI enum class GameType intToGameTypeForCommands(int); // NOLINT
/**
 * @symbol
 * ?stringToGameType\@GameTypeConv\@\@YA?AW4GameType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI enum class GameType stringToGameType(std::string const&); // NOLINT

}; // namespace GameTypeConv
