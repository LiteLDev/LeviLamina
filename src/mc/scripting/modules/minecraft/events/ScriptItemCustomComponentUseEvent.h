#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentUseEvent& operator=(ScriptItemCustomComponentUseEvent const&);
    ScriptItemCustomComponentUseEvent(ScriptItemCustomComponentUseEvent const&);
    ScriptItemCustomComponentUseEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
