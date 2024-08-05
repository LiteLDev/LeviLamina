#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CaveFeature.h"

// auto generated forward declare list
// clang-format off
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class NetherCaveFeature : public ::CaveFeature {
public:
    // prevent constructor by default
    NetherCaveFeature& operator=(NetherCaveFeature const&);
    NetherCaveFeature(NetherCaveFeature const&);
    NetherCaveFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherCaveFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 3
    virtual void
    addRoom(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>&)
        const;

    // vIndex: 4
    virtual void addTunnel(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, float, float, float, int, int, float, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>&)
        const;

    // vIndex: 6
    virtual void
    addFeature(class IBlockWorldGenAPI&, class ChunkPos const&, class Random&, class ChunkPos const&, class RenderParams&, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>&)
        const;

    // NOLINTEND
};
