#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class IMinecraftEventing;
namespace Bedrock::Profiling::Orchestrator { struct ClientState; }
namespace Bedrock::Profiling::Orchestrator { struct UserOptions; }
namespace ECS::Profiling { class EntitySystemProfiler; }
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
        struct ChunkDebug;
        struct ECSProfiling;
        struct Whisker;
        // clang-format on

        // Impl inner types define
        struct ChunkDebug {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 16> mUnk60367b;
            ::ll::UntypedStorage<8, 16> mUnk67a906;
            // NOLINTEND

        public:
            // prevent constructor by default
            ChunkDebug& operator=(ChunkDebug const&);
            ChunkDebug(ChunkDebug const&);
            ChunkDebug();
        };

        struct ECSProfiling {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 24> mUnk669cf8;
            ::ll::UntypedStorage<8, 8>  mUnkc54035;
            // NOLINTEND

        public:
            // prevent constructor by default
            ECSProfiling& operator=(ECSProfiling const&);
            ECSProfiling(ECSProfiling const&);
            ECSProfiling();
        };

        struct Whisker {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 16> mUnk361c48;
            ::ll::UntypedStorage<8, 16> mUnk631d1f;
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
        ::ll::UntypedStorage<8, 64> mUnke76782;
        ::ll::UntypedStorage<8, 64> mUnk36fb68;
        ::ll::UntypedStorage<8, 64> mUnk4d83af;
        ::ll::UntypedStorage<8, 64> mUnke69ca2;
        ::ll::UntypedStorage<8, 16> mUnk31921d;
        ::ll::UntypedStorage<8, 32> mUnk60f52e;
        ::ll::UntypedStorage<8, 32> mUnk8bf4b3;
        ::ll::UntypedStorage<8, 32> mUnk204039;
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
            ::std::function<::Bedrock::Profiling::Orchestrator::UserOptions()>&& getOptions,
            ::std::function<::ILevel const*()>&&                                 getLevel,
            ::std::function<::IMinecraftEventing&()>&&                           getEventingRef,
            ::std::function<::Bedrock::Profiling::Orchestrator::ClientState()>&& getState
        );

        MCNAPI void tick();

        MCNAPI ~Impl();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(
            ::std::function<::Bedrock::Profiling::Orchestrator::UserOptions()>&& getOptions,
            ::std::function<::ILevel const*()>&&                                 getLevel,
            ::std::function<::IMinecraftEventing&()>&&                           getEventingRef,
            ::std::function<::Bedrock::Profiling::Orchestrator::ClientState()>&& getState
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
    MCNAPI void setClientECSProfiler(::Bedrock::NotNullNonOwnerPtr<::ECS::Profiling::EntitySystemProfiler> profiler);

    MCNAPI void tick();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Profiling
