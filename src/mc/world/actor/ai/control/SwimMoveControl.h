#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class SwimMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    SwimMoveControl& operator=(SwimMoveControl const&);
    SwimMoveControl(SwimMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwimMoveControl() = default;

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob, struct MoveControlDescription* description);

    // vIndex: 2
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    MCAPI SwimMoveControl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void initializeInternal$(class Mob& mob, struct MoveControlDescription* description);

    MCAPI void tick$(class MoveControlComponent& parent, class Mob& mob);

    // NOLINTEND
};
