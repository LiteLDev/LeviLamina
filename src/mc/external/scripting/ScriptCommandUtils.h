#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptCommandUtils {
// NOLINTBEGIN
/**
 * @symbol ?CommandResultShouldThrow\@ScriptCommandUtils\@\@YA_NUMCRESULT\@\@\@Z
 */
MCAPI bool CommandResultShouldThrow(struct MCRESULT);
/**
 * @symbol
 * ?EngineVersionToCommandVersionValue\@ScriptCommandUtils\@\@YAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI int EngineVersionToCommandVersionValue(std::string const&);
// NOLINTEND

}; // namespace ScriptCommandUtils
