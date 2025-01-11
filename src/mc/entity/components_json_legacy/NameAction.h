#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NameAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk71b49b;
    ::ll::UntypedStorage<8, 104> mUnk12c2b3;
    // NOLINTEND

public:
    // prevent constructor by default
    NameAction& operator=(NameAction const&);
    NameAction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NameAction(::NameAction const&);

    MCFOLD void addNameFilterByName(::std::string const& name);

    MCAPI ~NameAction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NameAction const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
