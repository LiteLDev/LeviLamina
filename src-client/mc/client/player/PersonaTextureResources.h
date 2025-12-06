#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersonaTextureResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk308f9e;
    ::ll::UntypedStorage<8, 64>  mUnkb59a65;
    ::ll::UntypedStorage<8, 248> mUnk61a86e;
    ::ll::UntypedStorage<8, 248> mUnk3e7b1d;
    ::ll::UntypedStorage<8, 248> mUnk7b30c3;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaTextureResources& operator=(PersonaTextureResources const&);
    PersonaTextureResources(PersonaTextureResources const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaTextureResources();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
