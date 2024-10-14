#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/BodyControl.h"

class LegacyBodyControl : public ::BodyControl {
public:
    // prevent constructor by default
    LegacyBodyControl& operator=(LegacyBodyControl const&);
    LegacyBodyControl(LegacyBodyControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyBodyControl() = default;

    // vIndex: 1
    virtual void clientTick(class Mob& mob);

    MCAPI LegacyBodyControl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void clientTick$(class Mob& mob);

    // NOLINTEND
};
