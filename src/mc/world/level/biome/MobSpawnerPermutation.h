#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

class MobSpawnerPermutation : public ::WeightedRandom::WeighedRandomItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mId;
    // NOLINTEND
};
