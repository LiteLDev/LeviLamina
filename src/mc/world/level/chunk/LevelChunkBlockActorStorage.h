#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class ChunkBlockPos;
// clang-format on

class LevelChunkBlockActorStorage {
public:
    // LevelChunkBlockActorStorage inner types define
    enum class TrackingMode : int {
        None                = 0,
        PermanentlyRendered = 1,
    };

    using sub_type = ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mTrackPermanentlyRendered;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>> mMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockPos>> mPermanentRenderingLocations;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkBlockActorStorage& operator=(LevelChunkBlockActorStorage const&);
    LevelChunkBlockActorStorage(LevelChunkBlockActorStorage const&);
    LevelChunkBlockActorStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LevelChunkBlockActorStorage(::LevelChunkBlockActorStorage::TrackingMode trackingMode);

    MCAPI ::std::pair<
        ::std::_List_const_iterator<::std::_List_val<
            ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>>,
        bool>
    emplace(::ChunkBlockPos pos, ::std::shared_ptr<::BlockActor> blockActor);

    MCAPI ::std::_List_const_iterator<::std::_List_val<
        ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>>
    find(::ChunkBlockPos const& pos) const;

    MCAPI ::LevelChunkBlockActorStorage& operator=(::LevelChunkBlockActorStorage&& other);

    MCAPI ~LevelChunkBlockActorStorage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelChunkBlockActorStorage::TrackingMode trackingMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
