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
    MobEvent& operator=(MobEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEvent(::MobEvent const&);

    MCAPI MobEvent(::std::string name, ::std::string localizableName, bool val);

    MCAPI ~MobEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MobEvent const&);

    MCAPI void* $ctor(::std::string name, ::std::string localizableName, bool val);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
