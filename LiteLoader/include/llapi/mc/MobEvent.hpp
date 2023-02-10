/**
 * @file  MobEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1376321500
     * @symbol  ??0MobEvent\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI MobEvent(std::string, std::string, bool);
    /**
     * @hash   149004849
     * @symbol  ??0MobEvent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobEvent(class MobEvent const &);
    /**
     * @hash   -423615186
     * @symbol  ?getLocalizableName\@MobEvent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLocalizableName() const;
    /**
     * @hash   -1771281092
     * @symbol  ?getName\@MobEvent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   401886538
     * @symbol  ?isEnabled\@MobEvent\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @hash   -912497692
     * @symbol  ??1MobEvent\@\@QEAA\@XZ
     */
    MCAPI ~MobEvent();

};