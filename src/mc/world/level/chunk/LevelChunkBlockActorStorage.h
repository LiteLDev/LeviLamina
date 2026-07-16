#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkBlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class IVanillaRenderBlockActorComponent;
class IVanillaTickBlockActorComponent;
// clang-format on

class LevelChunkBlockActorStorage {
public:
    // LevelChunkBlockActorStorage inner types declare
    // clang-format off
    struct VanillaTickBlockActorComponent;
    // clang-format on

    // LevelChunkBlockActorStorage inner types define
    enum class TrackingMode : int {
        None                = 0,
        PermanentlyRendered = 1,
    };

    struct VanillaTickBlockActorComponent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 4, ::ChunkBlockPos>                    mChunkBlockPos;
        ::ll::TypedStorage<8, 8, ::IVanillaTickBlockActorComponent*> mComponent;
        // NOLINTEND
    };

    using sub_type = ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mTrackPermanentlyRendered;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>> mMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::IVanillaRenderBlockActorComponent*>>>
                                                                mVanillaRenderBlockActorComponents;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockPos>> mPermanentRenderingLocations;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunkBlockActorStorage::VanillaTickBlockActorComponent>>
        mVanillaTickBlockActorComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkBlockActorStorage& operator=(LevelChunkBlockActorStorage const&);
    LevelChunkBlockActorStorage(LevelChunkBlockActorStorage const&);
    LevelChunkBlockActorStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::pair<
        ::std::_List_const_iterator<::std::_List_val<
            ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>>,
        bool>
    emplace(::ChunkBlockPos pos, ::std::shared_ptr<::BlockActor> blockActor);

    MCAPI ::std::_List_const_iterator<::std::_List_val<
        ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>>
    erase(
        ::std::_List_const_iterator<::std::_List_val<
            ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>> ite
    );

    MCAPI ::LevelChunkBlockActorStorage& operator=(::LevelChunkBlockActorStorage&& other);

    MCAPI ~LevelChunkBlockActorStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
