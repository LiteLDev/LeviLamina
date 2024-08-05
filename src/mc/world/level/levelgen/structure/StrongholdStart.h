#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class StrongholdStart : public ::StructureStart {
public:
    // prevent constructor by default
    StrongholdStart& operator=(StrongholdStart const&);
    StrongholdStart(StrongholdStart const&);
    StrongholdStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StrongholdStart() = default;

    // vIndex: 2
    virtual bool isValid() const;

    MCAPI StrongholdStart(class Dimension& dimension, class Random& random, int chunkX, int chunkZ);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initializePieceSet(class Random& random);

    // NOLINTEND
};
