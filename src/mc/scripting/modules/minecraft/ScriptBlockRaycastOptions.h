#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptBlockFilter.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockRaycastOptions : public ::ScriptModuleMinecraft::ScriptBlockFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkd33855;
    ::ll::UntypedStorage<1, 2> mUnke8721f;
    ::ll::UntypedStorage<1, 2> mUnk11f33b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockRaycastOptions& operator=(ScriptBlockRaycastOptions const&);
    ScriptBlockRaycastOptions(ScriptBlockRaycastOptions const&);
    ScriptBlockRaycastOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockRaycastOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> bind();

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> bindV010();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
