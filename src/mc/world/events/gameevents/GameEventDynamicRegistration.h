#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class Dimension;
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
        ::ll::UntypedStorage<8, 8> mUnkb13385;
        ::ll::UntypedStorage<4, 4> mUnk19607c;
        // NOLINTEND

    public:
        // prevent constructor by default
        RegistrationLocation& operator=(RegistrationLocation const&);
        RegistrationLocation(RegistrationLocation const&);
        RegistrationLocation();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8f06db;
    ::ll::UntypedStorage<8, 80> mUnk5249aa;
    ::ll::UntypedStorage<8, 24> mUnk126351;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventDynamicRegistration& operator=(GameEventDynamicRegistration const&);
    GameEventDynamicRegistration(GameEventDynamicRegistration const&);
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
