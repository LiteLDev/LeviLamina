#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { class WeakLifetimeScope; }
struct ItemUseOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnBeforeEvent {
public:
    // prevent constructor by default
    ScriptItemUseOnBeforeEvent& operator=(ScriptItemUseOnBeforeEvent const&);
    ScriptItemUseOnBeforeEvent(ScriptItemUseOnBeforeEvent const&);
    ScriptItemUseOnBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemUseOnBeforeEvent(struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);

    MCAPI
    ScriptItemUseOnBeforeEvent(struct ItemUseOnEvent const&, class Player const&, class Scripting::WeakLifetimeScope const&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent> bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
