#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/GameEventListener.h"
#include "mc/world/events/gameevents/PositionSource.h"
#include "mc/world/level/block/SculkSpreader.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class GameEvent;
class ILevel;
class Level;
class SaveContext;
struct GameEventContext;
// clang-format on

class SculkCatalystBlockActor : public ::BlockActor, public ::GameEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::optional<::gsl::final_action<::std::function<void()>>>> mListenerRegistration;
    ::ll::TypedStorage<8, 24, ::GameEvents::PositionSource>                                  mPositionSource;
    ::ll::TypedStorage<8, 64, ::SculkSpreader>                                               mSculkSpreader;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 14
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void handleGameEvent(
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext,
        ::BlockSource&            region
    ) /*override*/;

    // vIndex: 2
    virtual ::GameEvents::PositionSource const& getPositionSource() const /*override*/;

    // vIndex: 3
    virtual uint getRange() const /*override*/;

    // vIndex: 4
    virtual ::GameEventListener::DeliveryMode getDeliveryMode() const /*override*/;

    // vIndex: 0
    virtual ~SculkCatalystBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SculkCatalystBlockActor(::BlockPos const& pos);

    MCNAPI void _tryConsumeOnDeathExperience(::Level& level, ::Actor& actor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _trySendItSpreadsEventPacket(::Actor& actor);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BlockActorType const& TypeId();

    MCAPI static ::std::string const& TypeString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI void
    $handleGameEvent(::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext, ::BlockSource& region);

    MCNAPI ::GameEvents::PositionSource const& $getPositionSource() const;

    MCNAPI uint $getRange() const;

    MCNAPI ::GameEventListener::DeliveryMode $getDeliveryMode() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForGameEventListener();
    // NOLINTEND
};
