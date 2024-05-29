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
    // vIndex: 0, symbol: __gen_??1SpawnCategoryDescription@@UEAA@XZ
    virtual ~SpawnCategoryDescription() = default;

    // vIndex: 1, symbol: ?getJsonName@SpawnCategoryDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // NOLINTEND
};
