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
    // symbol: ??0Beardifier@worldgen@br@@QEAA@XZ
    MCAPI Beardifier();

    // symbol: ?compute@Beardifier@worldgen@br@@QEBANVBlockPos@@@Z
    MCAPI double compute(class BlockPos) const;

    // symbol: ?empty@Beardifier@worldgen@br@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ??4Beardifier@worldgen@br@@QEAAAEAV012@$$QEAV012@@Z
    MCAPI class br::worldgen::Beardifier& operator=(class br::worldgen::Beardifier&&);

    // symbol: ??1Beardifier@worldgen@br@@QEAA@XZ
    MCAPI ~Beardifier();

    // symbol: ?forStructuresInChunk@Beardifier@worldgen@br@@SA?AV123@AEBVStructureCache@23@VChunkPos@@@Z
    MCAPI static class br::worldgen::Beardifier
    forStructuresInChunk(class br::worldgen::StructureCache const&, class ChunkPos);

    // NOLINTEND
};

}; // namespace br::worldgen
