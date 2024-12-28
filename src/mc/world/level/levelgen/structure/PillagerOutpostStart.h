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

class PillagerOutpostStart : public ::StructureStart {
public:
    // prevent constructor by default
    PillagerOutpostStart& operator=(PillagerOutpostStart const&);
    PillagerOutpostStart(PillagerOutpostStart const&);
    PillagerOutpostStart();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 3
    virtual int getMaxYSpawnOffset() const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getStructureName() const /*override*/;

    // vIndex: 0
    virtual ~PillagerOutpostStart() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void createOutpost(::Dimension& dim, ::Random& random, int x, int z);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI int $getMaxYSpawnOffset() const;

    MCAPI ::std::string_view $getStructureName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
