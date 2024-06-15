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
    // symbol: ??0ScriptItemCustomComponentMineBlockEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemCustomComponentMineBlockEvent(struct ScriptModuleMinecraft::
                                                      ScriptItemCustomComponentMineBlockEvent const&);

    // symbol:
    // ??0ScriptItemCustomComponentMineBlockEvent@ScriptModuleMinecraft@@QEAA@AEA_NAEAVItemStack@@AEBVBlock@@HHHAEAVActor@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptItemCustomComponentMineBlockEvent(bool&, class ItemStack&, class Block const&, int, int, int, class Actor&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptItemCustomComponentMineBlockEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent&&);

    // symbol: ?bind@ScriptItemCustomComponentMineBlockEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
