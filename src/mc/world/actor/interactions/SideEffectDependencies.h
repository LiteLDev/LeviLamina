#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class SideEffectDependencies {
public:
    // prevent constructor by default
    SideEffectDependencies& operator=(SideEffectDependencies const&);
    SideEffectDependencies(SideEffectDependencies const&);
    SideEffectDependencies();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SideEffectDependencies() = default;

    // vIndex: 1
    virtual void legacyMineBlock();

    // vIndex: 2
    virtual void creatorHook();

    // vIndex: 3
    virtual void legacyHurtAndBreak(int);

    // NOLINTEND
};

}; // namespace Interactions::Mining
