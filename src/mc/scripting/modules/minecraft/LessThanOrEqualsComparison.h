#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct LessThanOrEqualsComparison {
public:
    // prevent constructor by default
    LessThanOrEqualsComparison& operator=(LessThanOrEqualsComparison const&);
    LessThanOrEqualsComparison(LessThanOrEqualsComparison const&);
    LessThanOrEqualsComparison();

public:
    // NOLINTBEGIN
    // symbol: ??8LessThanOrEqualsComparison@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::LessThanOrEqualsComparison const&) const;

    // symbol:
    // ?bind@LessThanOrEqualsComparison@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@ULessThanOrEqualsComparison@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::LessThanOrEqualsComparison>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
