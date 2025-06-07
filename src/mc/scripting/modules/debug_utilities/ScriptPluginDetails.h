#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    MCNAPI ScriptPluginDetails();

    MCNAPI ScriptPluginDetails(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);

    MCNAPI ::ScriptModuleDebugUtilities::ScriptPluginDetails&
    operator=(::ScriptModuleDebugUtilities::ScriptPluginDetails&&);

    MCNAPI ::ScriptModuleDebugUtilities::ScriptPluginDetails&
    operator=(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);

    MCNAPI ~ScriptPluginDetails();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
