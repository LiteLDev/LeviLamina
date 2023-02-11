/**
 * @file  MobEvents.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -771749874
     * @symbol  ??0MobEvents\@\@QEAA\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI MobEvents(class LevelStorage &);
    /**
     * @hash   -1661469426
     * @symbol  ?areEventsEnabled\@MobEvents\@\@QEBA_NXZ
     */
    MCAPI bool areEventsEnabled() const;
    /**
     * @hash   -1893977148
     * @symbol  ?deserialize\@MobEvents\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const &);
    /**
     * @hash   1910405543
     * @symbol  ?getEvent\@MobEvents\@\@QEBAAEBVMobEvent\@\@W4MobEventsIndex\@\@\@Z
     */
    MCAPI class MobEvent const & getEvent(enum class MobEventsIndex) const;
    /**
     * @hash   -2095348053
     * @symbol  ?getIndexFromName\@MobEvents\@\@QEBA?AW4MobEventsIndex\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class MobEventsIndex getIndexFromName(std::string const &) const;
    /**
     * @hash   526832541
     * @symbol  ?isEnabled\@MobEvents\@\@QEBA_NW4MobEventsIndex\@\@\@Z
     */
    MCAPI bool isEnabled(enum class MobEventsIndex) const;
    /**
     * @hash   -275990880
     * @symbol  ?serialize\@MobEvents\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;
    /**
     * @hash   528487701
     * @symbol  ?setEnabled\@MobEvents\@\@QEAAXW4MobEventsIndex\@\@_N\@Z
     */
    MCAPI void setEnabled(enum class MobEventsIndex, bool);
    /**
     * @hash   -1397231970
     * @symbol  ?setEventsEnabled\@MobEvents\@\@QEAAX_N\@Z
     */
    MCAPI void setEventsEnabled(bool);
    /**
     * @hash   -1768730599
     * @symbol  ?setMarketplaceDefaults\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void setMarketplaceDefaults();
    /**
     * @hash   1769192349
     * @symbol  ?tick\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   -32639481
     * @symbol  ?writeToLevelStorage\@MobEvents\@\@QEAAXXZ
     */
    MCAPI void writeToLevelStorage();
    /**
     * @hash   890662929
     * @symbol  ?EVENTS_ENABLED_STRING\@MobEvents\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EVENTS_ENABLED_STRING;

};