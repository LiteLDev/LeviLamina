#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerDestroyAfterEvent {
public:
    // ScriptBlockCustomComponentPlayerDestroyAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentPlayerDestroyAfterEvent inner types define
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
    ScriptBlockCustomComponentPlayerDestroyAfterEvent&
    operator=(ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);
    ScriptBlockCustomComponentPlayerDestroyAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptBlockCustomComponentPlayerDestroyAfterEvent(struct ScriptModuleMinecraft::
                                                          ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);

    MCAPI ScriptBlockCustomComponentPlayerDestroyAfterEvent(
        struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent::IntermediateStorage const&
                                                  eventData,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
