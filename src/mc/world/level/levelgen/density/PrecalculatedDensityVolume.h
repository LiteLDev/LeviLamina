#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/world/level/levelgen/density/DensityCalculators.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"

class PrecalculatedDensityVolume {
public:
    // PrecalculatedDensityVolume inner types declare
    // clang-format off
    struct DensityResults;
    // clang-format on

    // PrecalculatedDensityVolume inner types define
    struct DensityResults {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<float>>             mValueStorage;
        ::ll::TypedStorage<8, 64, ::std::optional<::DensityVolume>> mDensityVolume;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::DensityCalculators> mDensityCalculators;
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::InstancedThreadLocal<
            ::PrecalculatedDensityVolume::DensityResults,
            ::std::allocator<::PrecalculatedDensityVolume::DensityResults>>>
        mLocalResults;
    // NOLINTEND
};
