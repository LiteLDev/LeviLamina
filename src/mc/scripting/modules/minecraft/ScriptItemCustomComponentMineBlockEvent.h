#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemStack;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentMineBlockEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentMineBlockEvent& operator=(ScriptItemCustomComponentMineBlockEvent const&);
    ScriptItemCustomComponentMineBlockEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentMineBlockEvent(struct ScriptModuleMinecraft::
                                                      ScriptItemCustomComponentMineBlockEvent const&);

    MCAPI
    ScriptItemCustomComponentMineBlockEvent(bool&, class ItemStack&, class Block const&, int, int, int, class Actor&, class Scripting::WeakLifetimeScope const&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
