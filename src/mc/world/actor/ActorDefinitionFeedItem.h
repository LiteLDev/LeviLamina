#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionFeedItem {
public:
    // prevent constructor by default
    ActorDefinitionFeedItem& operator=(ActorDefinitionFeedItem const&);
    ActorDefinitionFeedItem(ActorDefinitionFeedItem const&);
    ActorDefinitionFeedItem();

public:
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionFeedItem();

    // NOLINTEND
};
