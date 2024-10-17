#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IntegrityTokenResult {
public:
    // prevent constructor by default
    IntegrityTokenResult& operator=(IntegrityTokenResult const&);
    IntegrityTokenResult(IntegrityTokenResult const&);
    IntegrityTokenResult();

public:
    // NOLINTBEGIN
    MCAPI IntegrityTokenResult(struct IntegrityTokenResult&&);

    MCAPI ~IntegrityTokenResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct IntegrityTokenResult&&);

    MCAPI void dtor$();

    // NOLINTEND
};
