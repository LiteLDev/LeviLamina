#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptObjectiveSortOrderType.h"

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
    MCAPI ScriptScoreboardObjectiveDisplayOptions(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective> objective,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType                                            sortOrder
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardObjective>
    getObjective() const;

    MCAPI ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType getSortOrder() const;

    MCAPI ~ScriptScoreboardObjectiveDisplayOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<
        class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
