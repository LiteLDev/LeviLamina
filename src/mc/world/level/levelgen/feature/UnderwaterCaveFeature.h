#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CaveFeature.h"

// auto generated forward declare list
// clang-format off
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class UnderwaterCaveFeature : public ::CaveFeature {
public:
    // prevent constructor by default
    UnderwaterCaveFeature& operator=(UnderwaterCaveFeature const&);
    UnderwaterCaveFeature(UnderwaterCaveFeature const&);
    UnderwaterCaveFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnderwaterCaveFeature() = default;

    // vIndex: 5
    virtual bool carveEllipsoidVolume(
        class IBlockWorldGenAPI&                            target,
        struct CaveFeatureUtils::CarverConfiguration const& configuration,
        class Random&                                       random,
        class ChunkPos const&                               pos,
        class Vec3 const&                                   startPos,
        class BoundingBox const&                            volume,
        float                                               rad,
        float                                               yRad,
        struct CaveFeatureUtils::CarvingParameters const&   carveValues
    ) const;

    MCAPI static bool isDiggable(class Block const& block);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool carveEllipsoidVolume$(
        class IBlockWorldGenAPI&                            target,
        struct CaveFeatureUtils::CarverConfiguration const& configuration,
        class Random&                                       random,
        class ChunkPos const&                               pos,
        class Vec3 const&                                   startPos,
        class BoundingBox const&                            volume,
        float                                               rad,
        float                                               yRad,
        struct CaveFeatureUtils::CarvingParameters const&   carveValues
    ) const;

    // NOLINTEND
};
