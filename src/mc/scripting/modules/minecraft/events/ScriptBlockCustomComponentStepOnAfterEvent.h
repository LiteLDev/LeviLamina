#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOnAfterEvent {
public:
    // ScriptBlockCustomComponentStepOnAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentStepOnAfterEvent inner types define
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
    ScriptBlockCustomComponentStepOnAfterEvent& operator=(ScriptBlockCustomComponentStepOnAfterEvent const&);
    ScriptBlockCustomComponentStepOnAfterEvent(ScriptBlockCustomComponentStepOnAfterEvent const&);
    ScriptBlockCustomComponentStepOnAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentStepOnAfterEvent(
        struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOnAfterEvent::IntermediateStorage const& eventData,
        class Scripting::WeakLifetimeScope const&                                                            scope
    );

    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOnAfterEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
