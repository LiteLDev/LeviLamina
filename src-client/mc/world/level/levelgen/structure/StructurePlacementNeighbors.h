#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructureBlockPlacementInfo;
struct NeighborBlockDirections;
// clang-format on

struct StructurePlacementNeighbors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mNorth;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mSouth;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mEast;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mWest;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mUp;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mDown;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mNorthUpDiagonal;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mNorthDownDiagonal;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mSouthUpDiagonal;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mSouthDownDiagonal;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mEastUpDiagonal;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mEastDownDiagonal;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mWestUpDiagonal;
    ::ll::TypedStorage<8, 8, ::StructureBlockPlacementInfo const&> mWestDownDiagonal;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePlacementNeighbors& operator=(StructurePlacementNeighbors const&);
    StructurePlacementNeighbors(StructurePlacementNeighbors const&);
    StructurePlacementNeighbors();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::NeighborBlockDirections getDirectionsFromExistingBlockToStructure() const;

    MCAPI ::NeighborBlockDirections getDirectionsFromStructureToExistingBlock() const;
    // NOLINTEND
};
