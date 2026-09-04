#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/level/chunk/ILevelChunkSaveManagerProxy.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class DimensionManager;
class LevelChunk;
class Random;
class TaskGroup;
class TaskResult;
// clang-format on

class LevelChunkSaveManagerProxy : public ::ILevelChunkSaveManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Random&>                                       mRandom;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkSaveManagerProxy& operator=(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelChunkSaveManagerProxy() /*override*/ = default;

    virtual ::WeakRef<::Dimension> getRandomDimension(::DimensionManager& dimensionManager) const /*override*/;

    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Dimension& dimension) const /*override*/;

    virtual ::std::shared_ptr<::LevelChunk> getChunk(::Dimension& dimension, ::ChunkPos const& chunkPos) const
        /*override*/;

    virtual bool doesNonActorDataInLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const /*override*/;

    virtual bool doesLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const /*override*/;

    virtual void saveLiveChunk(::Dimension& dimension, ::LevelChunk& levelChunk) /*override*/;

    virtual void queueTaskForChunkSave(::brstd::move_only_function<::TaskResult()>&& task) /*override*/;

    virtual void startLeaveGame() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::WeakRef<::Dimension> $getRandomDimension(::DimensionManager& dimensionManager) const;

    MCAPI ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Dimension& dimension) const;

    MCAPI ::std::shared_ptr<::LevelChunk> $getChunk(::Dimension& dimension, ::ChunkPos const& chunkPos) const;

    MCAPI bool $doesNonActorDataInLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const;

    MCAPI bool $doesLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const;

    MCAPI void $saveLiveChunk(::Dimension& dimension, ::LevelChunk& levelChunk);

    MCAPI void $queueTaskForChunkSave(::brstd::move_only_function<::TaskResult()>&& task);

    MCAPI void $startLeaveGame();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
