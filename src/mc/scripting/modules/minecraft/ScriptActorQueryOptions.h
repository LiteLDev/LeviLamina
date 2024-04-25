#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockAreaSize; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorQueryOptions {
public:
    // prevent constructor by default
    ScriptActorQueryOptions();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptActorQueryOptions@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptActorQueryOptions(struct ScriptModuleMinecraft::ScriptActorQueryOptions&&);

    // symbol: ??0ScriptActorQueryOptions@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptActorQueryOptions(struct ScriptModuleMinecraft::ScriptActorQueryOptions const&);

    // symbol: ??4ScriptActorQueryOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptActorQueryOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorQueryOptions&&);

    // symbol: ??4ScriptActorQueryOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptActorQueryOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorQueryOptions const&);

    // symbol:
    // ?setVolumeV010@ScriptActorQueryOptions@ScriptModuleMinecraft@@QEAAXAEBV?$optional@VScriptBlockAreaSize@ScriptModuleMinecraft@@@std@@@Z
    MCAPI void setVolumeV010(std::optional<class ScriptModuleMinecraft::ScriptBlockAreaSize> const&);

    // symbol: ??1ScriptActorQueryOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorQueryOptions();

    // symbol:
    // ?bindV010@ScriptActorQueryOptions@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptActorQueryOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorQueryOptions> bindV010();

    // symbol:
    // ?bindV1@ScriptActorQueryOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptActorQueryOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptActorQueryOptions>
    bindV1();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
