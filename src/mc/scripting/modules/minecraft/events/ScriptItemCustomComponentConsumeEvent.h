#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/Closure.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentConnectors.h"

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
    MCAPI ScriptItemCustomComponentConsumeEvent(
        class ItemStack const& initialInstance,
        class ItemStack&,
        class Actor&                              actor,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    MCAPI static std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent>)>>
    getClosure(struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const& closures);

    MCAPI static struct ScriptItemCustomComponentConnectors<
        void(class ItemStack const&, class ItemStack&, class Actor&)>
    getConnectors(class ComponentItem& item);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
