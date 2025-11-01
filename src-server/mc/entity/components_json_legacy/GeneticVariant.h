#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeneticVariant {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkbbfee4;
    ::ll::UntypedStorage<4, 8> mUnkc35ea8;
    ::ll::UntypedStorage<4, 8> mUnk5f9d7e;
    ::ll::UntypedStorage<4, 8> mUnkfd381f;
    ::ll::UntypedStorage<8, 104> mUnk949cb0;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneticVariant& operator=(GeneticVariant const&);
    GeneticVariant(GeneticVariant const&);
    GeneticVariant();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GeneticVariant();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
