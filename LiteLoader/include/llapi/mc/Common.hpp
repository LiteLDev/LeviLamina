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
struct BuildInfo {};

#undef AFTER_EXTRA
    /**
     * @symbol ?getBuildInfo\@Common\@\@YA?AUBuildInfo\@1\@XZ
     */
    MCAPI struct Common::BuildInfo getBuildInfo();
    /**
     * @symbol ?getGameDevVersionString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getGameDevVersionString();
    /**
     * @symbol ?getGameSemVerString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getGameSemVerString();
    /**
     * @symbol ?getGameVersionString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getGameVersionString();
    /**
     * @symbol ?getGameVersionStringNet\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getGameVersionStringNet();
    /**
     * @symbol ?getServerVersionString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getServerVersionString();

};