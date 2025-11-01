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
    ::ll::TypedStorage<8, 8, ::Block const*> mAirReplacementBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual bool carveEllipsoidVolume(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const&, ::Random& random, ::ChunkPos const& pos, ::Vec3 const& startPos, ::BoundingBox const& volume, float rad, float yRad, ::CaveFeatureUtils::CarvingParameters const& carveValues) const /*override*/;

    // vIndex: 0
    virtual ~UnderwaterCaveFeature() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isDiggable(::Block const& block);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $carveEllipsoidVolume(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const&, ::Random& random, ::ChunkPos const& pos, ::Vec3 const& startPos, ::BoundingBox const& volume, float rad, float yRad, ::CaveFeatureUtils::CarvingParameters const& carveValues) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
