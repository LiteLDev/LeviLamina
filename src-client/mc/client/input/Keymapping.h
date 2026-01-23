#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Keymapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mAction;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mKeys;
    ::ll::TypedStorage<1, 1, bool>                mAllowRemap;
    ::ll::TypedStorage<1, 1, bool>                mIsSharedKey;
    // NOLINTEND

public:
    LLNDAPI bool isAssigned() const;
    LLNDAPI bool isAltKey() const;
    LLNDAPI bool isRemappable() const;
    LLNDAPI bool isSharedKey() const;

    Keymapping(std::string const& action, std::vector<int> const& defaultKeys) : mAction(action), mKeys(defaultKeys) {}

public:
    // prevent constructor by default
    Keymapping& operator=(Keymapping const&);
    Keymapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Keymapping(::Keymapping const&);

    MCAPI Keymapping(::std::string const& action, int defaultKey);

    MCAPI ~Keymapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Keymapping const&);

    MCAPI void* $ctor(::std::string const& action, int defaultKey);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
