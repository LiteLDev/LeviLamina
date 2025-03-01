#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IRandom;
class Random;
namespace br::worldgen { struct JigsawJunction; }
namespace br::worldgen { struct Rigid; }
// clang-format on

namespace br::worldgen {

class StructureSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox> mBoundingBox;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureSection() = default;

    // vIndex: 1
    virtual void appendJunctions(::BoundingBox const&, ::std::vector<::br::worldgen::JigsawJunction>&) = 0;

    // vIndex: 2
    virtual void appendRigid(::br::worldgen::TerrainAdjustment::Type, ::std::vector<::br::worldgen::Rigid>&) = 0;

    // vIndex: 4
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) const = 0;

    // vIndex: 3
    virtual bool
    postProcess(::BlockSource&, ::IRandom&, ::BlockPos, ::BoundingBox const&, ::br::worldgen::JigsawReplacement)
        const = 0;

    // vIndex: 5
    virtual void placeEntities(::BlockSource&, ::BoundingBox const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
