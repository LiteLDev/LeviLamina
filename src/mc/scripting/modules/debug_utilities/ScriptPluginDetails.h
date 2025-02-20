#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleDebugUtilities {

struct ScriptPluginDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk15d49e;
    ::ll::UntypedStorage<8, 32> mUnkbf912a;
    ::ll::UntypedStorage<8, 32> mUnk7d74a6;
    ::ll::UntypedStorage<8, 64> mUnkda1810;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPluginDetails();

    MCAPI ScriptPluginDetails(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);

    MCAPI ::ScriptModuleDebugUtilities::ScriptPluginDetails&
    operator=(::ScriptModuleDebugUtilities::ScriptPluginDetails&&);

    MCAPI ::ScriptModuleDebugUtilities::ScriptPluginDetails&
    operator=(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);

    MCAPI ~ScriptPluginDetails();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleDebugUtilities::ScriptPluginDetails> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
