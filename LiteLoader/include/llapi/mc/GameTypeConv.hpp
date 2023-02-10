/**
 * @file  GameTypeConv.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -93014230
     * @symbol  ?gameTypeToNonLocString\@GameTypeConv\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GameType\@\@\@Z
     */
    MCAPI std::string gameTypeToNonLocString(enum class GameType);
    /**
     * @hash   -1135352982
     * @symbol  ?gameTypeToString\@GameTypeConv\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GameType\@\@\@Z
     */
    MCAPI std::string gameTypeToString(enum class GameType);
    /**
     * @hash   -1605830462
     * @symbol  ?intToGameType\@GameTypeConv\@\@YA?AW4GameType\@\@H\@Z
     */
    MCAPI enum class GameType intToGameType(int);
    /**
     * @hash   -1659225142
     * @symbol  ?intToGameTypeForCommands\@GameTypeConv\@\@YA?AW4GameType\@\@H\@Z
     */
    MCAPI enum class GameType intToGameTypeForCommands(int);
    /**
     * @hash   128987462
     * @symbol  ?stringToGameType\@GameTypeConv\@\@YA?AW4GameType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class GameType stringToGameType(std::string const &);

};