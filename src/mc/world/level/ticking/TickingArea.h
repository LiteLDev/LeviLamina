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
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>  mScope;
    ::ll::TypedStorage<4, 4, float>                     mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                      mAlwaysActive;
    ::ll::TypedStorage<1, 1, bool>                      mEntityFound;
    ::ll::TypedStorage<1, 1, bool>                      mSizeChanged;
    ::ll::TypedStorage<1, 1, bool>                      mRemoved;
    ::ll::TypedStorage<1, 1, bool>                      mIsDoneLoadingScoped;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode>     mLoadMode;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mLastChunkUpdatePos;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mLastPos;
    ::ll::TypedStorage<4, 4, uint>                      mLastRadius;
    ::ll::TypedStorage<8, 432, ::ChunkViewSource>       mChunkSource;
    ::ll::TypedStorage<8, 16, ::WeakRef<::BlockSource>> mBlockSource;
    ::ll::TypedStorage<8, 32, ::TickingAreaView>        mView;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickingArea() /*override*/ = default;

    virtual ::mce::UUID const& getId() const /*override*/;

    virtual ::std::string const& getName() const /*override*/;

    virtual ::ActorUniqueID const& getEntityId() const /*override*/;

    virtual ::Bounds const getBoundsCopy() const /*override*/;

    virtual bool isEntityOwned() const /*override*/;

    virtual bool isAlwaysActive() const /*override*/;

    virtual float getMaxDistToPlayers() const /*override*/;

    virtual ::ITickingAreaView const& getView() const /*override*/;

    virtual ::ITickingAreaView& getView() /*override*/;

    virtual ::WeakRef<::BlockSource> const getBlockSource() const /*override*/;

    virtual ::WeakRef<::BlockSource> getBlockSource() /*override*/;

    virtual ::TickingAreaDescription getDescription() const /*override*/;

    virtual ::TickingAreaLoadMode getLoadMode() const /*override*/;

    virtual void setLoadMode(::TickingAreaLoadMode, ::LevelStorage&) /*override*/;

    virtual bool isPreloadDone() const /*override*/;

    virtual void tick(::Tick const&, bool) /*override*/;

    virtual void tickSeasons(::Random&) /*override*/;

    virtual void updatePosition(::Vec3 const&) /*override*/;

    virtual void updateAndCenter(::LevelStorage&, ::Tick) /*override*/;

    virtual ::Actor* findOwner(uchar&) /*override*/;

    virtual bool entityHasBeenFound() const /*override*/;

    virtual void setEntityFound() /*override*/;

    virtual bool isRemoved() /*override*/;

    virtual void remove(::LevelStorage&) /*override*/;

    virtual void onComponentChanged(uint, float, bool, ::LevelStorage&) /*override*/;

    virtual bool isScoped() const /*override*/;

    virtual ::std::optional<uint64> const& getScope() const /*override*/;

    virtual bool isDoneLoadingScoped() const /*override*/;

    virtual bool isStandalone() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
