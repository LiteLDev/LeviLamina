#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 32> mUnka39007;
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

    struct Info {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkdf56e5;
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
        ::ll::UntypedStorage<8, 32> mUnkef90b3;
        // NOLINTEND

    public:
        // prevent constructor by default
        Verbose& operator=(Verbose const&);
        Verbose(Verbose const&);
        Verbose();
    };

    struct Warning {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk69d183;
        // NOLINTEND

    public:
        // prevent constructor by default
        Warning& operator=(Warning const&);
        Warning(Warning const&);
        Warning();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk1834eb;
    ::ll::UntypedStorage<8, 96> mUnk14873c;
    ::ll::UntypedStorage<8, 24> mUnk68e0e6;
    ::ll::UntypedStorage<8, 24> mUnkbae67b;
    ::ll::UntypedStorage<8, 24> mUnk3cb33c;
    ::ll::UntypedStorage<8, 24> mUnka8b2c4;
    ::ll::UntypedStorage<8, 8>  mUnk2c14cc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginResult& operator=(ScriptPluginResult const&);
    ScriptPluginResult(ScriptPluginResult const&);
    ScriptPluginResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void logError(::std::string const& error);

    MCAPI void logInfo(::std::string const& info);

    MCAPI ~ScriptPluginResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
