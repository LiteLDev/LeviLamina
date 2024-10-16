#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class VillageStart : public ::StructureStart {
public:
    // prevent constructor by default
    VillageStart& operator=(VillageStart const&);
    VillageStart(VillageStart const&);
    VillageStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VillageStart() = default;

    // vIndex: 2
    virtual bool isValid() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool isValid$() const;

    // NOLINTEND
};
