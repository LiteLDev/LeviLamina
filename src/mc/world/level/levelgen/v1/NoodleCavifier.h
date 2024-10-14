#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoodleCavifier {
public:
    // prevent constructor by default
    NoodleCavifier& operator=(NoodleCavifier const&);
    NoodleCavifier(NoodleCavifier const&);
    NoodleCavifier();

public:
    // NOLINTBEGIN
    MCAPI NoodleCavifier(class NoodleCavifierNoises const& noises, short minWorldHeight);

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
