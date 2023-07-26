/**
 * @file  MobEvents.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEvents.
 *
 */
class MobEvents {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEVENTS
public:
    class MobEvents& operator=(class MobEvents const &) = delete;
    MobEvents(class MobEvents const &) = delete;
    MobEvents() = delete;
#endif

public:
    /**
     * @symbol  ??0MobEvents\@\@QEAA\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI MobEvents(class LevelStorage &);
    /**
     * @symbol  ?areEventsEnabled\@MobEvents\@\@QEBA_NXZ
     */
    MCAPI bool areEventsEnabled() const;
    /**
     * @symbol  ?deserialize\@MobEvents\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const &);
    /**
     * @symbol  ?getEvent\@MobEvents\@\@QEBAAEBVMobEvent\@\@W4MobEventsIndex\@\@\@Z
     */
    MCAPI class MobEvent const & getEvent(enum class MobEventsIndex) const;
    /**
     * @symbol  ?getIndexFromName\@MobEvents\@\@QEBA?AW4MobEventsIndex\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class MobEventsIndex getIndexFromName(std::string const &) const;
    /**
     * @symbol  ?isEnabled\@MobEvents\@\@QEBA_NW4MobEventsIndex\@\@\@Z
     */
    MCAPI bool isEnabled(enum class MobEventsIndex) const;
    /**
     * @symbol  ?serialize\@MobEvents\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;
    /**
     * @symbol  ?setEnabled\@MobEvents\@\@QEAAXW4MobEventsIndex\@\@_N\@Z
     */
    MCAPI void setEnabled(enum class MobEventsIndex, bool);
    /**
     * @symbol  ?setEventsEnabled\@MobEvents\@\@QEAAX_N\@Z
     */
    MCAPI void setEventsEnabled(bool);
    /**
     * @symbol  ?setMarketplaceDefaults\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void setMarketplaceDefaults();
    /**
     * @symbol  ?tick\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol  ?writeToLevelStorage\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void writeToLevelStorage();
    /**
     * @symbol  ?EVENTS_ENABLED_STRING\@MobEvents\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EVENTS_ENABLED_STRING;

};