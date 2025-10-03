#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke73515;
    ::ll::UntypedStorage<8, 24> mUnkad59e0;
    ::ll::UntypedStorage<8, 24> mUnk6c0df0;
    ::ll::UntypedStorage<8, 24> mUnk1cde44;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionModifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDefinitionModifier(::ActorDefinitionModifier const&);

    MCNAPI ::ActorDefinitionModifier& operator=(::ActorDefinitionModifier const&);

    MCNAPI ::ActorDefinitionModifier& operator=(::ActorDefinitionModifier&&);

    MCNAPI ~ActorDefinitionModifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionModifier const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
