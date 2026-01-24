#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WitherBoss;
// clang-format on

class WitherBossDeathWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WitherBoss&> mWither;
    // NOLINTEND

public:
    // prevent constructor by default
    WitherBossDeathWrapper& operator=(WitherBossDeathWrapper const&);
    WitherBossDeathWrapper(WitherBossDeathWrapper const&);
    WitherBossDeathWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void explode();
    // NOLINTEND
};
