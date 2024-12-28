#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class VerletIntegrator {
public:
    // VerletIntegrator inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // VerletIntegrator inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkd6df40;
        ::ll::UntypedStorage<4, 12> mUnk8149e0;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk19eb7c;
    ::ll::UntypedStorage<1, 1>  mUnk443fa1;
    ::ll::UntypedStorage<4, 24> mUnk381051;
    ::ll::UntypedStorage<4, 24> mUnkbd1113;
    ::ll::UntypedStorage<4, 24> mUnk44011c;
    // NOLINTEND

public:
    // prevent constructor by default
    VerletIntegrator& operator=(VerletIntegrator const&);
    VerletIntegrator(VerletIntegrator const&);
    VerletIntegrator();
};

} // namespace mce
