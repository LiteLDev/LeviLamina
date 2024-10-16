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
    // vIndex: 0
    virtual ~Igloo() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void postProcessMobsAt$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI static std::string const& STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR();

    MCAPI static std::string const& STRUCTURE_LOCATION_IGLOO_TRAPDOOR();

    MCAPI static std::string const& STRUCTURE_LOCATION_LABORATORY();

    MCAPI static std::string const& STRUCTURE_LOCATION_LADDER();

    // NOLINTEND
};
