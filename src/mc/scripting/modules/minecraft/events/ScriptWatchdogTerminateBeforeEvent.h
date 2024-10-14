#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
struct BeforeWatchdogTerminateEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWatchdogTerminateBeforeEvent {
public:
    // prevent constructor by default
    ScriptWatchdogTerminateBeforeEvent& operator=(ScriptWatchdogTerminateBeforeEvent const&);
    ScriptWatchdogTerminateBeforeEvent(ScriptWatchdogTerminateBeforeEvent const&);
    ScriptWatchdogTerminateBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptWatchdogTerminateBeforeEvent(struct BeforeWatchdogTerminateEvent const& beforeWatchdogTerminateEvent, class Scripting::WeakLifetimeScope const&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>
    bind();

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
