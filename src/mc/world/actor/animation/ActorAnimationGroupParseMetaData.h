#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAnimationGroupParseMetaData {
public:
    // prevent constructor by default
    ActorAnimationGroupParseMetaData& operator=(ActorAnimationGroupParseMetaData const&);
    ActorAnimationGroupParseMetaData(ActorAnimationGroupParseMetaData const&);
    ActorAnimationGroupParseMetaData();

public:
    // NOLINTBEGIN
    MCAPI ~ActorAnimationGroupParseMetaData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
