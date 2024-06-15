#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ObjectiveSortOrder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptObjectiveSortOrderType.h"

namespace ScriptModuleMinecraft {

class ScriptObjectiveSortOrder {
public:
    // prevent constructor by default
    ScriptObjectiveSortOrder& operator=(ScriptObjectiveSortOrder const&);
    ScriptObjectiveSortOrder(ScriptObjectiveSortOrder const&);
    ScriptObjectiveSortOrder();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptObjectiveSortOrder@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@W4ScriptObjectiveSortOrderType@ScriptModuleMinecraft@@W412@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType>
    bind();

    // symbol:
    // ?toObjectiveSortOrder@ScriptObjectiveSortOrder@ScriptModuleMinecraft@@SA?AW4ObjectiveSortOrder@@W4ScriptObjectiveSortOrderType@2@@Z
    MCAPI static ::ObjectiveSortOrder toObjectiveSortOrder(::ScriptModuleMinecraft::ScriptObjectiveSortOrderType order);

    // symbol:
    // ?toScriptObjectiveSortOrder@ScriptObjectiveSortOrder@ScriptModuleMinecraft@@SA?AW4ScriptObjectiveSortOrderType@2@W4ObjectiveSortOrder@@@Z
    MCAPI static ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType
    toScriptObjectiveSortOrder(::ObjectiveSortOrder order);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
