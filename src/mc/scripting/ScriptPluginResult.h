#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

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
    struct Error {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> message;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Error();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct Info {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> message;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Info();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct Verbose {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> message;
        // NOLINTEND
    };

    struct Warning {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> message;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::PackIdVersion const>                        mPackId;
    ::ll::TypedStorage<8, 96, ::Scripting::ModuleDescriptor const>          mDescriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptPluginResult::Error>>   mErrors;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptPluginResult::Warning>> mWarnings;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptPluginResult::Info>>    mInfos;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptPluginResult::Verbose>> mVerboses;
    ::ll::TypedStorage<8, 8, ::std::chrono::microseconds>                   mRunDuration;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void logError(::std::string const& error);

    MCAPI void logInfo(::std::string const& info);

#ifdef LL_PLAT_C
    MCAPI ~ScriptPluginResult();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
