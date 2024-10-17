#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseOnEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentUseOnEvent& operator=(ScriptItemCustomComponentUseOnEvent const&);
    ScriptItemCustomComponentUseOnEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentUseOnEvent(struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
