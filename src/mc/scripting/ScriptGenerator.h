#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptGenerator {
public:
    // prevent constructor by default
    ScriptGenerator& operator=(ScriptGenerator const&);
    ScriptGenerator();

public:
    // NOLINTBEGIN
    MCAPI ScriptGenerator(class ScriptGenerator&&);

    MCAPI ScriptGenerator(class ScriptGenerator const&);

    MCAPI ~ScriptGenerator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class ScriptGenerator const&);

    MCAPI void* ctor$(class ScriptGenerator&&);

    MCAPI void dtor$();

    // NOLINTEND
};
