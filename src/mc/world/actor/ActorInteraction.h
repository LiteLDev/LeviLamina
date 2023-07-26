#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorInteraction {

public:
    // prevent constructor by default
    ActorInteraction& operator=(ActorInteraction const&) = delete;
    ActorInteraction(ActorInteraction const&)            = delete;
    ActorInteraction()                                   = delete;

public:
    /**
     * @symbol ??0ActorInteraction\@\@QEAA\@_N\@Z
     */
    MCAPI ActorInteraction(bool); // NOLINT
    /**
     * @symbol ?capture\@ActorInteraction\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void capture(class std::function<void(void)>); // NOLINT
    /**
     * @symbol
     * ?getInteractText\@ActorInteraction\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getInteractText() const; // NOLINT
    /**
     * @symbol ?interact\@ActorInteraction\@\@QEAAXXZ
     */
    MCAPI void interact(); // NOLINT
    /**
     * @symbol
     * ?setInteractText\@ActorInteraction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setInteractText(std::string const&); // NOLINT
    /**
     * @symbol ?shouldCapture\@ActorInteraction\@\@QEBA_NXZ
     */
    MCAPI bool shouldCapture() const; // NOLINT
    /**
     * @symbol ??1ActorInteraction\@\@QEAA\@XZ
     */
    MCAPI ~ActorInteraction(); // NOLINT
};
