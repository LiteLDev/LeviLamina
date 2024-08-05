#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOffAfterEvent {
public:
    // ScriptBlockCustomComponentStepOffAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentStepOffAfterEvent inner types define
    struct IntermediateStorage {
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // NOLINTBEGIN
        MCAPI ~IntermediateStorage();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentStepOffAfterEvent& operator=(ScriptBlockCustomComponentStepOffAfterEvent const&);
    ScriptBlockCustomComponentStepOffAfterEvent(ScriptBlockCustomComponentStepOffAfterEvent const&);
    ScriptBlockCustomComponentStepOffAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptBlockCustomComponentStepOffAfterEvent(struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEvent::IntermediateStorage const&, class Scripting::WeakLifetimeScope const&);

    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
