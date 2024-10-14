#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class FlyMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    FlyMoveControl& operator=(FlyMoveControl const&);
    FlyMoveControl(FlyMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlyMoveControl() = default;

    // vIndex: 2
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    MCAPI FlyMoveControl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void tick$(class MoveControlComponent& parent, class Mob& mob);

    // NOLINTEND
};
