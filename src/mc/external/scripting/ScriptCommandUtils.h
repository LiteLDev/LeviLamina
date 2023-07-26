#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptCommandUtils {
/**
 * @symbol ?CommandResultShouldThrow\@ScriptCommandUtils\@\@YA_NUMCRESULT\@\@\@Z
 */
MCAPI bool CommandResultShouldThrow(struct MCRESULT); // NOLINT
/**
 * @symbol
 * ?EngineVersionToCommandVersionValue\@ScriptCommandUtils\@\@YAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI int EngineVersionToCommandVersionValue(std::string const&); // NOLINT

}; // namespace ScriptCommandUtils
