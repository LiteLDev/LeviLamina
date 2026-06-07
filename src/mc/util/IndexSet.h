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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IndexSet();

    MCNAPI IndexSet(::IndexSet&& other);

    MCNAPI IndexSet(::IndexSet const& other);

    MCNAPI bool contains(uint64 index) const;

    MCNAPI ::std::vector<uint64> const& getPacked() const;

    MCNAPI void insert(uint64 index);

    MCNAPI bool operator==(::IndexSet const& other) const;

    MCNAPI void remove(uint64 index);

    MCNAPI ~IndexSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::IndexSet&& other);

    MCNAPI void* $ctor(::IndexSet const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
