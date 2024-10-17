#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerInteractAfterEvent {
public:
    // ScriptBlockCustomComponentPlayerInteractAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentPlayerInteractAfterEvent inner types define
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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerInteractAfterEvent&
    operator=(ScriptBlockCustomComponentPlayerInteractAfterEvent const&);
    ScriptBlockCustomComponentPlayerInteractAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptBlockCustomComponentPlayerInteractAfterEvent(struct ScriptModuleMinecraft::
                                                           ScriptBlockCustomComponentPlayerInteractAfterEvent const&);

    MCAPI ScriptBlockCustomComponentPlayerInteractAfterEvent(
        struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent::IntermediateStorage const&
                                                  eventData,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent const&);

    MCAPI void* ctor$(
        struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent::IntermediateStorage const&
                                                  eventData,
        class Scripting::WeakLifetimeScope const& scope
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
