#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/ticking/ITickingArea.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Dimension;
class ITickingAreaView;
class LevelStorage;
class Random;
class Vec3;
struct ActorUniqueID;
struct Bounds;
struct Tick;
struct TickingAreaDescription;
namespace mce { class UUID; }
// clang-format on

class TickingArea : public ::ITickingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk258e19;
    ::ll::UntypedStorage<8, 32>  mUnk96bfbb;
    ::ll::UntypedStorage<8, 8>   mUnk4f0f94;
    ::ll::UntypedStorage<4, 4>   mUnk571af3;
    ::ll::UntypedStorage<1, 1>   mUnk47dac5;
    ::ll::UntypedStorage<1, 1>   mUnk8c189f;
    ::ll::UntypedStorage<1, 1>   mUnk915919;
    ::ll::UntypedStorage<1, 1>   mUnk533591;
    ::ll::UntypedStorage<1, 1>   mUnkb9fc72;
    ::ll::UntypedStorage<4, 12>  mUnk7fbfd4;
    ::ll::UntypedStorage<4, 12>  mUnkada27f;
    ::ll::UntypedStorage<4, 4>   mUnk61917d;
    ::ll::UntypedStorage<8, 504> mUnk2afc18;
    ::ll::UntypedStorage<8, 16>  mUnk532ae4;
    ::ll::UntypedStorage<8, 32>  mUnk1f026f;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingArea& operator=(TickingArea const&);
    TickingArea(TickingArea const&);
    TickingArea();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickingArea() /*override*/;

    virtual ::mce::UUID const& getId() const /*override*/;

    virtual ::std::string const& getName() const /*override*/;

    virtual ::ActorUniqueID const& getEntityId() const /*override*/;

    virtual ::Bounds const& getBounds() const /*override*/;

    virtual bool isEntityOwned() const /*override*/;

    virtual bool isAlwaysActive() const /*override*/;

    virtual float getMaxDistToPlayers() const /*override*/;

    virtual ::ITickingAreaView const& getView() const /*override*/;

    virtual ::ITickingAreaView& getView() /*override*/;

    virtual ::WeakRef<::BlockSource> const getBlockSource() const /*override*/;

    virtual ::WeakRef<::BlockSource> getBlockSource() /*override*/;

    virtual ::TickingAreaDescription getDescription() const /*override*/;

    virtual ::TickingAreaLoadMode getLoadMode() const /*override*/;

    virtual void setLoadMode(::TickingAreaLoadMode loadMode, ::LevelStorage& levelStorage) /*override*/;

    virtual bool isPreloadDone() const /*override*/;

    virtual void tick(::Tick const& currentTick, bool randomize) /*override*/;

    virtual void tickSeasons(::Random& random) /*override*/;

    virtual void updatePosition(::Vec3 const& pos) /*override*/;

    virtual void updateAndCenter(::LevelStorage& levelStorage, ::Tick currentLevelTick) /*override*/;

    virtual ::Actor* findOwner(uchar& pendingChunks) /*override*/;

    virtual bool entityHasBeenFound() const /*override*/;

    virtual void setEntityFound() /*override*/;

    virtual bool isRemoved() /*override*/;

    virtual void remove(::LevelStorage& levelStorage) /*override*/;

    virtual void onComponentChanged(
        uint            radius,
        float           maxDistToPlayers,
        bool            alwaysActive,
        ::LevelStorage& levelStorage
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickingArea(
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

    MCNAPI void _center(::LevelStorage& levelStorage);

    MCNAPI void _save(::LevelStorage& levelStorage);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::UUID const& $getId() const;

    MCNAPI ::std::string const& $getName() const;

    MCNAPI ::ActorUniqueID const& $getEntityId() const;

    MCNAPI ::Bounds const& $getBounds() const;

    MCNAPI bool $isEntityOwned() const;

    MCNAPI bool $isAlwaysActive() const;

    MCNAPI float $getMaxDistToPlayers() const;

    MCNAPI ::ITickingAreaView const& $getView() const;

    MCNAPI ::ITickingAreaView& $getView();

    MCNAPI ::WeakRef<::BlockSource> const $getBlockSource() const;

    MCNAPI ::WeakRef<::BlockSource> $getBlockSource();

    MCNAPI ::TickingAreaDescription $getDescription() const;

    MCNAPI void $setLoadMode(::TickingAreaLoadMode loadMode, ::LevelStorage& levelStorage);

    MCNAPI bool $isPreloadDone() const;

    MCNAPI void $tick(::Tick const& currentTick, bool randomize);

    MCNAPI void $tickSeasons(::Random& random);

    MCNAPI void $updatePosition(::Vec3 const& pos);

    MCNAPI void $updateAndCenter(::LevelStorage& levelStorage, ::Tick currentLevelTick);

    MCNAPI ::Actor* $findOwner(uchar& pendingChunks);

    MCNAPI bool $entityHasBeenFound() const;

    MCNAPI void $setEntityFound();

    MCNAPI bool $isRemoved();

    MCNAPI void $remove(::LevelStorage& levelStorage);

    MCNAPI void
    $onComponentChanged(uint radius, float maxDistToPlayers, bool alwaysActive, ::LevelStorage& levelStorage);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
