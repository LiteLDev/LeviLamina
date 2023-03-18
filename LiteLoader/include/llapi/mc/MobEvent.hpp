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
     * @symbol ??0MobEvent\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI MobEvent(std::string, std::string, bool);
    /**
     * @symbol ??0MobEvent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobEvent(class MobEvent const &);
    /**
     * @symbol ?getLocalizableName\@MobEvent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLocalizableName() const;
    /**
     * @symbol ?getName\@MobEvent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol ?isEnabled\@MobEvent\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @symbol ??1MobEvent\@\@QEAA\@XZ
     */
    MCAPI ~MobEvent();

};
