#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RepositoryPackTuple {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd6d4d0;
    ::ll::UntypedStorage<8, 16> mUnkec28f2;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoryPackTuple(RepositoryPackTuple const&);
    RepositoryPackTuple();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::RepositoryPackTuple& operator=(::RepositoryPackTuple const&);

    MCNAPI ::RepositoryPackTuple& operator=(::RepositoryPackTuple&&);

    MCNAPI ~RepositoryPackTuple();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
