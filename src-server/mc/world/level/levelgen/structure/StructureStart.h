#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Random;
class StructurePiece;
// clang-format on

class StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox> boundingBox;
    ::ll::TypedStorage<4, 4, int> chunkX;
    ::ll::TypedStorage<4, 4, int> chunkZ;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StructurePiece>>> pieces;
    ::ll::TypedStorage<4, 4, int> maxYSpawnOffset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureStart();

    // vIndex: 1
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    // vIndex: 2
    virtual bool isValid() const;

    // vIndex: 3
    virtual int getMaxYSpawnOffset() const;

    // vIndex: 4
    virtual ::std::string_view getStructureName() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void calculateBoundingBox();
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

    MCFOLD bool $isValid() const;

    MCFOLD int $getMaxYSpawnOffset() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
