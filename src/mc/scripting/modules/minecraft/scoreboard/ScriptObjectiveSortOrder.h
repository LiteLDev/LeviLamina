#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptObjectiveSortOrderType.h"
#include "mc/world/scores/ObjectiveSortOrder.h"

namespace ScriptModuleMinecraft {

class ScriptObjectiveSortOrder {
public:
    // prevent constructor by default
    ScriptObjectiveSortOrder& operator=(ScriptObjectiveSortOrder const&);
    ScriptObjectiveSortOrder(ScriptObjectiveSortOrder const&);
    ScriptObjectiveSortOrder();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType>
    bind();

    MCAPI static ::ObjectiveSortOrder toObjectiveSortOrder(::ScriptModuleMinecraft::ScriptObjectiveSortOrderType order);

    MCAPI static ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType
    toScriptObjectiveSortOrder(::ObjectiveSortOrder order);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
