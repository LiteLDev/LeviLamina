#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PropertyGroupManager {
public:
    // prevent constructor by default
    PropertyGroupManager& operator=(PropertyGroupManager const&);
    PropertyGroupManager(PropertyGroupManager const&);

public:
    // NOLINTBEGIN
    MCAPI PropertyGroupManager();

    MCAPI class CompoundTag getActorPropertyDataTag(class HashedString const& actorCanonicalName) const;

    MCAPI std::unordered_map<class HashedString, std::shared_ptr<class PropertyGroup const>> const&
          getAllPropertyGroups() const;

    MCAPI void registerGroup(class HashedString const& id, std::shared_ptr<class PropertyGroup const> group);

    MCAPI void tryInitPropertiesOnActor(class Actor& actor) const;

    MCAPI ~PropertyGroupManager();

    // NOLINTEND
};
