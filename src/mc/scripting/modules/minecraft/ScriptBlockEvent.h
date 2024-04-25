#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockEvent {
public:
    // prevent constructor by default
    ScriptBlockEvent(ScriptBlockEvent const&);
    ScriptBlockEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptBlockEvent@ScriptModuleMinecraft@@QEAA@AEAVDimension@@AEBVBlockPos@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptBlockEvent(
        class Dimension&                          dimension,
        class BlockPos const&                     location,
        class Scripting::WeakLifetimeScope const& scope
    );

    // symbol: ??4ScriptBlockEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockEvent& operator=(struct ScriptModuleMinecraft::ScriptBlockEvent&&);

    // symbol: ??4ScriptBlockEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockEvent const&);

    // symbol: ??1ScriptBlockEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockEvent();

    // symbol:
    // ?bind@ScriptBlockEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptBlockEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
