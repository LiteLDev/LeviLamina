#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentEntityFallOnAfterEvent {
public:
    // ScriptBlockCustomComponentEntityFallOnAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentEntityFallOnAfterEvent inner types define
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
    ScriptBlockCustomComponentEntityFallOnAfterEvent&
    operator=(ScriptBlockCustomComponentEntityFallOnAfterEvent const&);
    ScriptBlockCustomComponentEntityFallOnAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentEntityFallOnAfterEvent(struct ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentEntityFallOnAfterEvent const&);

    MCAPI
    ScriptBlockCustomComponentEntityFallOnAfterEvent(struct ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEvent::IntermediateStorage const&, class Scripting::WeakLifetimeScope const&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
