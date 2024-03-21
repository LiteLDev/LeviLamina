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
    // symbol: ??0ScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptPlayerBreakBlockBeforeEvent(struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent&&);

    // symbol: ??0ScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptPlayerBreakBlockBeforeEvent(struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);

    // symbol:
    // ??0ScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBVPlayer@@AEAVDimension@@AEBVBlockPos@@AEBVItemStackBase@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptPlayerBreakBlockBeforeEvent(class Player const&, class Dimension&, class BlockPos const&, class ItemStackBase const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent&&);

    // symbol:
    // ?bind@ScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerBreakBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
