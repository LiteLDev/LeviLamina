#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PushableComponent {
public:
    // prevent constructor by default
    PushableComponent& operator=(PushableComponent const&);
    PushableComponent(PushableComponent const&);

public:
    // NOLINTBEGIN
    MCAPI PushableComponent();

    MCAPI void initFromDefinition(class Actor& actor);

    MCAPI void initFromDefinition(class Actor&, struct PushableDescription const& desc);

    MCAPI bool isPushable() const;

    MCAPI bool isPushableByPiston() const;

    MCAPI void push(class Actor& owner, class Vec3 const& vec);

    MCAPI void push(class Actor& owner, class Actor& other, bool pushSelfOnly);

    MCAPI static void pullToRide(class Actor& owner, class Actor& other);

    MCAPI static bool skipPush(class Actor& owner, class Actor& other);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::pair<class Vec3, class Vec3>
          _calculatePushVectorBoat(class Actor& owner, class Actor& other, bool pushSelfOnly);

    MCAPI std::pair<class Vec3, class Vec3>
          _calculatePushVectorMinecart(class Actor& owner, class Actor& other, bool pushSelfOnly);

    // NOLINTEND
};
