#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/ticking/ITickingAreaView.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class ChunkSource;
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
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>> mTickingArea;
    ::ll::TypedStorage<4, 4, uint>                                  mPolicyHandle;
    ::ll::TypedStorage<1, 1, bool>                                  mInfluenceDirty;
    ::ll::TypedStorage<1, 1, bool>                                  mDoneLoading;
    // NOLINTEND

public:
    // prevent constructor by default
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
    MCAPI explicit TickingAreaView(::ChunkSource& parent);

    MCAPI bool _tickChunk(
        ::Tick const&                  currentTick,
        ::BlockSource&                 region,
        ::Level&                       level,
        ::ChunkPos const&              cp,
        ::LevelChunkTicking::Registry* registry
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkSource& parent);
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
