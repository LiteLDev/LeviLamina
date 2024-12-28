#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::spawn {

class SpawnPlacements {
public:
    // SpawnPlacements inner types declare
    // clang-format off
    struct EntityRecord;
    class PlacementRecord;
    // clang-format on

    // SpawnPlacements inner types define
    class PlacementRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk721584;
        ::ll::UntypedStorage<8, 8> mUnkfbd3cc;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlacementRecord& operator=(PlacementRecord const&);
        PlacementRecord(PlacementRecord const&);
        PlacementRecord();
    };

    struct EntityRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk1610da;
        ::ll::UntypedStorage<2, 2> mUnk11b430;
        ::ll::UntypedStorage<2, 2> mUnkd06401;
        ::ll::UntypedStorage<2, 2> mUnk85589a;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntityRecord& operator=(EntityRecord const&);
        EntityRecord(EntityRecord const&);
        EntityRecord();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk94afb8;
    ::ll::UntypedStorage<8, 24> mUnkdbc747;
    ::ll::UntypedStorage<8, 24> mUnk979594;
    ::ll::UntypedStorage<8, 24> mUnkbcbe53;
    ::ll::UntypedStorage<8, 24> mUnkc2c742;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnPlacements& operator=(SpawnPlacements const&);
    SpawnPlacements(SpawnPlacements const&);
    SpawnPlacements();
};

} // namespace br::spawn
