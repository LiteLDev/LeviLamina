#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct GreaterThanOrEqualsComparison {
public:
    // prevent constructor by default
    GreaterThanOrEqualsComparison& operator=(GreaterThanOrEqualsComparison const&);
    GreaterThanOrEqualsComparison(GreaterThanOrEqualsComparison const&);
    GreaterThanOrEqualsComparison();

public:
    // NOLINTBEGIN
    // symbol: ??8GreaterThanOrEqualsComparison@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::GreaterThanOrEqualsComparison const&) const;

    // symbol:
    // ?bind@GreaterThanOrEqualsComparison@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UGreaterThanOrEqualsComparison@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::GreaterThanOrEqualsComparison>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
