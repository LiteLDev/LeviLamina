#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BannerPatternRegistry {
public:
    // prevent constructor by default
    BannerPatternRegistry& operator=(BannerPatternRegistry const&);
    BannerPatternRegistry(BannerPatternRegistry const&);
    BannerPatternRegistry();

public:
    // NOLINTBEGIN
    MCAPI ~BannerPatternRegistry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
