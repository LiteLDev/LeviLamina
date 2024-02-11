#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptPackPermissions {
public:
    // prevent constructor by default
    ScriptPackPermissions& operator=(ScriptPackPermissions const&);
    ScriptPackPermissions(ScriptPackPermissions const&);
    ScriptPackPermissions();

private:
    // NOLINTBEGIN
    // symbol:
    // ?sWildCardModuleName@ScriptPackPermissions@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sWildCardModuleName;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $sWildCardModuleName() { return sWildCardModuleName; }

    // NOLINTEND
};
