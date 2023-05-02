/**
 * @file  ScriptCommandUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ScriptCommandUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?CommandResultShouldThrow\@ScriptCommandUtils\@\@YA_NUMCRESULT\@\@\@Z
     */
    MCAPI bool CommandResultShouldThrow(struct MCRESULT);
    /**
     * @symbol ?EngineVersionToCommandVersionValue\@ScriptCommandUtils\@\@YAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI int EngineVersionToCommandVersionValue(std::string const &);

};