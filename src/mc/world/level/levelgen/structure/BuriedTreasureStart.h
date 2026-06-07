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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BuriedTreasureStart(::Dimension& x, ::Random& z, int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& x, ::Random& z, int, int);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getStructureName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
