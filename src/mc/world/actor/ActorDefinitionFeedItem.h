#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionFeedItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk117f99;
    ::ll::UntypedStorage<4, 4>  mUnk1f976e;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionFeedItem& operator=(ActorDefinitionFeedItem const&);
    ActorDefinitionFeedItem(ActorDefinitionFeedItem const&);
    ActorDefinitionFeedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionFeedItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
