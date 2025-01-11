#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IndexSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8a7aaf;
    ::ll::UntypedStorage<8, 24> mUnk42b399;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexSet& operator=(IndexSet const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IndexSet();

    MCAPI IndexSet(::IndexSet const& other);

    MCAPI IndexSet(::IndexSet&& other);

    MCAPI bool contains(uint64 index) const;

    MCFOLD ::std::vector<uint64> const& getPacked() const;

    MCAPI void insert(uint64 index);

    MCAPI bool operator==(::IndexSet const& other) const;

    MCAPI void remove(uint64 index);

    MCAPI ~IndexSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::IndexSet const& other);

    MCAPI void* $ctor(::IndexSet&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
