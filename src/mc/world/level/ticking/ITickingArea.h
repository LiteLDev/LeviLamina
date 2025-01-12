#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
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

class ITickingArea {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITickingArea();

    // vIndex: 1
    virtual ::mce::UUID const& getId() const = 0;

    // vIndex: 2
    virtual ::std::string const& getName() const = 0;

    // vIndex: 3
    virtual ::ActorUniqueID const& getEntityId() const = 0;

    // vIndex: 4
    virtual bool isEntityOwned() const = 0;

    // vIndex: 6
    virtual ::WeakRef<::BlockSource> const getBlockSource() const = 0;

    // vIndex: 5
    virtual ::WeakRef<::BlockSource> getBlockSource() = 0;

    // vIndex: 7
    virtual ::Bounds const& getBounds() const = 0;

    // vIndex: 8
    virtual bool isAlwaysActive() const = 0;

    // vIndex: 9
    virtual float getMaxDistToPlayers() const = 0;

    // vIndex: 11
    virtual ::ITickingAreaView const& getView() const = 0;

    // vIndex: 10
    virtual ::ITickingAreaView& getView() = 0;

    // vIndex: 12
    virtual ::TickingAreaDescription getDescription() const = 0;

    // vIndex: 13
    virtual ::TickingAreaLoadMode getLoadMode() const = 0;

    // vIndex: 14
    virtual void setLoadMode(::TickingAreaLoadMode, ::LevelStorage&) = 0;

    // vIndex: 15
    virtual bool isPreloadDone() const = 0;

    // vIndex: 16
    virtual void tick(::Tick const&, bool) = 0;

    // vIndex: 17
    virtual void tickSeasons(::Random&) = 0;

    // vIndex: 18
    virtual void updatePosition(::Vec3 const&) = 0;

    // vIndex: 19
    virtual void updateAndCenter(::LevelStorage&, ::Tick) = 0;

    // vIndex: 20
    virtual ::Actor* findOwner(uchar&) = 0;

    // vIndex: 21
    virtual bool entityHasBeenFound() const = 0;

    // vIndex: 22
    virtual void setEntityFound() = 0;

    // vIndex: 23
    virtual bool isRemoved() = 0;

    // vIndex: 24
    virtual void remove(::LevelStorage&) = 0;

    // vIndex: 25
    virtual void onComponentChanged(uint, float, bool, ::LevelStorage&) = 0;

    // vIndex: 26
    virtual void updateBlockSourceCurrentTick(::Tick const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CompoundTag serialize() const;
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
