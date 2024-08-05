#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseEvent {
public:
    // prevent constructor by default
    ScriptItemCompleteUseEvent(ScriptItemCompleteUseEvent const&);
    ScriptItemCompleteUseEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptItemCompleteUseEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, class Player const&, class Scripting::WeakLifetimeScope const&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent const&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
