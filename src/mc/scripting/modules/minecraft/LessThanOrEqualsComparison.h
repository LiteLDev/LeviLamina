#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct LessThanOrEqualsComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4b6467;
    // NOLINTEND

public:
    // prevent constructor by default
    LessThanOrEqualsComparison& operator=(LessThanOrEqualsComparison const&);
    LessThanOrEqualsComparison(LessThanOrEqualsComparison const&);
    LessThanOrEqualsComparison();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::LessThanOrEqualsComparison> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
