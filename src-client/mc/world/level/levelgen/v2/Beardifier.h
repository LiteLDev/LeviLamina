#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    Beardifier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::br::worldgen::Beardifier& operator=(::br::worldgen::Beardifier&&);

    MCAPI ~Beardifier();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::Beardifier
    forStructuresInChunk(::br::worldgen::StructureCache const& structureCache, ::ChunkPos pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
