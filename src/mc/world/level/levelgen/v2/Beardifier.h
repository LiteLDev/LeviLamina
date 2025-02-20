#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { class StructureCache; }
// clang-format on

namespace br::worldgen {

class Beardifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk81b59c;
    ::ll::UntypedStorage<8, 24> mUnke6bbab;
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
