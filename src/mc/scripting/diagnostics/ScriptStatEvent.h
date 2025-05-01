#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
// clang-format on

class ScriptStatEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                       mTick;
    ::ll::TypedStorage<8, 32, ::std::string>               mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptStat>> mStats;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStatEvent(ScriptStatEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptStatEvent& operator=(::ScriptStatEvent&&);

    MCNAPI ::ScriptStatEvent& operator=(::ScriptStatEvent const&);

    MCNAPI ~ScriptStatEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
