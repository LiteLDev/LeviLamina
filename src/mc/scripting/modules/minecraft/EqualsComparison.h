#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct EqualsComparison {
public:
    // prevent constructor by default
    EqualsComparison& operator=(EqualsComparison const&);
    EqualsComparison(EqualsComparison const&);
    EqualsComparison();

public:
    // NOLINTBEGIN
    // symbol: ??8EqualsComparison@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::EqualsComparison const&) const;

    // symbol: ??1EqualsComparison@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~EqualsComparison();

    // symbol:
    // ?bind@EqualsComparison@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UEqualsComparison@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::EqualsComparison> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
