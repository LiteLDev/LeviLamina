#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct LessThanOrEqualsComparison {
public:
    // prevent constructor by default
    LessThanOrEqualsComparison& operator=(LessThanOrEqualsComparison const&);
    LessThanOrEqualsComparison(LessThanOrEqualsComparison const&);
    LessThanOrEqualsComparison();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::LessThanOrEqualsComparison>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
