#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct LessThanComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6daa68;
    // NOLINTEND

public:
    // prevent constructor by default
    LessThanComparison& operator=(LessThanComparison const&);
    LessThanComparison(LessThanComparison const&);
    LessThanComparison();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::LessThanComparison> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
