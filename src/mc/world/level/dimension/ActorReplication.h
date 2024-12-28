#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class Level;
class WeakEntityRef;
// clang-format on

class ActorReplication {
public:
    // ActorReplication inner types declare
    // clang-format off
    struct PlayerAtChunk;
    // clang-format on

    // ActorReplication inner types define
    struct PlayerAtChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkab1853;
        ::ll::UntypedStorage<2, 2> mUnk604313;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerAtChunk& operator=(PlayerAtChunk const&);
        PlayerAtChunk(PlayerAtChunk const&);
        PlayerAtChunk();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb1760f;
    ::ll::UntypedStorage<8, 24> mUnke615be;
    ::ll::UntypedStorage<8, 24> mUnkb223ac;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorReplication& operator=(ActorReplication const&);
    ActorReplication(ActorReplication const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorReplication();

    MCAPI void processReplicationForPlayers(
        ::std::vector<::WeakEntityRef> const& playerList,
        ::Level const&                        level,
        ::ChunkSource&                        chunkSource
    );

    MCAPI ~ActorReplication();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
