#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtComponent {
public:
    // prevent constructor by default
    LookAtComponent& operator=(LookAtComponent const&);
    LookAtComponent(LookAtComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LookAtComponent@@QEAA@XZ
    MCAPI LookAtComponent();

    // symbol: ?getCoolingTime@LookAtComponent@@QEAAAEAHXZ
    MCAPI int& getCoolingTime();

    // symbol: ?getSearchRadius@LookAtComponent@@QEBAMXZ
    MCAPI float getSearchRadius() const;

    // symbol: ?getTarget@LookAtComponent@@QEBA_NXZ
    MCAPI bool getTarget() const;

    // symbol: ?isLookingAtMe@LookAtComponent@@QEAA_NAEAVActor@@0@Z
    MCAPI bool isLookingAtMe(class Actor& owner, class Actor& target);

    // NOLINTEND
};
