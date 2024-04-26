#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct GreaterThanComparison {
public:
    // prevent constructor by default
    GreaterThanComparison& operator=(GreaterThanComparison const&);
    GreaterThanComparison(GreaterThanComparison const&);
    GreaterThanComparison();

public:
    // NOLINTBEGIN
    // symbol: ??8GreaterThanComparison@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::GreaterThanComparison const&) const;

    // symbol:
    // ?bind@GreaterThanComparison@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UGreaterThanComparison@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::GreaterThanComparison> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
