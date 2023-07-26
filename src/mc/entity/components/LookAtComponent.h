#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtComponent {

public:
    // prevent constructor by default
    LookAtComponent& operator=(LookAtComponent const&) = delete;
    LookAtComponent(LookAtComponent const&)            = delete;

public:
    /**
     * @symbol ??0LookAtComponent\@\@QEAA\@XZ
     */
    MCAPI LookAtComponent(); // NOLINT
    /**
     * @symbol ?getCoolingTime\@LookAtComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getCoolingTime(); // NOLINT
    /**
     * @symbol ?getSearchRadius\@LookAtComponent\@\@QEBAMXZ
     */
    MCAPI float getSearchRadius() const; // NOLINT
    /**
     * @symbol ?getTarget\@LookAtComponent\@\@QEBA_NXZ
     */
    MCAPI bool getTarget() const; // NOLINT
    /**
     * @symbol ?isLookingAtMe\@LookAtComponent\@\@QEAA_NAEAVActor\@\@0\@Z
     */
    MCAPI bool isLookingAtMe(class Actor&, class Actor&); // NOLINT
};
