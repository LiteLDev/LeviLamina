#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptResourceStats {
public:
    // prevent constructor by default
    ScriptResourceStats& operator=(ScriptResourceStats const&);
    ScriptResourceStats(ScriptResourceStats const&);
    ScriptResourceStats();

public:
    // NOLINTBEGIN
    // symbol: ?serialize@ScriptResourceStats@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string serialize() const;

    // symbol: ??1ScriptResourceStats@@QEAA@XZ
    MCAPI ~ScriptResourceStats();

    // symbol: ?bindType@ScriptResourceStats@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND
};
