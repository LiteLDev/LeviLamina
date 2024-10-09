#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct GreaterThanOrEqualsComparison {
public:
    // prevent constructor by default
    GreaterThanOrEqualsComparison& operator=(GreaterThanOrEqualsComparison const&);
    GreaterThanOrEqualsComparison(GreaterThanOrEqualsComparison const&);
    GreaterThanOrEqualsComparison();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::GreaterThanOrEqualsComparison>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
