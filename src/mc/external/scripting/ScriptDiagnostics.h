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
    MCAPI void addStatCollector(std::function<std::vector<struct ScriptStat>()>);

    // NOLINTEND
};
