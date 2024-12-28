#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Random;
// clang-format on

class OceanRuinStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkaab8dc;
    // NOLINTEND

public:
    // prevent constructor by default
    OceanRuinStart& operator=(OceanRuinStart const&);
    OceanRuinStart(OceanRuinStart const&);
    OceanRuinStart();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::std::string_view getStructureName() const /*override*/;

    // vIndex: 0
    virtual ~OceanRuinStart() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void createRuin(::Dimension& dim, ::Random& random, int x, int z);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getStructureName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
