#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/ScriptPackPermissions.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptPackConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Json::Value>> mPackVariables;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mPackSecrets;
    ::ll::TypedStorage<8, 96, ::ScriptPackPermissions>                            mPackPermisions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackConfiguration& operator=(ScriptPackConfiguration const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPackConfiguration();

    MCNAPI ScriptPackConfiguration(::ScriptPackConfiguration&&);

    MCNAPI ScriptPackConfiguration(::ScriptPackConfiguration const&);

    MCNAPI ~ScriptPackConfiguration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptPackConfiguration&&);

    MCNAPI void* $ctor(::ScriptPackConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
