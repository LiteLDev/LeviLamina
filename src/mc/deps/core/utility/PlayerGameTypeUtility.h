#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerGameTypeUtility {
// NOLINTBEGIN
/**
 * @symbol ?isAdventure\@PlayerGameTypeUtility\@\@YA_NW4GameType\@\@0\@Z
 */
MCAPI bool isAdventure(enum class GameType, enum class GameType);
/**
 * @symbol ?isCreative\@PlayerGameTypeUtility\@\@YA_NW4GameType\@\@0\@Z
 */
MCAPI bool isCreative(enum class GameType, enum class GameType);
/**
 * @symbol ?isSpectator\@PlayerGameTypeUtility\@\@YA_NW4GameType\@\@0\@Z
 */
MCAPI bool isSpectator(enum class GameType, enum class GameType);
/**
 * @symbol ?isSurvival\@PlayerGameTypeUtility\@\@YA_NW4GameType\@\@0\@Z
 */
MCAPI bool isSurvival(enum class GameType, enum class GameType);
/**
 * @symbol ?isWorldBuilderBedrock\@PlayerGameTypeUtility\@\@YA_NAEBUAbilitiesComponent\@\@W4GameType\@\@1\@Z
 */
MCAPI bool isWorldBuilderBedrock(struct AbilitiesComponent const&, enum class GameType, enum class GameType);
// NOLINTEND

}; // namespace PlayerGameTypeUtility
