#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct NotEqualsComparison {
public:
    // prevent constructor by default
    NotEqualsComparison& operator=(NotEqualsComparison const&);
    NotEqualsComparison(NotEqualsComparison const&);
    NotEqualsComparison();

public:
    // NOLINTBEGIN
    // symbol: ??8NotEqualsComparison@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::NotEqualsComparison const&) const;

    // symbol: ??1NotEqualsComparison@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~NotEqualsComparison();

    // symbol:
    // ?bind@NotEqualsComparison@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UNotEqualsComparison@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::NotEqualsComparison> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
