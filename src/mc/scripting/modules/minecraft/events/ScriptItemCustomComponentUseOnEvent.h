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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
