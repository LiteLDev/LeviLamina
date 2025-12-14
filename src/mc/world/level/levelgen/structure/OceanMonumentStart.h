#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Dimension;
class Random;
// clang-format on

class OceanMonumentStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> isCreated;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual ::std::string_view getStructureName() const /*override*/;

    virtual ~OceanMonumentStart() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void createMonument(::Dimension& dim, ::Random& random, int x, int z);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI ::std::string_view $getStructureName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
