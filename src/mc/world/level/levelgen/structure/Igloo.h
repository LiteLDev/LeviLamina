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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~Igloo() = default;

    // vIndex: 2, symbol: ?getType@Igloo@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@Igloo@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 5, symbol: ?postProcessMobsAt@Igloo@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND

private:
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

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR() { return STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR; }

    static auto& $STRUCTURE_LOCATION_IGLOO_TRAPDOOR() { return STRUCTURE_LOCATION_IGLOO_TRAPDOOR; }

    static auto& $STRUCTURE_LOCATION_LABORATORY() { return STRUCTURE_LOCATION_LABORATORY; }

    static auto& $STRUCTURE_LOCATION_LADDER() { return STRUCTURE_LOCATION_LADDER; }

    // NOLINTEND
};
