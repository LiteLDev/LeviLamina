#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptGenerator {
public:
    // prevent constructor by default
    ScriptGenerator& operator=(ScriptGenerator const&);
    ScriptGenerator();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptGenerator@@QEAA@$$QEAV0@@Z
    MCAPI ScriptGenerator(class ScriptGenerator&&);

    // symbol: ??0ScriptGenerator@@QEAA@AEBV0@@Z
    MCAPI ScriptGenerator(class ScriptGenerator const&);

    // symbol: ??1ScriptGenerator@@QEAA@XZ
    MCAPI ~ScriptGenerator();

    // NOLINTEND
};
