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
    MCAPI void incRefToReturnToJS();

    MCAPI class Scripting::QuickJS::ScriptObjRef& operator=(class Scripting::QuickJS::ScriptObjRef&& other);

    MCAPI void pin();

    MCAPI void unpin();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
