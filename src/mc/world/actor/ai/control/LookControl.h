#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

class LookControl : public ::Control {
public:
    // prevent constructor by default
    LookControl& operator=(LookControl const&);
    LookControl(LookControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookControl();

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob);

    // vIndex: 2
    virtual void tick(class Mob& mob);

    MCAPI LookControl();

    // NOLINTEND
};
