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
    MCNAPI ~BannerPatternRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
