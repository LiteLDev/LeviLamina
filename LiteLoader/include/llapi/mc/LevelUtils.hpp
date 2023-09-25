/**
 * @file  LevelUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace LevelUtils.
 *
 */
namespace LevelUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?getDay\@LevelUtils\@\@YAHH\@Z
     */
    MCAPI int getDay(int);
    /**
     * @symbol ?getMoonPhase\@LevelUtils\@\@YA?AW4MoonPhases\@\@AEBVILevel\@\@\@Z
     */
    MCAPI enum class MoonPhases getMoonPhase(class ILevel const &);
    /**
     * @symbol ?getTimeOfDay\@LevelUtils\@\@YAHH\@Z
     */
    MCAPI int getTimeOfDay(int);
    /**
     * @symbol ?projectToTimeOfDay\@LevelUtils\@\@YAHHH\@Z
     */
    MCAPI int projectToTimeOfDay(int, int);

};