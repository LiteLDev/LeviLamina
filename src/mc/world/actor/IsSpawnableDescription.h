#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IsSpawnableDescription {
public:
    // prevent constructor by default
    IsSpawnableDescription& operator=(IsSpawnableDescription const&);
    IsSpawnableDescription(IsSpawnableDescription const&);
    IsSpawnableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IsSpawnableDescription() = default;

    // vIndex: 1
    virtual char const* getJsonName() const;

    // NOLINTEND
};
