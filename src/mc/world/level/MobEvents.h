#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/MobEventsIndex.h"

class MobEvents {
public:
    // prevent constructor by default
    MobEvents& operator=(MobEvents const&);
    MobEvents(MobEvents const&);
    MobEvents();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MobEvents() = default;

    // symbol: ??0MobEvents@@QEAA@AEAVLevelStorage@@@Z
    MCAPI explicit MobEvents(class LevelStorage&);

    // symbol: ?areEventsEnabled@MobEvents@@QEBA_NXZ
    MCAPI bool areEventsEnabled() const;

    // symbol: ?getEvent@MobEvents@@QEBAAEBVMobEvent@@W4MobEventsIndex@@@Z
    MCAPI class MobEvent const& getEvent(::MobEventsIndex) const;

    // symbol:
    // ?getIndexFromName@MobEvents@@QEBA?AW4MobEventsIndex@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::MobEventsIndex getIndexFromName(std::string const&) const;

    // symbol: ?initializeWithLevelStorageManager@MobEvents@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    // symbol: ?isEnabled@MobEvents@@QEBA_NW4MobEventsIndex@@@Z
    MCAPI bool isEnabled(::MobEventsIndex) const;

    // symbol: ?readFromLevelStorage@MobEvents@@QEAAXXZ
    MCAPI void readFromLevelStorage();

    // symbol: ?serialize@MobEvents@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;

    // symbol: ?setEnabled@MobEvents@@QEAAXW4MobEventsIndex@@_N@Z
    MCAPI void setEnabled(::MobEventsIndex, bool);

    // symbol: ?setEventsEnabled@MobEvents@@QEAAX_N@Z
    MCAPI void setEventsEnabled(bool);

    // symbol: ?setMarketplaceDefaults@MobEvents@@QEAAXXZ
    MCAPI void setMarketplaceDefaults();

    // symbol: ?tick@MobEvents@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?writeToLevelStorage@MobEvents@@QEAAXXZ
    MCAPI void writeToLevelStorage();

    // symbol: ?EVENTS_ENABLED_STRING@MobEvents@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EVENTS_ENABLED_STRING;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onSaveEvent@MobEvents@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _onSaveEvent(class LevelStorage&);

    // NOLINTEND
};
