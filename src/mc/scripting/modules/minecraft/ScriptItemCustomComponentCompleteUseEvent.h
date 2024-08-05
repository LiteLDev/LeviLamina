#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/ScriptItemCustomComponentConnectors.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class ItemStack;
class Level;
class Player;
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentCompleteUseEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentCompleteUseEvent& operator=(ScriptItemCustomComponentCompleteUseEvent const&);
    ScriptItemCustomComponentCompleteUseEvent(ScriptItemCustomComponentCompleteUseEvent const&);
    ScriptItemCustomComponentCompleteUseEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptItemCustomComponentCompleteUseEvent(::ItemUseMethod&, class ItemStack const&, class ItemStack&, class Player&, class Level&, class Scripting::WeakLifetimeScope const&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentCompleteUseEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentCompleteUseEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    MCAPI static std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentCompleteUseEvent>)>>
    getClosure(struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&);

    MCAPI static struct ScriptItemCustomComponentConnectors<
        void(::ItemUseMethod&, class ItemStack const&, class ItemStack&, class Player&, class Level&)>
    getConnectors(class ComponentItem&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
