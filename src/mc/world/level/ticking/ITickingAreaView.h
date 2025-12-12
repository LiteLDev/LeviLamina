#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class LevelChunk;
class Random;
struct Bounds;
struct Tick;
// clang-format on

class ITickingAreaView {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITickingAreaView();

    virtual void init(::Bounds const&, bool) = 0;

    virtual void tick(::Tick const&, ::BlockSource&, bool, bool) = 0;

    virtual void tickSeasons(::BlockSource&, ::Random&) = 0;

    virtual ::DimensionType getDimensionId() const = 0;

    virtual ::Bounds const& getBounds() const = 0;

    virtual bool isCircle() const = 0;

    virtual bool isDoneLoading() const = 0;

    virtual bool checkInitialLoadDone(::Tick) = 0;

    virtual bool checkLoadedChunkNeighborsDone(::BlockSource const&, bool) const = 0;

    virtual void move(::Bounds const&) = 0;

    virtual ::std::unique_ptr<::ChunkViewSource> createChildSource() = 0;

    virtual ::std::shared_ptr<::LevelChunk> getAvailableChunk(::ChunkPos const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
