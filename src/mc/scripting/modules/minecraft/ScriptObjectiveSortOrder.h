#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
