#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct RangeComparison {
public:
    // prevent constructor by default
    RangeComparison& operator=(RangeComparison const&);
    RangeComparison(RangeComparison const&);
    RangeComparison();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::RangeComparison> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
