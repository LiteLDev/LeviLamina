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
    ::ll::UntypedStorage<8, 104> mUnkd7bdf5;
    ::ll::UntypedStorage<8, 64>  mUnk7150c1;
    ::ll::UntypedStorage<4, 4>   mUnkeb8210;
    ::ll::UntypedStorage<4, 4>   mUnk7e0607;
    ::ll::UntypedStorage<4, 4>   mUnkabaa0e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWatchdog& operator=(ScriptWatchdog const&);
    ScriptWatchdog(ScriptWatchdog const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWatchdog();

    MCAPI void disableTimingWarnings(::Scripting::ContextId contextId, bool disabled);

    MCAPI void
    initWatchdogHandler(::Scripting::IWatchdog& watchdog, ::ServerLevel& level, ::ScriptPluginManager* pluginManager);

    MCAPI ::ScriptWatchdog& operator=(::ScriptWatchdog&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& SCRIPT_WATCHDOG_JOB_QUEUE_PHASE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
