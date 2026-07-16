#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/IGameEventListener.h"
#include "mc/world/events/gameevents/PositionSource.h"
#include "mc/world/level/block/SculkSpreader.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class GameEvent;
class ILevel;
class SaveContext;
struct GameEventContext;
// clang-format on

class SculkCatalystBlockActor : public ::VanillaBlockActor, public ::IGameEventListener {
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
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual void handleGameEvent(
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext,
        ::BlockSource&            region
    ) /*override*/;

    virtual ::GameEvents::PositionSource const& getPositionSource() const /*override*/;

    virtual uint getRange() const /*override*/;

    virtual ::IGameEventListener::DeliveryMode getDeliveryMode() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI void
    $handleGameEvent(::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext, ::BlockSource& region);

    MCFOLD ::GameEvents::PositionSource const& $getPositionSource() const;

    MCFOLD uint $getRange() const;

    MCFOLD ::IGameEventListener::DeliveryMode $getDeliveryMode() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
    // NOLINTEND
};
