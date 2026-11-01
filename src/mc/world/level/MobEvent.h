#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 32, ::std::string> mLocalizableName;
    ::ll::TypedStorage<1, 1, bool>           mEnabled;
    ::ll::TypedStorage<1, 1, bool>           mIsDefaultSet;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobEvent(::std::string name, ::std::string localizableName, bool val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string name, ::std::string localizableName, bool val);
    // NOLINTEND
};
