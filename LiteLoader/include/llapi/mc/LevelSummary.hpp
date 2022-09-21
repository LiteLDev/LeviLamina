/**
 * @file  MC/LevelSummary.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelSummary.
 *
 */
class LevelSummary {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSUMMARY
public:
    class LevelSummary& operator=(class LevelSummary const &) = delete;
    LevelSummary(class LevelSummary const &) = delete;
    LevelSummary() = delete;
#endif

public:
    /**
     * @hash   1201176250
     * @symbol ?CUSTOM_ICON_FILENAME@LevelSummary@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<std::string> const CUSTOM_ICON_FILENAME;
    /**
     * @hash   -99582363
     * @symbol ?DEFAULT_WORLD_ICON_FILENAME@LevelSummary@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DEFAULT_WORLD_ICON_FILENAME;
    /**
     * @hash   36183195
     * @symbol ?INVALID_LEVEL_ID@LevelSummary@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const INVALID_LEVEL_ID;
    /**
     * @hash   -894463592
     * @symbol ?WORLD_ICON_FILENAME@LevelSummary@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<std::string> const WORLD_ICON_FILENAME;
    /**
     * @hash   -265465384
     * @symbol ?buildCustomIconPath@LevelSummary@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     */
    MCAPI static class Core::PathBuffer<std::string> buildCustomIconPath(class Core::Path const &);
    /**
     * @hash   849094326
     * @symbol ?buildWorldIconPath@LevelSummary@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     */
    MCAPI static class Core::PathBuffer<std::string> buildWorldIconPath(class Core::Path const &);

};