#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CaveFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BoundingBox;
class ChunkPos;
class IBlockWorldGenAPI;
class Random;
class Vec3;
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class UnderwaterCaveFeature : public ::CaveFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd4ebd0;
    // NOLINTEND

public:
    // prevent constructor by default
    UnderwaterCaveFeature& operator=(UnderwaterCaveFeature const&);
    UnderwaterCaveFeature(UnderwaterCaveFeature const&);
    UnderwaterCaveFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual bool carveEllipsoidVolume(
        ::IBlockWorldGenAPI&                           target,
        ::CaveFeatureUtils::CarverConfiguration const& configuration,
        ::Random&                                      random,
        ::ChunkPos const&                              chunkPos,
        ::Vec3 const&                                  startPos,
        ::BoundingBox const&                           volume,
        float                                          rad,
        float                                          yRad,
        ::CaveFeatureUtils::CarvingParameters const&   carvingParameters
    ) const /*override*/;

    // vIndex: 0
    virtual ~UnderwaterCaveFeature() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isDiggable(::Block const& block);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $carveEllipsoidVolume(
        ::IBlockWorldGenAPI&                           target,
        ::CaveFeatureUtils::CarverConfiguration const& configuration,
        ::Random&                                      random,
        ::ChunkPos const&                              chunkPos,
        ::Vec3 const&                                  startPos,
        ::BoundingBox const&                           volume,
        float                                          rad,
        float                                          yRad,
        ::CaveFeatureUtils::CarvingParameters const&   carvingParameters
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
