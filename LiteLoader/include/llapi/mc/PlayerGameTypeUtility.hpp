/**
 * @file  PlayerGameTypeUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PlayerGameTypeUtility.
 *
 */
namespace PlayerGameTypeUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
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
    MCAPI bool isWorldBuilderBedrock(struct AbilitiesComponent const &, enum class GameType, enum class GameType);

};