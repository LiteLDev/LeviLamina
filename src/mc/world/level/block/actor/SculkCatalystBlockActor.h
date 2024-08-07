#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/GameEventListener.h"
#include "mc/world/level/block/utils/BlockActorType.h"

// auto generated forward declare list
// clang-format off
namespace GameEvents { class PositionSource; }
// clang-format on

class SculkCatalystBlockActor {
public:
    // prevent constructor by default
    SculkCatalystBlockActor& operator=(SculkCatalystBlockActor const&);
    SculkCatalystBlockActor(SculkCatalystBlockActor const&);
    SculkCatalystBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI ::GameEventListener::DeliveryMode getDeliveryMode() const;

    MCVAPI class GameEvents::PositionSource const& getPositionSource() const;

    MCVAPI uint getRange() const;

    MCVAPI void handleGameEvent(
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext,
        class BlockSource&             region
    );

    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onRemoved(class BlockSource& region);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void tick(class BlockSource& region);

    MCAPI explicit SculkCatalystBlockActor(class BlockPos const& pos);

    MCAPI class SculkSpreader& getSculkSpreader();

    MCAPI static ::BlockActorType const TypeId;

    MCAPI static std::string const TypeString;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _tryConsumeOnDeathExperience(class Level& level, class Actor& actor);

    // NOLINTEND
};
