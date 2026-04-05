#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class DimensionManager;
class LevelChunk;
class TaskResult;
// clang-format on

class ILevelChunkSaveManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelChunkSaveManagerProxy() = default;

    virtual ::WeakRef<::Dimension> getRandomDimension(::DimensionManager& dimensionManager) const = 0;

    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Dimension& dimension) const = 0;

    virtual ::std::shared_ptr<::LevelChunk> getChunk(::Dimension& dimension, ::ChunkPos const& chunkPos) const = 0;

    virtual bool doesNonActorDataInLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const = 0;

    virtual bool doesLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const = 0;

    virtual void saveLiveChunk(::Dimension& dimension, ::LevelChunk& levelChunk) = 0;

    virtual void queueTaskForChunkSave(::brstd::move_only_function<::TaskResult()>&& task) = 0;

    virtual void startLeaveGame() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
