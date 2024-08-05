#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourceDrops {
public:
    std::vector<ItemStack> mResourceDrops;

public:
    // prevent constructor by default
    ResourceDrops& operator=(ResourceDrops const&);
    ResourceDrops(ResourceDrops const&);
    ResourceDrops();

public:
    // NOLINTBEGIN
    MCAPI ~ResourceDrops();

    // NOLINTEND
};
