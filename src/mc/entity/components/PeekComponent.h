#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PeekComponent {
public:
    // prevent constructor by default
    PeekComponent& operator=(PeekComponent const&);
    PeekComponent(PeekComponent const&);
    PeekComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getDuration@PeekComponent@@QEAAAEAHXZ
    MCAPI int& getDuration();

    // symbol: ?getHadTarget@PeekComponent@@QEBA_NXZ
    MCAPI bool getHadTarget() const;

    // symbol: ?setHadTarget@PeekComponent@@QEAAX_N@Z
    MCAPI void setHadTarget(bool hadTarget);

    // NOLINTEND
};
