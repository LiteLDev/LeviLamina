#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptBlockCustomComponentsFinalizer {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentsFinalizer& operator=(ScriptBlockCustomComponentsFinalizer const&);
    ScriptBlockCustomComponentsFinalizer(ScriptBlockCustomComponentsFinalizer const&);
    ScriptBlockCustomComponentsFinalizer();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptBlockCustomComponentsFinalizer(class ScriptBlockCustomComponentsRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _finalizeBlockWithScriptRegistry(class BlockCustomComponentsComponent const* comp);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class ScriptBlockCustomComponentsRegistry& registry);

    // NOLINTEND
};
