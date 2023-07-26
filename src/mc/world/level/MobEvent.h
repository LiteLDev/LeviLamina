#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEvent {

public:
    // prevent constructor by default
    MobEvent& operator=(MobEvent const&) = delete;
    MobEvent()                           = delete;

public:
    /**
     * @symbol ??0MobEvent\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI MobEvent(std::string, std::string, bool); // NOLINT
    /**
     * @symbol ??0MobEvent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobEvent(class MobEvent const&); // NOLINT
    /**
     * @symbol
     * ?getLocalizableName\@MobEvent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLocalizableName() const; // NOLINT
    /**
     * @symbol ?getName\@MobEvent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const; // NOLINT
    /**
     * @symbol ?isEnabled\@MobEvent\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const; // NOLINT
    /**
     * @symbol ??1MobEvent\@\@QEAA\@XZ
     */
    MCAPI ~MobEvent(); // NOLINT
};
