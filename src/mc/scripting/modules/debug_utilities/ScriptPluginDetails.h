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
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mPackId;
    ::ll::TypedStorage<8, 32, ::std::string>                            mModuleUUID;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mHandleCounts;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginDetails& operator=(ScriptPluginDetails const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPluginDetails();

    MCNAPI ScriptPluginDetails(::ScriptModuleDebugUtilities::ScriptPluginDetails const&);

    MCNAPI ::ScriptModuleDebugUtilities::ScriptPluginDetails&
    operator=(::ScriptModuleDebugUtilities::ScriptPluginDetails&&);

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
