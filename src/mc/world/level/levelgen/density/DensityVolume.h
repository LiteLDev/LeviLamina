#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DensityVolume {
public:
    // DensityVolume inner types declare
    // clang-format off
    struct Dimensions;
    // clang-format on

    // DensityVolume inner types define
    struct Dimensions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnkfcd293;
        ::ll::UntypedStorage<2, 2> mUnkb04a74;
        ::ll::UntypedStorage<2, 2> mUnk19f5bc;
        // NOLINTEND

    public:
        // prevent constructor by default
        Dimensions& operator=(Dimensions const&);
        Dimensions(Dimensions const&);
        Dimensions();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9bef5a;
    ::ll::UntypedStorage<2, 6>  mUnk8adae8;
    ::ll::UntypedStorage<8, 16> mUnk56307f;
    ::ll::UntypedStorage<8, 8>  mUnkcfccc2;
    // NOLINTEND

public:
    // prevent constructor by default
    DensityVolume& operator=(DensityVolume const&);
    DensityVolume(DensityVolume const&);
    DensityVolume();
};
