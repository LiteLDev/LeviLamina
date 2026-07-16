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
    IndexSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IndexSet(::IndexSet const& other);

    MCNAPI void insert(uint64 index);

    MCNAPI ~IndexSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IndexSet const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
