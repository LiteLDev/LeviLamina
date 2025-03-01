#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/spawn/EntityPredicateToken.h"
#include "mc/world/level/spawn/EntitySpawnReason.h"
#include "mc/world/level/spawn/HeightmapToken.h"
#include "mc/world/level/spawn/ObstructionPredicateToken.h"
#include "mc/world/level/spawn/PlacementTypeToken.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IRandom;
class Mob;
namespace br::spawn { class PlacementType; }
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
        ::ll::TypedStorage<8, 8, ::br::spawn::SpawnPlacements&> mParent;
        ::ll::TypedStorage<8, 8, uint64>                        mIdx;
        // NOLINTEND
    };

    struct EntityRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::br::spawn::HeightmapToken>            mHeightmap;
        ::ll::TypedStorage<2, 2, ::br::spawn::PlacementTypeToken>        mPlacement;
        ::ll::TypedStorage<2, 2, ::br::spawn::EntityPredicateToken>      mEntity;
        ::ll::TypedStorage<2, 2, ::br::spawn::ObstructionPredicateToken> mObstruction;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<::std::string, ::br::spawn::SpawnPlacements::EntityRecord>>>
        mEntityRecords;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::tuple<
            ::std::string,
            ::std::function<
                bool(::br::spawn::EntityType const&, ::BlockSource&, ::br::spawn::EntitySpawnReason&, ::BlockPos, ::IRandom&)>>>>
        mEntityPredicates;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::tuple<
            ::std::string,
            ::std::function<bool(::BlockSource&, ::Mob const&, ::br::spawn::EntityType const&)>>>>
        mObstructionPredicates;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<::std::string, ::std::function<bool(::Block const&)>>>>
        mHeightmapTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<::std::string, ::std::unique_ptr<::br::spawn::PlacementType>>>>
        mPlacementTypes;
    // NOLINTEND

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
