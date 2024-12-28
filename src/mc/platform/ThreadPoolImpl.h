#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

struct ThreadPoolImpl {
public:
    // prevent constructor by default
    ThreadPoolImpl& operator=(ThreadPoolImpl const&);
    ThreadPoolImpl(ThreadPoolImpl const&);
    ThreadPoolImpl();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void TPCallback(::_TP_CALLBACK_INSTANCE*, void*, ::_TP_WORK*);
    // NOLINTEND
};

} // namespace OS
