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
    BlockStateDefinition& operator=(BlockStateDefinition const&);
    BlockStateDefinition(BlockStateDefinition const&);
    BlockStateDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _copy(::BlockStateDefinition const& rhs);

    MCNAPI ::BlockStateDefinition& operator=(::BlockStateDefinition&&);

    MCNAPI ~BlockStateDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
