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
    // symbol: ??0ScriptBlockCustomComponentsFinalizer@@QEAA@AEAVScriptBlockCustomComponentsRegistry@@@Z
    MCAPI explicit ScriptBlockCustomComponentsFinalizer(class ScriptBlockCustomComponentsRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_finalizeBlockWithScriptRegistry@ScriptBlockCustomComponentsFinalizer@@AEAA_NPEBVBlockCustomComponentsComponent@@@Z
    MCAPI bool _finalizeBlockWithScriptRegistry(class BlockCustomComponentsComponent const*);

    // NOLINTEND
};
