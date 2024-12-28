#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ScriptPackConfigurationManager;
struct ScriptDebuggerSettings;
namespace Scripting { struct WatchdogSettings; }
// clang-format on

struct ScriptSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 352, ::ScriptPackConfigurationManager> PackConfigurationManager;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>              mScriptingEnabledOverride;
    ::ll::TypedStorage<8, 104, ::ScriptDebuggerSettings>         mDebuggerSettings;
    ::ll::TypedStorage<1, 1, bool>                               mEnableWatchdog;
    ::ll::TypedStorage<4, 32, ::Scripting::WatchdogSettings>     mWatchdogSettings;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>      mExcludedScriptModules;
    ::ll::TypedStorage<8, 120, ::BaseGameVersion>                mBaseGameVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettings& operator=(ScriptSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSettings();

    MCAPI ScriptSettings(::ScriptSettings const&);

    MCAPI ~ScriptSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
