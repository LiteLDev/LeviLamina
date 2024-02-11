#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDiagnostics {
public:
    // prevent constructor by default
    ScriptDiagnostics& operator=(ScriptDiagnostics const&);
    ScriptDiagnostics(ScriptDiagnostics const&);
    ScriptDiagnostics();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addStatCollector@ScriptDiagnostics@@QEAAXV?$function@$$A6A?AV?$vector@UScriptStat@@V?$allocator@UScriptStat@@@std@@@std@@XZ@std@@@Z
    MCAPI void addStatCollector(std::function<std::vector<struct ScriptStat>()>);

    // NOLINTEND
};
