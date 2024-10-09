#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

class ActorSpawnRuleDataLoader {
public:
    // prevent constructor by default
    ActorSpawnRuleDataLoader& operator=(ActorSpawnRuleDataLoader const&);
    ActorSpawnRuleDataLoader(ActorSpawnRuleDataLoader const&);
    ActorSpawnRuleDataLoader();

public:
    // NOLINTBEGIN
    MCAPI ActorSpawnRuleDataLoader(std::string rootKey, class MobSpawnRules const* baseSpawnRules);

    MCAPI class Puv::LoadResult<struct ActorSpawnRuleData> load(std::string const& input) const;

    MCAPI ~ActorSpawnRuleDataLoader();

    // NOLINTEND
};
