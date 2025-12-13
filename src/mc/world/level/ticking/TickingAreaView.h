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
    virtual ~TickingAreaView() /*override*/;

    virtual void init(::Bounds const& bounds, bool isCircle) /*override*/;

    virtual void tick(::Tick const& currentTick, ::BlockSource& region, bool preload, bool randomize) /*override*/;

    virtual void tickSeasons(::BlockSource& region, ::Random& random) /*override*/;

    virtual ::DimensionType getDimensionId() const /*override*/;

    virtual ::Bounds const& getBounds() const /*override*/;

    virtual bool isCircle() const /*override*/;

    virtual bool isDoneLoading() const /*override*/;

    virtual bool checkInitialLoadDone(::Tick currentLevelTick) /*override*/;

    virtual bool checkLoadedChunkNeighborsDone(::BlockSource const& region, bool useDoneLoading) const /*override*/;

    virtual void move(::Bounds const& bounds) /*override*/;

    virtual ::std::unique_ptr<::ChunkViewSource> createChildSource() /*override*/;

    virtual ::std::shared_ptr<::LevelChunk> getAvailableChunk(::ChunkPos const& cp) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _tickChunk(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::Bounds const& bounds, bool isCircle);

    MCNAPI void $tick(::Tick const& currentTick, ::BlockSource& region, bool preload, bool randomize);

    MCNAPI void $tickSeasons(::BlockSource& region, ::Random& random);

    MCNAPI ::DimensionType $getDimensionId() const;

    MCNAPI ::Bounds const& $getBounds() const;

    MCNAPI bool $isCircle() const;

    MCNAPI bool $isDoneLoading() const;

    MCNAPI bool $checkInitialLoadDone(::Tick currentLevelTick);

    MCNAPI bool $checkLoadedChunkNeighborsDone(::BlockSource const& region, bool useDoneLoading) const;

    MCNAPI void $move(::Bounds const& bounds);

    MCNAPI ::std::unique_ptr<::ChunkViewSource> $createChildSource();

    MCNAPI ::std::shared_ptr<::LevelChunk> $getAvailableChunk(::ChunkPos const& cp);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
