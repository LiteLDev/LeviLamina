#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct LessThanComparison {
public:
    // prevent constructor by default
    LessThanComparison& operator=(LessThanComparison const&);
    LessThanComparison(LessThanComparison const&);
    LessThanComparison();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::LessThanComparison> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
