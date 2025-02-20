#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
