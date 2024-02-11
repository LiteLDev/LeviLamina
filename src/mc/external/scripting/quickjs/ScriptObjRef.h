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
    // symbol: ?incRefToReturnToJS@ScriptObjRef@QuickJS@Scripting@@QEAAXXZ
    MCAPI void incRefToReturnToJS();

    // symbol: ??4ScriptObjRef@QuickJS@Scripting@@QEAAAEAV012@$$QEAV012@@Z
    MCAPI class Scripting::QuickJS::ScriptObjRef& operator=(class Scripting::QuickJS::ScriptObjRef&& other);

    // symbol: ?pin@ScriptObjRef@QuickJS@Scripting@@QEAAXXZ
    MCAPI void pin();

    // symbol: ?unpin@ScriptObjRef@QuickJS@Scripting@@QEAAXXZ
    MCAPI void unpin();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
