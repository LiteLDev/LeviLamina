/**
 * @file  ScriptUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol ?functionError\@ScriptUtils\@\@YA?AUError\@Scripting\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::Error functionError(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ?getPropertyError\@ScriptUtils\@\@YA?AUError\@Scripting\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::Error getPropertyError(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ?setPropertyError\@ScriptUtils\@\@YA?AUError\@Scripting\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::Error setPropertyError(class std::basic_string_view<char, struct std::char_traits<char>>);

};