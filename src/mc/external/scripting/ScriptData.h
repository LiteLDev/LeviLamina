#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptData {
public:
    // prevent constructor by default
    ScriptData& operator=(ScriptData const&);
    ScriptData(ScriptData const&);
    ScriptData();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptData@Scripting@@QEAA@XZ
    MCAPI ~ScriptData();

    // NOLINTEND
};

}; // namespace Scripting
