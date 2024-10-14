#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangEvalStackState {
public:
    // prevent constructor by default
    MolangEvalStackState& operator=(MolangEvalStackState const&);
    MolangEvalStackState(MolangEvalStackState const&);
    MolangEvalStackState();

public:
    // NOLINTBEGIN
    MCAPI explicit MolangEvalStackState(struct MolangEvalParams& evalParams);

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
