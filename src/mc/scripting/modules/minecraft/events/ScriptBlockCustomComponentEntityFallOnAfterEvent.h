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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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

    MCAPI ScriptBlockCustomComponentEntityFallOnAfterEvent(
        struct ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEvent::IntermediateStorage const&
                                                  eventData,
        class Scripting::WeakLifetimeScope const& scope
    );

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
