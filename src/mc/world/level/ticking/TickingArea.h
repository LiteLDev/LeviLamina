#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/world/level/chunk/ChunkViewSource.h"
#include "mc/world/level/ticking/ITickingArea.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"
#include "mc/world/level/ticking/TickingAreaView.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Dimension;
class ITickingAreaView;
class LevelStorage;
class Random;
struct Bounds;
struct Tick;
struct TickingAreaDescription;
// clang-format on

class TickingArea : public ::ITickingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>              mUID;
    ::ll::TypedStorage<8, 32, ::std::string>            mName;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>           mEntityId;
    ::ll::TypedStorage<4, 4, float>                     mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                      mAlwaysActive;
    ::ll::TypedStorage<1, 1, bool>                      mEntityFound;
    ::ll::TypedStorage<1, 1, bool>                      mSizeChanged;
    ::ll::TypedStorage<1, 1, bool>                      mRemoved;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode>     mLoadMode;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mLastChunkUpdatePos;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mLastPos;
    ::ll::TypedStorage<4, 4, uint>                      mLastRadius;
    ::ll::TypedStorage<8, 504, ::ChunkViewSource>       mChunkSource;
    ::ll::TypedStorage<8, 16, ::WeakRef<::BlockSource>> mBlockSource;
    ::ll::TypedStorage<8, 32, ::TickingAreaView>        mView;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingArea();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickingArea() /*override*/;

    // vIndex: 1
    virtual ::mce::UUID const& getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 3
    virtual ::ActorUniqueID const& getEntityId() const /*override*/;

    // vIndex: 7
    virtual ::Bounds const& getBounds() const /*override*/;

    // vIndex: 4
    virtual bool isEntityOwned() const /*override*/;

    // vIndex: 8
    virtual bool isAlwaysActive() const /*override*/;

    // vIndex: 9
    virtual float getMaxDistToPlayers() const /*override*/;

    // vIndex: 11
    virtual ::ITickingAreaView const& getView() const /*override*/;

    // vIndex: 10
    virtual ::ITickingAreaView& getView() /*override*/;

    // vIndex: 6
    virtual ::WeakRef<::BlockSource> const getBlockSource() const /*override*/;

    // vIndex: 5
    virtual ::WeakRef<::BlockSource> getBlockSource() /*override*/;

    // vIndex: 12
    virtual ::TickingAreaDescription getDescription() const /*override*/;

    // vIndex: 13
    virtual ::TickingAreaLoadMode getLoadMode() const /*override*/;

    // vIndex: 14
    virtual void setLoadMode(::TickingAreaLoadMode loadMode, ::LevelStorage& levelStorage) /*override*/;

    // vIndex: 15
    virtual bool isPreloadDone() const /*override*/;

    // vIndex: 16
    virtual void tick(::Tick const& currentTick, bool randomize) /*override*/;

    // vIndex: 17
    virtual void tickSeasons(::Random& random) /*override*/;

    // vIndex: 18
    virtual void updatePosition(::Vec3 const& pos) /*override*/;

    // vIndex: 19
    virtual void updateAndCenter(::LevelStorage& levelStorage, ::Tick currentLevelTick) /*override*/;

    // vIndex: 20
    virtual ::Actor* findOwner(uchar& pendingChunks) /*override*/;

    // vIndex: 21
    virtual bool entityHasBeenFound() const /*override*/;

    // vIndex: 22
    virtual void setEntityFound() /*override*/;

    // vIndex: 23
    virtual bool isRemoved() /*override*/;

    // vIndex: 24
    virtual void remove(::LevelStorage& levelStorage) /*override*/;

    // vIndex: 25
    virtual void onComponentChanged(
        uint            radius,
        float           maxDistToPlayers,
        bool            alwaysActive,
        ::LevelStorage& levelStorage
    ) /*override*/;

    // vIndex: 26
    virtual void updateBlockSourceCurrentTick(::Tick const& currentTick) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TickingArea(
        ::Dimension&          dimension,
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::ActorUniqueID       entityId,
        ::Bounds const&       bounds,
        bool                  isCircle,
        float                 maxDistToPlayers,
        bool                  alwaysActive,
        ::TickingAreaLoadMode loadMode
    );

    MCAPI void _center(::LevelStorage& levelStorage);

    MCAPI void _save(::LevelStorage& levelStorage);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Dimension&          dimension,
        ::mce::UUID           uniqueId,
        ::std::string const&  name,
        ::ActorUniqueID       entityId,
        ::Bounds const&       bounds,
        bool                  isCircle,
        float                 maxDistToPlayers,
        bool                  alwaysActive,
        ::TickingAreaLoadMode loadMode
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
    MCFOLD ::mce::UUID const& $getId() const;

    MCFOLD ::std::string const& $getName() const;

    MCFOLD ::ActorUniqueID const& $getEntityId() const;

    MCAPI ::Bounds const& $getBounds() const;

    MCAPI bool $isEntityOwned() const;

    MCFOLD bool $isAlwaysActive() const;

    MCAPI float $getMaxDistToPlayers() const;

    MCFOLD ::ITickingAreaView const& $getView() const;

    MCFOLD ::ITickingAreaView& $getView();

    MCFOLD ::WeakRef<::BlockSource> const $getBlockSource() const;

    MCFOLD ::WeakRef<::BlockSource> $getBlockSource();

    MCAPI ::TickingAreaDescription $getDescription() const;

    MCAPI void $setLoadMode(::TickingAreaLoadMode loadMode, ::LevelStorage& levelStorage);

    MCAPI bool $isPreloadDone() const;

    MCAPI void $tick(::Tick const& currentTick, bool randomize);

    MCAPI void $tickSeasons(::Random& random);

    MCAPI void $updatePosition(::Vec3 const& pos);

    MCAPI void $updateAndCenter(::LevelStorage& levelStorage, ::Tick currentLevelTick);

    MCAPI ::Actor* $findOwner(uchar& pendingChunks);

    MCAPI bool $entityHasBeenFound() const;

    MCAPI void $setEntityFound();

    MCAPI bool $isRemoved();

    MCAPI void $remove(::LevelStorage& levelStorage);

    MCAPI void
    $onComponentChanged(uint radius, float maxDistToPlayers, bool alwaysActive, ::LevelStorage& levelStorage);

    MCAPI void $updateBlockSourceCurrentTick(::Tick const& currentTick);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
