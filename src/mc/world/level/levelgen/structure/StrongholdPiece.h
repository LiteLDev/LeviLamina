#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class StrongholdPiece : public ::StructurePiece {
public:
    // StrongholdPiece inner types define
    enum class SmallDoorType : int {
        Opening  = 0,
        WoodDoor = 1,
        Grates   = 2,
        IronDoor = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StrongholdPiece::SmallDoorType> entryDoor;
    // NOLINTEND
};
