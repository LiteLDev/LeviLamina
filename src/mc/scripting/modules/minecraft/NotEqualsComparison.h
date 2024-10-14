#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct NotEqualsComparison {
public:
    // prevent constructor by default
    NotEqualsComparison& operator=(NotEqualsComparison const&);
    NotEqualsComparison(NotEqualsComparison const&);
    NotEqualsComparison();

public:
    // NOLINTBEGIN
    MCAPI ~NotEqualsComparison();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::NotEqualsComparison> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
