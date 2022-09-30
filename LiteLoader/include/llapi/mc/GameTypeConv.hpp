/**
 * @file  GameTypeConv.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace GameTypeConv.
 *
 */
namespace GameTypeConv {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -873361606
     * @symbol ?gameTypeToNonLocString@GameTypeConv@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GameType@@@Z
     */
    MCAPI std::string gameTypeToNonLocString(enum class GameType);
    /**
     * @hash   -1915700358
     * @symbol ?gameTypeToString@GameTypeConv@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GameType@@@Z
     */
    MCAPI std::string gameTypeToString(enum class GameType);
    /**
     * @hash   1908789458
     * @symbol ?intToGameType@GameTypeConv@@YA?AW4GameType@@H@Z
     */
    MCAPI enum class GameType intToGameType(int);
    /**
     * @hash   -651406042
     * @symbol ?stringToGameType@GameTypeConv@@YA?AW4GameType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI enum class GameType stringToGameType(std::string const &);

};