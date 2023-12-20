#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"

namespace ScriptCommandUtils {
// NOLINTBEGIN
// symbol: ?CommandResultShouldThrow@ScriptCommandUtils@@YA_NUMCRESULT@@@Z
MCAPI bool CommandResultShouldThrow(struct MCRESULT);

// symbol:
// ?EngineVersionToCommandVersion@ScriptCommandUtils@@YA?AW4CurrentCmdVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::CurrentCmdVersion EngineVersionToCommandVersion(std::string const&);

// symbol:
// ?EngineVersionToCommandVersionValue@ScriptCommandUtils@@YAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI int EngineVersionToCommandVersionValue(std::string const&);
// NOLINTEND

}; // namespace ScriptCommandUtils
