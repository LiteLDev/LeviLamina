#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct RangeComparison {
public:
    // prevent constructor by default
    RangeComparison& operator=(RangeComparison const&);
    RangeComparison(RangeComparison const&);
    RangeComparison();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@RangeComparison@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@URangeComparison@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::RangeComparison> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
