#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnActorParameters {
public:
    // prevent constructor by default
    SpawnActorParameters& operator=(SpawnActorParameters const&);

public:
    // NOLINTBEGIN
    MCAPI SpawnActorParameters();

    MCAPI SpawnActorParameters(struct SpawnActorParameters&&);

    MCAPI SpawnActorParameters(struct SpawnActorParameters const&);

    MCAPI void setItem(class ItemDescriptor const& itemDescriptor);

    MCAPI void setSpawnEntity(std::string const& name);

    MCAPI void setSpawnEvent(std::string const& name);

    MCAPI void setSpawnSound(std::string const& name);

    MCAPI void setSpawnTimeMax(int const& value);

    MCAPI void setSpawnTimeMin(int const& value);

    MCAPI bool spawnsItemStack() const;

    MCAPI ~SpawnActorParameters();

    // NOLINTEND
};
