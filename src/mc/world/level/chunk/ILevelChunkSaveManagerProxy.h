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

    virtual ::WeakRef<::Dimension> getRandomDimension(::DimensionManager&) const = 0;

    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Dimension&) const = 0;

    virtual ::std::shared_ptr<::LevelChunk> getChunk(::Dimension&, ::ChunkPos const&) const = 0;

    virtual bool doesNonActorDataInLevelChunkNeedSaving(::LevelChunk const&, int, int) const = 0;

    virtual bool doesLevelChunkNeedSaving(::LevelChunk const&, int, int) const = 0;

    virtual void saveLiveChunk(::Dimension&, ::LevelChunk&) = 0;

    virtual void queueTaskForChunkSave(::brstd::move_only_function<::TaskResult()>&&) = 0;

    virtual void startLeaveGame() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
