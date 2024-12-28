#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptStructurePlaceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk9bbd0c;
    ::ll::UntypedStorage<1, 2>  mUnka6df9e;
    ::ll::UntypedStorage<1, 2>  mUnk9f2ad6;
    ::ll::UntypedStorage<1, 2>  mUnkae8d62;
    ::ll::UntypedStorage<1, 2>  mUnkebcf19;
    ::ll::UntypedStorage<4, 8>  mUnk1c8b62;
    ::ll::UntypedStorage<8, 40> mUnk44e4d8;
    ::ll::UntypedStorage<1, 2>  mUnkfa951c;
    ::ll::UntypedStorage<4, 8>  mUnkb6b8e9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStructurePlaceOptions(ScriptStructurePlaceOptions const&);
    ScriptStructurePlaceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptStructurePlaceOptions&
    operator=(::ScriptModuleMinecraft::ScriptStructurePlaceOptions const&);

    MCAPI ::ScriptModuleMinecraft::ScriptStructurePlaceOptions&
    operator=(::ScriptModuleMinecraft::ScriptStructurePlaceOptions&&);

    MCAPI ~ScriptStructurePlaceOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptStructurePlaceOptions> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
