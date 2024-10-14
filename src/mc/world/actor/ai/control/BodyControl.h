#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

class BodyControl : public ::Control {
public:
    // prevent constructor by default
    BodyControl& operator=(BodyControl const&);
    BodyControl(BodyControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BodyControl();

    // vIndex: 1
    virtual void clientTick(class Mob& mob);

    MCAPI BodyControl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void clientTick$(class Mob& mob);

    MCAPI static float const& MAX_CLAMP_ANGLE();

    // NOLINTEND
};
