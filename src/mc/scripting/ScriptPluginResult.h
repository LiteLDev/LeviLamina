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
    struct Error {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkca3847;
        // NOLINTEND

    public:
        // prevent constructor by default
        Error& operator=(Error const&);
        Error(Error const&);
        Error();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Error();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Warning {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkbedc65;
        // NOLINTEND

    public:
        // prevent constructor by default
        Warning& operator=(Warning const&);
        Warning(Warning const&);
        Warning();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Warning();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Info {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf326df;
        // NOLINTEND

    public:
        // prevent constructor by default
        Info& operator=(Info const&);
        Info(Info const&);
        Info();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Info();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Verbose {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk58cf1f;
        // NOLINTEND

    public:
        // prevent constructor by default
        Verbose& operator=(Verbose const&);
        Verbose(Verbose const&);
        Verbose();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Verbose();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

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
    MCNAPI ScriptPluginResult(::ScriptPluginResult const&);

    MCNAPI ScriptPluginResult(::ScriptPluginResult&&);

    MCNAPI ScriptPluginResult(::PackIdVersion packId, ::Scripting::ModuleDescriptor const& descriptor);

    MCNAPI void logError(::std::string const& error);

    MCNAPI void logErrors(::std::vector<::std::string> const& errors);

    MCNAPI void logInfo(::std::string const& info);

    MCNAPI void logWarning(::std::string const& warning);

    MCNAPI ~ScriptPluginResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptPluginResult const&);

    MCNAPI void* $ctor(::ScriptPluginResult&&);

    MCNAPI void* $ctor(::PackIdVersion packId, ::Scripting::ModuleDescriptor const& descriptor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
