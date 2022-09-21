/**
 * @file  MC/MobEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEvent.
 *
 */
class MobEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEVENT
public:
    class MobEvent& operator=(class MobEvent const &) = delete;
    MobEvent() = delete;
#endif

public:
    /**
     * @hash   660910836
     * @symbol ??0MobEvent@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
     */
    MCAPI MobEvent(std::string, std::string, bool);
    /**
     * @hash   -2108730111
     * @symbol ??0MobEvent@@QEAA@AEBV0@@Z
     */
    MCAPI MobEvent(class MobEvent const &);
    /**
     * @hash   -529878722
     * @symbol ?getLocalizableName@MobEvent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getLocalizableName() const;
    /**
     * @hash   -1867903876
     * @symbol ?getName@MobEvent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   156208810
     * @symbol ?isEnabled@MobEvent@@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @hash   -1004277036
     * @symbol ??1MobEvent@@QEAA@XZ
     */
    MCAPI ~MobEvent();

};