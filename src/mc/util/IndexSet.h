#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IndexSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf38d12;
    ::ll::UntypedStorage<8, 24> mUnkf89f4f;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexSet& operator=(IndexSet const&);
    IndexSet(IndexSet const&);
    IndexSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~IndexSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
