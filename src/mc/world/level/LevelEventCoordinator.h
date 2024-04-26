#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/events/LevelGameplayEvent.h"
#include "mc/events/MutableLevelGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class LevelEventCoordinator {
public:
    // prevent constructor by default
    LevelEventCoordinator& operator=(LevelEventCoordinator const&);
    LevelEventCoordinator(LevelEventCoordinator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LevelEventCoordinator@@UEAA@XZ
    virtual ~LevelEventCoordinator();

    // symbol: ??0LevelEventCoordinator@@QEAA@XZ
    MCAPI LevelEventCoordinator();

    // symbol: ?getLevelGameplayHandler@LevelEventCoordinator@@QEAAAEAVLevelGameplayHandler@@XZ
    MCAPI class LevelGameplayHandler& getLevelGameplayHandler();

    // symbol: ?registerGameRules@LevelEventCoordinator@@QEAAXAEAVGameRules@@@Z
    MCAPI void registerGameRules(class GameRules&);

    // symbol:
    // ?registerLevelGameplayHandler@LevelEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VLevelGameplayHandler@@U?$default_delete@VLevelGameplayHandler@@@std@@@std@@@Z
    MCAPI void registerLevelGameplayHandler(std::unique_ptr<class LevelGameplayHandler>&& handler);

    // symbol:
    // ?sendEvent@LevelEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutableLevelGameplayEvent@W4CoordinatorResult@@@@@@@Z
    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableLevelGameplayEvent<::CoordinatorResult>>);

    // symbol: ?sendEvent@LevelEventCoordinator@@QEAAXAEBV?$EventRef@U?$LevelGameplayEvent@X@@@@@Z
    MCAPI void sendEvent(class EventRef<struct LevelGameplayEvent<void>> const& event);

    // symbol: ?sendLevelInitialized@LevelEventCoordinator@@QEAAXAEAVLevel@@@Z
    MCAPI void sendLevelInitialized(class Level& level);

    // symbol: ?sendLevelRemovedActor@LevelEventCoordinator@@QEAAXAEAVLevel@@AEAVActor@@@Z
    MCAPI void sendLevelRemovedActor(class Level& level, class Actor& actor);

    // symbol: ?sendLevelTick@LevelEventCoordinator@@QEAAXAEAVLevel@@@Z
    MCAPI void sendLevelTick(class Level& level);

    // symbol: ?sendLevelTickStart@LevelEventCoordinator@@QEAAXAEAVLevel@@@Z
    MCAPI void sendLevelTickStart(class Level& level);

    // symbol:
    // ?sendLevelWeatherChanged@LevelEventCoordinator@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N111@Z
    MCAPI void sendLevelWeatherChanged(std::string const&, bool, bool, bool, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onGameRuleChange@LevelEventCoordinator@@AEAAXAEBVGameRules@@AEBUGameRuleId@@@Z
    MCAPI void _onGameRuleChange(class GameRules const&, struct GameRuleId const&);

    // NOLINTEND
};
