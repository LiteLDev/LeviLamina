#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class LevelChunk;
class Random;
// clang-format on

class SwamplandHut : public ::ScatteredFeaturePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mSpawnedWitch;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) /*override*/;

    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
