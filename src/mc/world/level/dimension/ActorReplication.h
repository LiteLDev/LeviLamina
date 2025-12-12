#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class Level;
class ServerPlayer;
class WeakEntityRef;
// clang-format on

class ActorReplication {
public:
    // ActorReplication inner types declare
    // clang-format off
    struct PlayerAtChunk;
    // clang-format on

    // ActorReplication inner types define
    using PlayerIndex = ushort;

    struct PlayerAtChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkPos> mChunkPos;
        ::ll::TypedStorage<2, 2, ushort>     mPlayerIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::vector<ushort>>> mPlayersAtChunks;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorReplication::PlayerAtChunk>>        mPlayerInterestMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::ServerPlayer*>>>         mUnwrappedPlayerList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void processReplicationForPlayers(
        ::std::vector<::WeakEntityRef> const& playerList,
        ::Level const&                        level,
        ::ChunkSource&                        chunkSource
    );

    MCAPI ~ActorReplication();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
