#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct ActorDefinitionBreedItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mItemDescriptor;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mResultItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionBreedItem& operator=(ActorDefinitionBreedItem const&);
    ActorDefinitionBreedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionBreedItem(::ActorDefinitionBreedItem const&);

    MCAPI ~ActorDefinitionBreedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorDefinitionBreedItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
