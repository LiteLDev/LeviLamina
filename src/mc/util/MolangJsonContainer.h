#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangJsonContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk2d9234;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangJsonContainer& operator=(MolangJsonContainer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangJsonContainer();

    MCAPI MolangJsonContainer(::MolangJsonContainer const&);

    MCAPI MolangJsonContainer(::MolangJsonContainer&&);

    MCAPI ~MolangJsonContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void valueFromString(::MolangJsonContainer& instance, ::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::MolangJsonContainer const&);

    MCAPI void* $ctor(::MolangJsonContainer&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
