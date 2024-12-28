#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BannerPatternRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3d7479;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerPatternRegistry& operator=(BannerPatternRegistry const&);
    BannerPatternRegistry(BannerPatternRegistry const&);
    BannerPatternRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BannerPatternRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
