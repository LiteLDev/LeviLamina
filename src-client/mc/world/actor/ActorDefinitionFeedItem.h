#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct ActorDefinitionFeedItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mItemDescriptor;
    ::ll::TypedStorage<4, 4, float>             mGrowth;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionFeedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionFeedItem(::ActorDefinitionFeedItem const&);

    MCFOLD ::ActorDefinitionFeedItem& operator=(::ActorDefinitionFeedItem const&);

    MCAPI ~ActorDefinitionFeedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorDefinitionFeedItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
