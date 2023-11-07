#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class CaveFeature : public ::IFeature {
public:
    // CaveFeature inner types declare
    // clang-format off
    class CachedMetaData;
    // clang-format on

    // CaveFeature inner types define
    class CachedMetaData {
    public:
        // CachedMetaData inner types declare
        // clang-format off
        struct CarveEllipsoidParams;
        // clang-format on

        // CachedMetaData inner types define
        struct CarveEllipsoidParams {
        public:
            // prevent constructor by default
            CarveEllipsoidParams& operator=(CarveEllipsoidParams const&);
            CarveEllipsoidParams(CarveEllipsoidParams const&);
            CarveEllipsoidParams();
        };

    public:
        // prevent constructor by default
        CachedMetaData& operator=(CachedMetaData const&);
        CachedMetaData(CachedMetaData const&);
        CachedMetaData();
    };

public:
    // prevent constructor by default
    CaveFeature& operator=(CaveFeature const&);
    CaveFeature(CaveFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CaveFeature@@UEAA@XZ
    virtual ~CaveFeature();

    // vIndex: 1, symbol:
    // ?place@CaveFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@CaveFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // vIndex: 3, symbol:
    // ?addRoom@CaveFeature@@MEBAXAEAVIBlockWorldGenAPI@@AEBUCarverConfiguration@CaveFeatureUtils@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@AEAVRenderParams@@AEBUCarvingParameters@4@AEAV?$vector@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@V?$allocator@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@@std@@@std@@@Z
    virtual void
    addRoom(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>&)
        const;

    // vIndex: 4, symbol:
    // ?addTunnel@CaveFeature@@MEBAXAEAVIBlockWorldGenAPI@@AEBUCarverConfiguration@CaveFeatureUtils@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@MMMHHMAEAVRenderParams@@AEBUCarvingParameters@4@AEAV?$vector@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@V?$allocator@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@@std@@@std@@@Z
    virtual void addTunnel(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, float, float, float, int, int, float, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>&)
        const;

    // vIndex: 5, symbol:
    // ?carveEllipsoidVolume@CaveFeature@@MEBA_NAEAVIBlockWorldGenAPI@@AEBUCarverConfiguration@CaveFeatureUtils@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@AEBVBoundingBox@@MMAEBUCarvingParameters@4@@Z
    virtual bool
    carveEllipsoidVolume(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class BoundingBox const&, float, float, struct CaveFeatureUtils::CarvingParameters const&)
        const;

    // vIndex: 6, symbol:
    // ?addFeature@CaveFeature@@MEBAXAEAVIBlockWorldGenAPI@@AEBVChunkPos@@AEAVRandom@@1AEAVRenderParams@@AEAV?$vector@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@V?$allocator@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@@std@@@std@@@Z
    virtual void
    addFeature(class IBlockWorldGenAPI&, class ChunkPos const&, class Random&, class ChunkPos const&, class RenderParams&, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>&)
        const;

    // symbol: ??0CaveFeature@@QEAA@XZ
    MCAPI CaveFeature();

    // symbol: ?getWidthModifier@CaveFeature@@QEBAMAEAVRenderParams@@@Z
    MCAPI float getWidthModifier(class RenderParams&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?carveBlock@CaveFeature@@IEBA_NAEAVIBlockWorldGenAPI@@AEBUCarverConfiguration@CaveFeatureUtils@@VBlockPos@@PEA_N_NAEBVVec3@@HV5@@Z
    MCAPI bool carveBlock(
        class IBlockWorldGenAPI&,
        struct CaveFeatureUtils::CarverConfiguration const&,
        class BlockPos,
        bool*,
        bool,
        class Vec3 const&,
        int,
        class BlockPos
    ) const;

    // symbol:
    // ?carveEllipsoid@CaveFeature@@IEBA_NAEAVIBlockWorldGenAPI@@AEBUCarverConfiguration@CaveFeatureUtils@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@MMAEBUCarvingParameters@4@@Z
    MCAPI bool
    carveEllipsoid(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, float, float, struct CaveFeatureUtils::CarvingParameters const&)
        const;

    // symbol: ?detectWater@CaveFeature@@IEBA_NAEAVIBlockWorldGenAPI@@AEBVBoundingBox@@@Z
    MCAPI bool detectWater(class IBlockWorldGenAPI&, class BoundingBox const&) const;

    // symbol: ?shouldSkipCarving@CaveFeature@@KA_NMMMMM@Z
    MCAPI static bool shouldSkipCarving(float, float, float, float, float);

    // NOLINTEND
};
