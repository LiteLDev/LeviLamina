/**
 * @file  ScriptUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptUtils.
 *
 */
namespace ScriptUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?functionError\@ScriptUtils\@\@YA?AUError\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::Error functionError(std::string const &);
    /**
     * @symbol  ?getPropertyError\@ScriptUtils\@\@YA?AUError\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::Error getPropertyError(std::string const &);
    /**
     * @symbol  ?setPropertyError\@ScriptUtils\@\@YA?AUError\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::Error setPropertyError(std::string const &);

};