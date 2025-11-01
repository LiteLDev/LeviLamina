#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/versionless/world/Pos.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"

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
        ::ll::TypedStorage<4, 12, ::Pos> mMin;
        ::ll::TypedStorage<2, 6, ::DensityVolume::Dimensions> mDimensions;
        ::ll::TypedStorage<8, 24, ::std::vector<float>> mBuffer;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 400, ::Bedrock::small_vector<::DensityAllocator::VolumeEntry, 8>> mEntries;
    // NOLINTEND

};
