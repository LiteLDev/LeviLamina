#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class Igloo : public ::ScatteredFeaturePiece {
public:
    // prevent constructor by default
    Igloo& operator=(Igloo const&);
    Igloo(Igloo const&);
    Igloo();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Igloo@@UEAA@XZ
    virtual ~Igloo() = default;

    // vIndex: 2, symbol: ?getType@Igloo@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@Igloo@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5, symbol: ?postProcessMobsAt@Igloo@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ??0Igloo@@QEAA@FHH@Z
    MCAPI Igloo(short seaLevel, int west, int north);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR@Igloo@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR;

    // symbol:
    // ?STRUCTURE_LOCATION_IGLOO_TRAPDOOR@Igloo@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_TRAPDOOR;

    // symbol: ?STRUCTURE_LOCATION_LABORATORY@Igloo@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STRUCTURE_LOCATION_LABORATORY;

    // symbol: ?STRUCTURE_LOCATION_LADDER@Igloo@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STRUCTURE_LOCATION_LADDER;

    // NOLINTEND
};
