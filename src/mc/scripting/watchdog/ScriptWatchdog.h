#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptPluginManager;
class ServerLevel;
namespace Scripting { class IWatchdog; }
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptWatchdog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnkd7bdf5;
    ::ll::UntypedStorage<8, 64> mUnk7150c1;
    ::ll::UntypedStorage<4, 4>  mUnkeb8210;
    ::ll::UntypedStorage<4, 4>  mUnk7e0607;
    ::ll::UntypedStorage<4, 4>  mUnkabaa0e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWatchdog(ScriptWatchdog const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWatchdog();

    MCNAPI void disableTimingWarnings(::Scripting::ContextId contextId, bool disabled);

    MCNAPI void
    initWatchdogHandler(::Scripting::IWatchdog& watchdog, ::ServerLevel& level, ::ScriptPluginManager* pluginManager);

    MCNAPI ::ScriptWatchdog& operator=(::ScriptWatchdog const&);

    MCNAPI ~ScriptWatchdog();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& SCRIPT_WATCHDOG_JOB_QUEUE_PHASE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
