#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkBlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
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

    MCFOLD ::std::_List_const_iterator<::std::_List_val<
        ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>>
    begin() const;

    MCAPI ::std::pair<
        ::std::_List_const_iterator<::std::_List_val<
            ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>>,
        bool>
    emplace(::ChunkBlockPos pos, ::std::shared_ptr<::BlockActor> blockActor);

    MCFOLD ::std::_List_const_iterator<::std::_List_val<
        ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>>
    end() const;

    MCAPI uint64 erase(::ChunkBlockPos const& pos);

    MCAPI ::LevelChunkBlockActorStorage& operator=(::LevelChunkBlockActorStorage&& other);

#ifdef LL_PLAT_C
    MCFOLD ::std::unordered_set<::BlockPos> const& permanentRenderingLocations() const;
#endif

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
