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
    // symbol: ?getDeliveryMode@SculkCatalystBlockActor@@UEBA?AW4DeliveryMode@GameEventListener@@XZ
    MCVAPI ::GameEventListener::DeliveryMode getDeliveryMode() const;

    // symbol: ?getPositionSource@SculkCatalystBlockActor@@UEBAAEBVPositionSource@GameEvents@@XZ
    MCVAPI class GameEvents::PositionSource const& getPositionSource() const;

    // symbol: ?getRange@SculkCatalystBlockActor@@UEBAIXZ
    MCVAPI uint getRange() const;

    // symbol: ?handleGameEvent@SculkCatalystBlockActor@@UEAAXAEBVGameEvent@@AEBUGameEventContext@@AEAVBlockSource@@@Z
    MCVAPI void handleGameEvent(
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext,
        class BlockSource&             region
    );

    // symbol: ?load@SculkCatalystBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onRemoved@SculkCatalystBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onRemoved(class BlockSource& region);

    // symbol: ?save@SculkCatalystBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?tick@SculkCatalystBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource& region);

    // symbol: ??0SculkCatalystBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SculkCatalystBlockActor(class BlockPos const& pos);

    // symbol: ?getSculkSpreader@SculkCatalystBlockActor@@QEAAAEAVSculkSpreader@@XZ
    MCAPI class SculkSpreader& getSculkSpreader();

    // symbol: ?TypeId@SculkCatalystBlockActor@@2W4BlockActorType@@B
    MCAPI static ::BlockActorType const TypeId;

    // symbol: ?TypeString@SculkCatalystBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TypeString;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryConsumeOnDeathExperience@SculkCatalystBlockActor@@AEAAXAEAVLevel@@AEAVActor@@@Z
    MCAPI void _tryConsumeOnDeathExperience(class Level& level, class Actor& actor);

    // NOLINTEND
};
