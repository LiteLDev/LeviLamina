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
    // vIndex: 0
    virtual ~ITickingAreaView();

    // vIndex: 1
    virtual void init(::Bounds const&, bool) = 0;

    // vIndex: 2
    virtual void tick(::Tick const&, ::BlockSource&, bool, bool) = 0;

    // vIndex: 3
    virtual void tickSeasons(::BlockSource&, ::Random&) = 0;

    // vIndex: 4
    virtual ::DimensionType getDimensionId() const = 0;

    // vIndex: 5
    virtual ::Bounds const& getBounds() const = 0;

    // vIndex: 6
    virtual bool isCircle() const = 0;

    // vIndex: 7
    virtual bool isDoneLoading() const = 0;

    // vIndex: 8
    virtual bool checkInitialLoadDone(::Tick) = 0;

    // vIndex: 9
    virtual bool checkLoadedChunkNeighborsDone(::BlockSource const&, bool) const = 0;

    // vIndex: 10
    virtual void move(::Bounds const&) = 0;

    // vIndex: 11
    virtual ::std::unique_ptr<::ChunkViewSource> createChildSource() = 0;

    // vIndex: 12
    virtual ::std::shared_ptr<::LevelChunk> getAvailableChunk(::ChunkPos const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
