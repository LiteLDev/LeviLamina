#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Random;
// clang-format on

class BuriedTreasureStart : public ::StructureStart {
public:
    // prevent constructor by default
    BuriedTreasureStart();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getStructureName() const /*override*/;

    virtual ~BuriedTreasureStart() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BuriedTreasureStart(::Dimension& generator, ::Random& random, int chunkX, int chunkZ);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension& generator, ::Random& random, int chunkX, int chunkZ);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getStructureName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
