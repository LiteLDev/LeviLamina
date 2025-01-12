#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

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
    MCFOLD bool operator==(::ScriptModuleMinecraft::NotEqualsComparison const& other) const;

    MCAPI ~NotEqualsComparison();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::NotEqualsComparison> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
