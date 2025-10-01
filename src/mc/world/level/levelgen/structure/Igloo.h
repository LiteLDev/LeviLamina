#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
// clang-format on

class Igloo : public ::ScatteredFeaturePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnk4fd173;
    ::ll::UntypedStorage<4, 12>  mUnkc11f95;
    ::ll::UntypedStorage<4, 12>  mUnkb18b49;
    ::ll::UntypedStorage<4, 12>  mUnkf41f63;
    // NOLINTEND

public:
    // prevent constructor by default
    Igloo& operator=(Igloo const&);
    Igloo(Igloo const&);
    Igloo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::StructurePieceType getType() const /*override*/;

    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 5
    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 0
    virtual ~Igloo() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR();

    MCAPI static ::std::string const& STRUCTURE_LOCATION_IGLOO_TRAPDOOR();

    MCAPI static ::std::string const& STRUCTURE_LOCATION_LABORATORY();

    MCAPI static ::std::string const& STRUCTURE_LOCATION_LADDER();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::StructurePieceType $getType() const;

    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
