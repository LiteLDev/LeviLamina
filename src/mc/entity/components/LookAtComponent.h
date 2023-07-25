#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATCOMPONENT
public:
    LookAtComponent& operator=(LookAtComponent const&) = delete;
    LookAtComponent(LookAtComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0LookAtComponent\@\@QEAA\@XZ
     */
    MCAPI LookAtComponent();
    /**
     * @symbol ?getCoolingTime\@LookAtComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getCoolingTime();
    /**
     * @symbol ?getSearchRadius\@LookAtComponent\@\@QEBAMXZ
     */
    MCAPI float getSearchRadius() const;
    /**
     * @symbol ?getTarget\@LookAtComponent\@\@QEBA_NXZ
     */
    MCAPI bool getTarget() const;
    /**
     * @symbol ?isLookingAtMe\@LookAtComponent\@\@QEAA_NAEAVActor\@\@0\@Z
     */
    MCAPI bool isLookingAtMe(class Actor&, class Actor&);
};
