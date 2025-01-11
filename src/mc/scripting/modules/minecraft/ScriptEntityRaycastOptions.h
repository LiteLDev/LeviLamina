#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityRaycastOptions : public ::ScriptModuleMinecraft::ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk529469;
    ::ll::UntypedStorage<1, 2> mUnk1fbb2e;
    ::ll::UntypedStorage<1, 2> mUnk3b6b12;
    ::ll::UntypedStorage<1, 2> mUnkf4d7c2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntityRaycastOptions& operator=(ScriptEntityRaycastOptions const&);
    ScriptEntityRaycastOptions(ScriptEntityRaycastOptions const&);
    ScriptEntityRaycastOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptEntityRaycastOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> bindV010();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
