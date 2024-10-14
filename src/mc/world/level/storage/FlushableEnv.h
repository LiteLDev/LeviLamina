#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlushableEnv {
public:
    // prevent constructor by default
    FlushableEnv& operator=(FlushableEnv const&);
    FlushableEnv(FlushableEnv const&);
    FlushableEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlushableEnv();

    // vIndex: 20
    virtual void flushToPermanentStorage() = 0;

    MCAPI explicit FlushableEnv(leveldb::Env* env);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
