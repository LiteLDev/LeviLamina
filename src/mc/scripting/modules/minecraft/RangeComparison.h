#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct RangeComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6e6363;
    ::ll::UntypedStorage<4, 4> mUnk32bb6e;
    // NOLINTEND

public:
    // prevent constructor by default
    RangeComparison& operator=(RangeComparison const&);
    RangeComparison(RangeComparison const&);
    RangeComparison();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::RangeComparison> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
