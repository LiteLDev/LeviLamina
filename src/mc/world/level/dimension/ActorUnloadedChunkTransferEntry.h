#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkKey.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct ActorUnloadedChunkTransferEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 12, ::ChunkKey>                      mFromChunkKey;
    ::ll::TypedStorage<8, 32, ::std::string>                   mActorStorageKey;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mActorTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUnloadedChunkTransferEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorUnloadedChunkTransferEntry(
        ::ChunkKey&                      fromChunkKey,
        ::std::string&                   actorStorageKey,
        ::std::unique_ptr<::CompoundTag> actorTag
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ChunkKey& fromChunkKey, ::std::string& actorStorageKey, ::std::unique_ptr<::CompoundTag> actorTag);
    // NOLINTEND
};
