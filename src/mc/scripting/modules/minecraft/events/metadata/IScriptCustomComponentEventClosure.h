#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IScriptCustomComponentEventClosure {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool valid() const = 0;

    virtual bool allowsParameters() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
