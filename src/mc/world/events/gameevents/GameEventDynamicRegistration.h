#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class GameEventListener;
// clang-format on

class GameEventDynamicRegistration {
public:
    // GameEventDynamicRegistration inner types declare
    // clang-format off
    struct RegistrationLocation;
    // clang-format on

    // GameEventDynamicRegistration inner types define
    struct RegistrationLocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkPos>      mChunkPos;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameEventListener>>                        mListener;
    ::ll::TypedStorage<8, 80, ::std::optional<::gsl::final_action<::std::function<void()>>>> mRegistration;
    ::ll::TypedStorage<8, 24, ::std::optional<::GameEventDynamicRegistration::RegistrationLocation>>
        mRegistrationLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventDynamicRegistration();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GameEventDynamicRegistration(::std::shared_ptr<::GameEventListener> listener);

    MCAPI void _onActorChangedChunk(::BlockSource const& region, ::ChunkPos toChunkPos, ::DimensionType toDimensionId);

    MCAPI void onActorLoadedIntoChunk(::BlockSource const& region, ::ChunkPos chunkPos, ::DimensionType dimensionId);

    MCAPI void
    onActorMovedBetweenChunks(::BlockSource const& region, ::ChunkPos toChunkPos, ::DimensionType toDimensionId);

    MCAPI void onActorRemoved();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::GameEventListener> listener);
    // NOLINTEND
};
