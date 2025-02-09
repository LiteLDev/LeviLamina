#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
// clang-format on

struct ScriptDebuggerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                       mTick;
    ::ll::TypedStorage<8, 32, ::std::string>               mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptStat>> mStats;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerEvent(ScriptDebuggerEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptDebuggerEvent& operator=(::ScriptDebuggerEvent const&);

    MCAPI ::ScriptDebuggerEvent& operator=(::ScriptDebuggerEvent&&);

    MCAPI ~ScriptDebuggerEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
