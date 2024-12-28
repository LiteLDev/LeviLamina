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
class ChunkPos;
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
    ::ll::UntypedStorage<4, 24> mUnk14b55e;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureSection& operator=(StructureSection const&);
    StructureSection(StructureSection const&);
    StructureSection();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureSection();

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
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StructureSection(::BoundingBox bb);

    MCAPI ::BoundingBox const& boundingBox() const;

    MCAPI bool isNearChunk(::ChunkPos pos, int distance) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BoundingBox bb);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
