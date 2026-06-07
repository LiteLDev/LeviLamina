#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
namespace br::worldgen { class StructureCache; }
namespace br::worldgen { struct JigsawJunction; }
namespace br::worldgen { struct Rigid; }
// clang-format on

namespace br::worldgen {

class Beardifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::Rigid>>          mPieces;
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::JigsawJunction>> mJunctions;
    // NOLINTEND

public:
    // prevent constructor by default
    Beardifier& operator=(Beardifier const&);
    Beardifier(Beardifier const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Beardifier();

    MCAPI double compute(::BlockPos pos) const;

    MCFOLD bool empty() const;

    MCFOLD ::br::worldgen::Beardifier& operator=(::br::worldgen::Beardifier&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::Beardifier
    forStructuresInChunk(::br::worldgen::StructureCache const& structureCache, ::ChunkPos pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};

} // namespace br::worldgen
