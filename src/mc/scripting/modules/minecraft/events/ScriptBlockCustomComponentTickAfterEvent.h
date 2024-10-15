#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentTickAfterEvent {
public:
    // ScriptBlockCustomComponentTickAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentTickAfterEvent inner types define
    struct IntermediateStorage {
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentTickAfterEvent& operator=(ScriptBlockCustomComponentTickAfterEvent const&);
    ScriptBlockCustomComponentTickAfterEvent(ScriptBlockCustomComponentTickAfterEvent const&);
    ScriptBlockCustomComponentTickAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentTickAfterEvent(
        struct ScriptModuleMinecraft::ScriptBlockCustomComponentTickAfterEvent::IntermediateStorage const& eventData,
        class Scripting::WeakLifetimeScope const&                                                          scope
    );

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        struct ScriptModuleMinecraft::ScriptBlockCustomComponentTickAfterEvent::IntermediateStorage const& eventData,
        class Scripting::WeakLifetimeScope const&                                                          scope
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
