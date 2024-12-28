#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptPackPermissions;
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
    MCAPI ScriptPackConfiguration();

    MCAPI ScriptPackConfiguration(::ScriptPackConfiguration const&);

    MCAPI ScriptPackConfiguration(::ScriptPackConfiguration&&);

    MCAPI ::ScriptPackPermissions const& getPermissions() const;

    MCAPI ::std::unordered_map<::std::string, ::std::string> const& getSecrets() const;

    MCAPI ::std::unordered_map<::std::string, ::Json::Value> const& getVariables() const;

    MCAPI ::ScriptPackConfiguration& operator=(::ScriptPackConfiguration&&);

    MCAPI ~ScriptPackConfiguration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptPackConfiguration const&);

    MCAPI void* $ctor(::ScriptPackConfiguration&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
