#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptPluginResult {
public:
    // ScriptPluginResult inner types declare
    // clang-format off
    struct Error;
    struct Info;
    struct Verbose;
    struct Warning;
    // clang-format on

    // ScriptPluginResult inner types define
    struct Error {};

    struct Warning {};

    struct Info {};

    struct Verbose {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk1834eb;
    ::ll::UntypedStorage<8, 96> mUnk14873c;
    ::ll::UntypedStorage<8, 24> mUnkf68085;
    ::ll::UntypedStorage<8, 24> mUnkd65271;
    ::ll::UntypedStorage<8, 24> mUnkea957c;
    ::ll::UntypedStorage<8, 24> mUnk5f16dc;
    ::ll::UntypedStorage<8, 8>  mUnk2c14cc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginResult& operator=(ScriptPluginResult const&);
    ScriptPluginResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPluginResult(::ScriptPluginResult const&);

    MCAPI ScriptPluginResult(::ScriptPluginResult&&);

    MCAPI ScriptPluginResult(::PackIdVersion packId, ::Scripting::ModuleDescriptor const& descriptor);

    MCAPI void logError(::std::string const& error);

    MCAPI void logErrors(::std::vector<::std::string> const& errors);

    MCAPI void logInfo(::std::string const& info);

    MCAPI void logWarning(::std::string const& warning);

    MCAPI ~ScriptPluginResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptPluginResult const&);

    MCAPI void* $ctor(::ScriptPluginResult&&);

    MCAPI void* $ctor(::PackIdVersion packId, ::Scripting::ModuleDescriptor const& descriptor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
