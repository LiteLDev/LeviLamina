#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestResult {
public:
    // prevent constructor by default
    GameTestResult();

public:
    // NOLINTBEGIN
    MCAPI GameTestResult(struct GameTestResult const&);

    MCAPI struct GameTestResult& operator=(struct GameTestResult&&);

    MCAPI struct GameTestResult& operator=(struct GameTestResult const&);

    MCAPI bool operator==(struct GameTestResult const& rhs) const;

    MCAPI ~GameTestResult();

    MCAPI static void bindType();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct GameTestResult const&);

    MCAPI void dtor$();

    // NOLINTEND
};
