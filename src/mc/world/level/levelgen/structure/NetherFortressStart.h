#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class NetherFortressStart : public ::StructureStart {
public:
    // prevent constructor by default
    NetherFortressStart();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getStructureName() const /*override*/;

    virtual ~NetherFortressStart() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherFortressStart(::Random& random, short seaLevel, int chunkX, int chunkZ);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Random& random, short seaLevel, int chunkX, int chunkZ);
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
