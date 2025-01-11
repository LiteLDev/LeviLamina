#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6cd3f4;
    ::ll::UntypedStorage<4, 4>  mUnka5d839;
    ::ll::UntypedStorage<4, 4>  mUnk56a66d;
    ::ll::UntypedStorage<4, 8>  mUnk5de2be;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionAttribute& operator=(ActorDefinitionAttribute const&);
    ActorDefinitionAttribute(ActorDefinitionAttribute const&);
    ActorDefinitionAttribute();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionAttribute();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
