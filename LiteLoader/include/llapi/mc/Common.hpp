/**
 * @file  Common.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace Common.
 *
 */
namespace Common {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -540976911
     * @symbol  ?getGameDevVersionString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getGameDevVersionString();
    /**
     * @hash   960909243
     * @symbol  ?getGameSemVerString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getGameSemVerString();
    /**
     * @hash   790865289
     * @symbol  ?getGameVersionString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getGameVersionString();
    /**
     * @hash   -629688927
     * @symbol  ?getGameVersionStringNet\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getGameVersionStringNet();
    /**
     * @hash   1588369943
     * @symbol  ?getServerVersionString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getServerVersionString();

};