#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class ScriptObjRef {
public:
    // prevent constructor by default
    ScriptObjRef& operator=(ScriptObjRef const&);
    ScriptObjRef(ScriptObjRef const&);
    ScriptObjRef();

public:
    // NOLINTBEGIN
    // symbol: ?freeScriptReference@ScriptObjRef@QuickJS@Scripting@@QEAAXXZ
    MCAPI void freeScriptReference();

    // symbol: ?holdScriptReference@ScriptObjRef@QuickJS@Scripting@@QEAAXXZ
    MCAPI void holdScriptReference();

    // symbol: ?incRefToReturnToJS@ScriptObjRef@QuickJS@Scripting@@QEAAXXZ
    MCAPI void incRefToReturnToJS();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
