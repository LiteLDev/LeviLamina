#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk11f31b;
    ::ll::UntypedStorage<8, 32> mUnk4fc43c;
    ::ll::UntypedStorage<1, 1>  mUnk1ede9c;
    ::ll::UntypedStorage<1, 1>  mUnka7e4ec;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEvent& operator=(MobEvent const&);
    MobEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEvent(::MobEvent const&);

    MCAPI MobEvent(::std::string name, ::std::string localizableName, bool val);

    MCAPI ::std::string const& getLocalizableName() const;

    MCAPI ::std::string const& getName() const;

    MCAPI bool isEnabled() const;

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
    MCAPI void $dtor();
    // NOLINTEND
};
