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
    // prevent constructor by default
    ILevelChunkSaveManagerProxy& operator=(ILevelChunkSaveManagerProxy const&);
    ILevelChunkSaveManagerProxy(ILevelChunkSaveManagerProxy const&);
    ILevelChunkSaveManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelChunkSaveManagerProxy();

    // vIndex: 1
    virtual ::WeakRef<::Dimension> getRandomDimension(::DimensionManager&) const = 0;

    // vIndex: 2
    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Dimension&) const = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::LevelChunk> getChunk(::Dimension&, ::ChunkPos const&) const = 0;

    // vIndex: 4
    virtual bool doesNonActorDataInLevelChunkNeedSaving(::LevelChunk const&, int, int) const = 0;

    // vIndex: 5
    virtual bool doesLevelChunkNeedSaving(::LevelChunk const&, int, int) const = 0;

    // vIndex: 6
    virtual void saveLiveChunk(::Dimension&, ::LevelChunk&) = 0;

    // vIndex: 7
    virtual void queueTaskForChunkSave(::brstd::move_only_function<::TaskResult()>&&) = 0;

    // vIndex: 8
    virtual void startLeaveGame() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
