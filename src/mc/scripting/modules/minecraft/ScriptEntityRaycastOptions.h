#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
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
    MCNAPI ~ScriptEntityRaycastOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> bind();

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> bindV010();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
