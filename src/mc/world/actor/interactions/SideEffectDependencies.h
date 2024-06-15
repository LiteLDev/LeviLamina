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
    // vIndex: 0, symbol: __gen_??1SideEffectDependencies@Mining@Interactions@@UEAA@XZ
    virtual ~SideEffectDependencies() = default;

    // vIndex: 1, symbol: ?legacyMineBlock@SideEffectDependencies@Mining@Interactions@@UEAAXXZ
    virtual void legacyMineBlock();

    // vIndex: 2, symbol: ?creatorHook@SideEffectDependencies@Mining@Interactions@@UEAAXXZ
    virtual void creatorHook();

    // vIndex: 3, symbol: ?legacyHurtAndBreak@SideEffectDependencies@Mining@Interactions@@UEAAXH@Z
    virtual void legacyHurtAndBreak(int);

    // NOLINTEND
};

}; // namespace Interactions::Mining
