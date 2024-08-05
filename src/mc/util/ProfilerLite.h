#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProfilerLite {
public:
    // ProfilerLite inner types declare
    // clang-format off
    struct ScopedData;
    // clang-format on

    // ProfilerLite inner types define
    struct ScopedData {
    public:
        // prevent constructor by default
        ScopedData& operator=(ScopedData const&);
        ScopedData(ScopedData const&);
        ScopedData();

    public:
        // NOLINTBEGIN
        MCAPI ~ScopedData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ProfilerLite& operator=(ProfilerLite const&);
    ProfilerLite(ProfilerLite const&);

public:
    // NOLINTBEGIN
    MCAPI ProfilerLite();

    MCAPI void calculateAndSetServerNetworkTime(std::chrono::steady_clock::time_point tp);

    MCAPI void calculateAndSetServerTickTimes(std::chrono::steady_clock::time_point tp);

    MCAPI std::chrono::nanoseconds getServerTickTime() const;

    MCAPI ~ProfilerLite();

    MCAPI static std::thread::id sEmptyThreadID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class ProfilerLite gProfilerLiteInstance;

    // NOLINTEND
};
