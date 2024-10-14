#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtComponent {
public:
    // prevent constructor by default
    LookAtComponent& operator=(LookAtComponent const&);
    LookAtComponent(LookAtComponent const&);

public:
    // NOLINTBEGIN
    MCAPI LookAtComponent();

    MCAPI int& getCoolingTime();

    MCAPI float getSearchRadius() const;

    MCAPI bool getTarget() const;

    MCAPI bool isLookingAtMe(class Actor& owner, class Actor& target);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
