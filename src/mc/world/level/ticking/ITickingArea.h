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
    virtual ~ITickingArea();

    virtual ::mce::UUID const& getId() const = 0;

    virtual ::std::string const& getName() const = 0;

    virtual ::ActorUniqueID const& getEntityId() const = 0;

    virtual bool isEntityOwned() const = 0;

    virtual ::WeakRef<::BlockSource> const getBlockSource() const = 0;

    virtual ::WeakRef<::BlockSource> getBlockSource() = 0;

    virtual ::Bounds const& getBounds() const = 0;

    virtual bool isAlwaysActive() const = 0;

    virtual float getMaxDistToPlayers() const = 0;

    virtual ::ITickingAreaView const& getView() const = 0;

    virtual ::ITickingAreaView& getView() = 0;

    virtual ::TickingAreaDescription getDescription() const = 0;

    virtual ::TickingAreaLoadMode getLoadMode() const = 0;

    virtual void setLoadMode(::TickingAreaLoadMode, ::LevelStorage&) = 0;

    virtual bool isPreloadDone() const = 0;

    virtual void tick(::Tick const&, bool) = 0;

    virtual void tickSeasons(::Random&) = 0;

    virtual void updatePosition(::Vec3 const&) = 0;

    virtual void updateAndCenter(::LevelStorage&, ::Tick) = 0;

    virtual ::Actor* findOwner(uchar&) = 0;

    virtual bool entityHasBeenFound() const = 0;

    virtual void setEntityFound() = 0;

    virtual bool isRemoved() = 0;

    virtual void remove(::LevelStorage&) = 0;

    virtual void onComponentChanged(uint, float, bool, ::LevelStorage&) = 0;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
