#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/spawn/EntityPredicateToken.h"
#include "mc/world/level/spawn/EntitySpawnReason.h"
#include "mc/world/level/spawn/HeightmapToken.h"
#include "mc/world/level/spawn/PlacementTypeToken.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
namespace br::spawn { struct EntityType; }
// clang-format on

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
    ::ll::UntypedStorage<8, 24> mUnk5032c7;
    ::ll::UntypedStorage<8, 24> mUnkbcbe53;
    ::ll::UntypedStorage<8, 24> mUnkc2c742;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnPlacements& operator=(SpawnPlacements const&);
    SpawnPlacements(SpawnPlacements const&);
    SpawnPlacements();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::br::spawn::SpawnPlacements::PlacementRecord record(
        ::std::string_view                typeId,
        ::br::spawn::PlacementTypeToken   placementType,
        ::br::spawn::HeightmapToken       heightmap,
        ::br::spawn::EntityPredicateToken spawnPlacement
    );

    MCAPI ::br::spawn::EntityPredicateToken record(
        ::std::string_view key,
        ::std::function<
            bool(::br::spawn::EntityType const&, ::BlockSource&, ::br::spawn::EntitySpawnReason&, ::BlockPos, ::IRandom&)>
            predicate
    );

    MCAPI ~SpawnPlacements();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::spawn
