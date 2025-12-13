#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DensityAllocator {
public:
    // DensityAllocator inner types declare
    // clang-format off
    struct VolumeEntry;
    // clang-format on

    // DensityAllocator inner types define
    struct VolumeEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkadc38c;
        ::ll::UntypedStorage<2, 6>  mUnk823348;
        ::ll::UntypedStorage<8, 24> mUnk24743a;
        // NOLINTEND

    public:
        // prevent constructor by default
        VolumeEntry& operator=(VolumeEntry const&);
        VolumeEntry(VolumeEntry const&);
        VolumeEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 400> mUnka52489;
    // NOLINTEND

public:
    // prevent constructor by default
    DensityAllocator& operator=(DensityAllocator const&);
    DensityAllocator(DensityAllocator const&);
    DensityAllocator();
};
