#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KnockBackEvent {
public:
    // prevent constructor by default
    KnockBackEvent& operator=(KnockBackEvent const&);
    KnockBackEvent(KnockBackEvent const&);
    KnockBackEvent();

public:
    // NOLINTBEGIN
    MCAPI ~KnockBackEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
