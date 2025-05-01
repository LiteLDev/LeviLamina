#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct GreaterThanComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8dab12;
    // NOLINTEND

public:
    // prevent constructor by default
    GreaterThanComparison& operator=(GreaterThanComparison const&);
    GreaterThanComparison(GreaterThanComparison const&);
    GreaterThanComparison();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::GreaterThanComparison> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
