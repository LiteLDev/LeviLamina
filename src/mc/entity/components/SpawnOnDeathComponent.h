#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorFilterGroup.h"

struct SpawnOnDeathComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mEntityDefinition;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mFilterGroup;
    ::ll::TypedStorage<8, 32, ::std::string>                mSpawnMethod;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>       mAdditionalSpawnRange;
    ::ll::TypedStorage<4, 4, int>                           mAmount;
    ::ll::TypedStorage<1, 1, bool>                          mInheritName;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnOnDeathComponent& operator=(SpawnOnDeathComponent const&);
    SpawnOnDeathComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnOnDeathComponent(::SpawnOnDeathComponent const&);

    MCNAPI ::SpawnOnDeathComponent& operator=(::SpawnOnDeathComponent&&);

    MCNAPI ~SpawnOnDeathComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SpawnOnDeathComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
