#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class IMinecraftEventing;
// clang-format on

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
            ::ll::UntypedStorage<8, 16> mUnk635552;
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
        ::ll::UntypedStorage<8, 64> mUnk36fb68;
        ::ll::UntypedStorage<8, 64> mUnk4d83af;
        ::ll::UntypedStorage<8, 64> mUnkf8f396;
        ::ll::UntypedStorage<8, 64> mUnkd8b534;
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
#ifdef LL_PLAT_C
        MCNAPI Impl(
            ::std::function<::ILevel const*()>&&       getLevel,
            ::std::function<::IMinecraftEventing&()>&& getEventingRef,
            ::std::function<bool()>&&                  getPerfContextPresent,
            ::std::function<bool()>&&                  getAutomationRun
        );

        MCNAPI ::Bedrock::Profiling::ProfilingOrchestrator::Impl&
        operator=(::Bedrock::Profiling::ProfilingOrchestrator::Impl&&);

        MCNAPI void tick();

        MCNAPI void unhookAll();

        MCNAPI ~Impl();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(
            ::std::function<::ILevel const*()>&&       getLevel,
            ::std::function<::IMinecraftEventing&()>&& getEventingRef,
            ::std::function<bool()>&&                  getPerfContextPresent,
            ::std::function<bool()>&&                  getAutomationRun
        );
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
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
#ifdef LL_PLAT_C
    MCNAPI ProfilingOrchestrator(
        ::std::function<::ILevel const*()>&&       getLevel,
        ::std::function<::IMinecraftEventing&()>&& getEventingRef,
        ::std::function<bool()>&&                  getPerfContextPresent,
        ::std::function<bool()>&&                  getAutomationRun
    );

    MCNAPI void tick();

    MCNAPI ~ProfilingOrchestrator();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::function<::ILevel const*()>&&       getLevel,
        ::std::function<::IMinecraftEventing&()>&& getEventingRef,
        ::std::function<bool()>&&                  getPerfContextPresent,
        ::std::function<bool()>&&                  getAutomationRun
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Profiling
