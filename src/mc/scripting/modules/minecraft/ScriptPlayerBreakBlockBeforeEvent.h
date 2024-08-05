#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class ItemStackBase;
class Player;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerBreakBlockBeforeEvent& operator=(ScriptPlayerBreakBlockBeforeEvent const&);
    ScriptPlayerBreakBlockBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptPlayerBreakBlockBeforeEvent(struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent&&);

    MCAPI ScriptPlayerBreakBlockBeforeEvent(struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);

    MCAPI
    ScriptPlayerBreakBlockBeforeEvent(class Player const&, class Dimension&, class BlockPos const&, class ItemStackBase const&, class Scripting::WeakLifetimeScope const&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
