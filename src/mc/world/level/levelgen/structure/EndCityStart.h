#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class EndCityStart : public ::StructureStart {
public:
    // prevent constructor by default
    EndCityStart& operator=(EndCityStart const&);
    EndCityStart(EndCityStart const&);
    EndCityStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndCityStart() = default;

    // vIndex: 2
    virtual bool isValid() const;

    MCAPI static int getYPositionForFeature(class ChunkPos const& pos, class Dimension& dimension);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool isValid$() const;

    // NOLINTEND
};
