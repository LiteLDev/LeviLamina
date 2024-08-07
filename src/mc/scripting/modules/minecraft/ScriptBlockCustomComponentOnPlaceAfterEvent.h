#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentOnPlaceAfterEvent {
public:
    // ScriptBlockCustomComponentOnPlaceAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentOnPlaceAfterEvent inner types define
    struct IntermediateStorage {
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentOnPlaceAfterEvent& operator=(ScriptBlockCustomComponentOnPlaceAfterEvent const&);
    ScriptBlockCustomComponentOnPlaceAfterEvent(ScriptBlockCustomComponentOnPlaceAfterEvent const&);
    ScriptBlockCustomComponentOnPlaceAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptBlockCustomComponentOnPlaceAfterEvent(struct ScriptModuleMinecraft::ScriptBlockCustomComponentOnPlaceAfterEvent::IntermediateStorage const&, class Scripting::WeakLifetimeScope const&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
