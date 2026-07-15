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
    RepositoryPackTuple& operator=(RepositoryPackTuple const&);
    RepositoryPackTuple(RepositoryPackTuple const&);
    RepositoryPackTuple();
};
