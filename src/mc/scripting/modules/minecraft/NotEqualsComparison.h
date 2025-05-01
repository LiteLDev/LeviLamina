#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct NotEqualsComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk90e2fe;
    // NOLINTEND

public:
    // prevent constructor by default
    NotEqualsComparison& operator=(NotEqualsComparison const&);
    NotEqualsComparison(NotEqualsComparison const&);
    NotEqualsComparison();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~NotEqualsComparison();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::NotEqualsComparison> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
