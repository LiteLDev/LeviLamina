#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PeekComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PEEKCOMPONENT
public:
    PeekComponent& operator=(PeekComponent const&) = delete;
    PeekComponent(PeekComponent const&)            = delete;
    PeekComponent()                                = delete;
#endif

public:
    /**
     * @symbol ?getDuration\@PeekComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getDuration();
    /**
     * @symbol ?getHadTarget\@PeekComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHadTarget() const;
    /**
     * @symbol ?setHadTarget\@PeekComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHadTarget(bool);
};
