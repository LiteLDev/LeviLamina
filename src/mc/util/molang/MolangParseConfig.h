#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangParseConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnk78716a;
    ::ll::UntypedStorage<8, 16> mUnkb34600;
    ::ll::UntypedStorage<8, 16> mUnk66f964;
    ::ll::UntypedStorage<8, 24> mUnkcd662b;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangParseConfig& operator=(MolangParseConfig const&);
    MolangParseConfig(MolangParseConfig const&);
    MolangParseConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MolangParseConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
