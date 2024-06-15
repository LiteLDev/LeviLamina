#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptObjectiveSortOrderType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjectiveDisplayOptions {
public:
    // prevent constructor by default
    ScriptScoreboardObjectiveDisplayOptions& operator=(ScriptScoreboardObjectiveDisplayOptions const&);
    ScriptScoreboardObjectiveDisplayOptions(ScriptScoreboardObjectiveDisplayOptions const&);
    ScriptScoreboardObjectiveDisplayOptions();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@W4ScriptObjectiveSortOrderType@1@@Z
    MCAPI ScriptScoreboardObjectiveDisplayOptions(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective> objective,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType
    );

    // symbol:
    // ?getObjective@ScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptScoreboardObjective@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>
    getObjective() const;

    // symbol:
    // ?getSortOrder@ScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@QEBA?AW4ScriptObjectiveSortOrderType@2@XZ
    MCAPI ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType getSortOrder() const;

    // symbol: ??1ScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptScoreboardObjectiveDisplayOptions();

    // symbol:
    // ?bind@ScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<
        class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
