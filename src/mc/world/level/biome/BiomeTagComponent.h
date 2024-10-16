#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeTagComponent {
public:
    // prevent constructor by default
    BiomeTagComponent& operator=(BiomeTagComponent const&);
    BiomeTagComponent(BiomeTagComponent const&);
    BiomeTagComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeTagComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
