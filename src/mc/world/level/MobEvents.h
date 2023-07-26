#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEvents {

public:
    // prevent constructor by default
    MobEvents& operator=(MobEvents const&) = delete;
    MobEvents(MobEvents const&)            = delete;
    MobEvents()                            = delete;

public:
    /**
     * @symbol ??0MobEvents\@\@QEAA\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI MobEvents(class LevelStorage&); // NOLINT
    /**
     * @symbol ?areEventsEnabled\@MobEvents\@\@QEBA_NXZ
     */
    MCAPI bool areEventsEnabled() const; // NOLINT
    /**
     * @symbol ?getEvent\@MobEvents\@\@QEBAAEBVMobEvent\@\@W4MobEventsIndex\@\@\@Z
     */
    MCAPI class MobEvent const& getEvent(enum class MobEventsIndex) const; // NOLINT
    /**
     * @symbol
     * ?getIndexFromName\@MobEvents\@\@QEBA?AW4MobEventsIndex\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class MobEventsIndex getIndexFromName(std::string const&) const; // NOLINT
    /**
     * @symbol ?initializeWithLevelStorageManager\@MobEvents\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&); // NOLINT
    /**
     * @symbol ?isEnabled\@MobEvents\@\@QEBA_NW4MobEventsIndex\@\@\@Z
     */
    MCAPI bool isEnabled(enum class MobEventsIndex) const; // NOLINT
    /**
     * @symbol ?readFromLevelStorage\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void readFromLevelStorage(); // NOLINT
    /**
     * @symbol
     * ?serialize\@MobEvents\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const; // NOLINT
    /**
     * @symbol ?setEnabled\@MobEvents\@\@QEAAXW4MobEventsIndex\@\@_N\@Z
     */
    MCAPI void setEnabled(enum class MobEventsIndex, bool); // NOLINT
    /**
     * @symbol ?setEventsEnabled\@MobEvents\@\@QEAAX_N\@Z
     */
    MCAPI void setEventsEnabled(bool); // NOLINT
    /**
     * @symbol ?setMarketplaceDefaults\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void setMarketplaceDefaults(); // NOLINT
    /**
     * @symbol ?tick\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ?writeToLevelStorage\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void writeToLevelStorage(); // NOLINT
    /**
     * @symbol
     * ?EVENTS_ENABLED_STRING\@MobEvents\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EVENTS_ENABLED_STRING; // NOLINT

    // private:
    /**
     * @symbol ?_onSaveEvent\@MobEvents\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _onSaveEvent(class LevelStorage&); // NOLINT

private:
};
