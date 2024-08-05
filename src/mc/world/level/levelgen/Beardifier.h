#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
namespace br::worldgen { class StructureCache; }
// clang-format on

namespace br::worldgen {

class Beardifier {
public:
    // prevent constructor by default
    Beardifier& operator=(Beardifier const&);
    Beardifier(Beardifier const&);

public:
    // NOLINTBEGIN
    MCAPI Beardifier();

    MCAPI double compute(class BlockPos) const;

    MCAPI bool empty() const;

    MCAPI class br::worldgen::Beardifier& operator=(class br::worldgen::Beardifier&&);

    MCAPI ~Beardifier();

    MCAPI static class br::worldgen::Beardifier
    forStructuresInChunk(class br::worldgen::StructureCache const&, class ChunkPos);

    // NOLINTEND
};

}; // namespace br::worldgen
