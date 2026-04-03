#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling {

class ProfilingOrchestrator {
public:
    // ProfilingOrchestrator inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // ProfilingOrchestrator inner types define
    class Impl {
    public:
        // Impl inner types declare
        // clang-format off
        struct Whisker;
        // clang-format on

        // Impl inner types define
        struct Whisker {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 16> mUnk1d8503;
            ::ll::UntypedStorage<8, 16> mUnk4bd558;
            // NOLINTEND

        public:
            // prevent constructor by default
            Whisker& operator=(Whisker const&);
            Whisker(Whisker const&);
            Whisker();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk60f52e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C void tick();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf55b40;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilingOrchestrator& operator=(ProfilingOrchestrator const&);
    ProfilingOrchestrator(ProfilingOrchestrator const&);
    ProfilingOrchestrator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void tick();
    // NOLINTEND
};

} // namespace Bedrock::Profiling
