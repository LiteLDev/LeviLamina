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
    ScriptPackConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPackConfiguration(::ScriptPackConfiguration const&);

    MCNAPI ::ScriptPackPermissions const& getPermissions() const;

#ifdef LL_PLAT_C
    MCNAPI ::ScriptPackPermissions& getPermissions();
#endif

    MCNAPI ::std::unordered_map<::std::string, ::std::string> const& getSecrets() const;

    MCNAPI ::std::unordered_map<::std::string, ::Json::Value> const& getVariables() const;

    MCNAPI ~ScriptPackConfiguration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptPackConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
