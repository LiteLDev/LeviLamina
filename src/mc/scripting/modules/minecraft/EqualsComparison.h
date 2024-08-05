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
    MCAPI ~EqualsComparison();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::EqualsComparison> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
