#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct ActorDefinitionTameItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mItemDescriptor;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mResultItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionTameItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionTameItem(::ActorDefinitionTameItem const&);

    MCAPI ::ActorDefinitionTameItem& operator=(::ActorDefinitionTameItem const&);

    MCAPI ~ActorDefinitionTameItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorDefinitionTameItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
