#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ProfilerLite.h"

class _ProfilerLiteTimer {
public:
    // prevent constructor by default
    _ProfilerLiteTimer& operator=(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer();

public:
    // NOLINTBEGIN
    MCAPI _ProfilerLiteTimer(struct ProfilerLite::ScopedData& scopedData, std::thread::id threadId);

    MCAPI ~_ProfilerLiteTimer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
