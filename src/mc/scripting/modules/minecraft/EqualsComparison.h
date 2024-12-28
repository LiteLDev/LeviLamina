#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct EqualsComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk755dad;
    // NOLINTEND

public:
    // prevent constructor by default
    EqualsComparison& operator=(EqualsComparison const&);
    EqualsComparison(EqualsComparison const&);
    EqualsComparison();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::ScriptModuleMinecraft::EqualsComparison const& other) const;

    MCAPI ~EqualsComparison();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::EqualsComparison> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
