#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockStateDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk85fbc4;
    ::ll::UntypedStorage<1, 1>  mUnk22ed63;
    ::ll::UntypedStorage<8, 8>  mUnk5cc48c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockStateDefinition(::BlockStateDefinition const& rhs);

    MCAPI void _copy(::BlockStateDefinition const& rhs);

    MCAPI ::BlockStateDefinition& operator=(::BlockStateDefinition&&);

    MCAPI ::BlockStateDefinition& operator=(::BlockStateDefinition const& rhs);

    MCAPI ~BlockStateDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockStateDefinition const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
