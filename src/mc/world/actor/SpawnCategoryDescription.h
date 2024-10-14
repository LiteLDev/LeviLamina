#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnCategoryDescription {
public:
    // prevent constructor by default
    SpawnCategoryDescription& operator=(SpawnCategoryDescription const&);
    SpawnCategoryDescription(SpawnCategoryDescription const&);
    SpawnCategoryDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnCategoryDescription() = default;

    // vIndex: 1
    virtual char const* getJsonName() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
