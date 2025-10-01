#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/ticking/ITickingAreaView.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class Level;
class LevelChunk;
class Random;
struct Bounds;
struct Tick;
namespace LevelChunkTicking { struct Registry; }
// clang-format on

class TickingAreaView : public ::ITickingAreaView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1b328e;
    ::ll::UntypedStorage<4, 4>  mUnk941c0e;
    ::ll::UntypedStorage<1, 1>  mUnkd4a7b3;
    ::ll::UntypedStorage<1, 1>  mUnk632aaa;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreaView& operator=(TickingAreaView const&);
    TickingAreaView(TickingAreaView const&);
    TickingAreaView();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickingAreaView() /*override*/;

    // vIndex: 1
    virtual void init(::Bounds const& bounds, bool isCircle) /*override*/;

    // vIndex: 2
    virtual void tick(::Tick const& currentTick, ::BlockSource& region, bool preload, bool randomize) /*override*/;

    // vIndex: 3
    virtual void tickSeasons(::BlockSource& region, ::Random& random) /*override*/;

    // vIndex: 4
    virtual ::DimensionType getDimensionId() const /*override*/;

    // vIndex: 5
    virtual ::Bounds const& getBounds() const /*override*/;

    // vIndex: 6
    virtual bool isCircle() const /*override*/;

    // vIndex: 7
    virtual bool isDoneLoading() const /*override*/;

    // vIndex: 8
    virtual bool checkInitialLoadDone(::Tick currentLevelTick) /*override*/;

    // vIndex: 9
    virtual bool checkLoadedChunkNeighborsDone(::BlockSource const& region, bool useDoneLoading) const /*override*/;

    // vIndex: 10
    virtual void move(::Bounds const& bounds) /*override*/;

    // vIndex: 11
    virtual ::std::unique_ptr<::ChunkViewSource> createChildSource() /*override*/;

    // vIndex: 12
    virtual ::std::shared_ptr<::LevelChunk> getAvailableChunk(::ChunkPos const& cp) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _tickChunk(
        ::Tick const&                  currentTick,
        ::BlockSource&                 region,
        ::Level&                       level,
        ::ChunkPos const&              cp,
        ::LevelChunkTicking::Registry* registry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::Bounds const& bounds, bool isCircle);

    MCAPI void $tick(::Tick const& currentTick, ::BlockSource& region, bool preload, bool randomize);

    MCAPI void $tickSeasons(::BlockSource& region, ::Random& random);

    MCAPI ::DimensionType $getDimensionId() const;

    MCAPI ::Bounds const& $getBounds() const;

    MCAPI bool $isCircle() const;

    MCAPI bool $isDoneLoading() const;

    MCAPI bool $checkInitialLoadDone(::Tick currentLevelTick);

    MCAPI bool $checkLoadedChunkNeighborsDone(::BlockSource const& region, bool useDoneLoading) const;

    MCAPI void $move(::Bounds const& bounds);

    MCAPI ::std::unique_ptr<::ChunkViewSource> $createChildSource();

    MCAPI ::std::shared_ptr<::LevelChunk> $getAvailableChunk(::ChunkPos const& cp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
