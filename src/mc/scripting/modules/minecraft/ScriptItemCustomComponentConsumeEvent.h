#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/ScriptItemCustomComponentConnectors.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ComponentItem;
class ItemStack;
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentConsumeEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentConsumeEvent& operator=(ScriptItemCustomComponentConsumeEvent const&);
    ScriptItemCustomComponentConsumeEvent(ScriptItemCustomComponentConsumeEvent const&);
    ScriptItemCustomComponentConsumeEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptItemCustomComponentConsumeEvent(class ItemStack const&, class ItemStack&, class Actor&, class Scripting::WeakLifetimeScope const&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    MCAPI static std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent>)>>
    getClosure(struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&);

    MCAPI static struct ScriptItemCustomComponentConnectors<
        void(class ItemStack const&, class ItemStack&, class Actor&)>
    getConnectors(class ComponentItem&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
