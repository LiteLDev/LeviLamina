#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IScriptCustomComponentEventClosure {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool valid() const = 0;

    // vIndex: 1
    virtual bool allowsParameters() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
