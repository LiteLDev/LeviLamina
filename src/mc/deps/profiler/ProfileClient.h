#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"
#include "mc/deps/profiler/CounterDisplayFormat.h"
#include "mc/deps/profiler/FileExtension.h"
#include "mc/deps/profiler/LegacyCounterFlags.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Core::Profile { class CPUProfileToken; }
namespace Core::Profile { class CounterToken; }
namespace Core::Profile { class GPUProfileToken; }
namespace brstd { struct source_location; }
// clang-format on

namespace Core::Profile {

class ProfileClient {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfileClient() = default;

    virtual void initializeProfile();

    virtual void shutdownProfile();

    virtual void profileFlip();

    virtual uint getMaxTokens() const;

    virtual void onThreadCreate(char const*);

    virtual void onThreadDestroy();

    virtual void onMainThreadCreate();

    virtual void onHeapAllocation(void const*, uint64, ::Memory::MemoryCategory, char const*);

    virtual void onHeapFree(void const*, uint64, ::Memory::MemoryCategory, char const*);

    virtual void enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::CPUProfileToken const&);

    virtual void leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::CPUProfileToken const&);

    virtual uchar createGPUContext(char const*, int64, float, bool, bool);

    virtual uint
    enterGPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::GPUProfileToken const&, uchar);

    virtual void leaveGPUProfile(::Bedrock::Profile::ScopeStackStorage&, uint);

    virtual void emitGPUTiming(uint, int64, int64);

    virtual void syncGPUTiming(uchar, int64, int64, int64);

    virtual void counterAdd(::Core::Profile::CounterToken const&, int64);

    virtual void counterSet(::Core::Profile::CounterToken const&, int64);

    virtual void beginCapture(char const*);

    virtual void endCapture(bool);

    virtual void logCaptureResults();

    virtual bool isCaptureEnding();

    virtual void setMarker(char const*, uint) const;

    virtual void generateCPUProfileToken(
        ::Core::Profile::CPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    virtual void generateCPUProfileTokenDynamic(
        ::Core::Profile::CPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    virtual void generateGPUProfileToken(
        ::Core::Profile::GPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    virtual void generateGPUProfileTokenDynamic(
        ::Core::Profile::GPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    virtual void generateCounterToken(::Core::Profile::CounterToken& target, char const* label);

    virtual void generateCounterTokenWithConfig(
        ::Core::Profile::CounterToken&,
        char const*,
        ::Core::Profile::CounterDisplayFormat,
        int64,
        ::Core::Profile::LegacyCounterFlags
    );

    virtual int64 getProfilerTimestamp();

    virtual void dumpFile(char const*, ::Core::Profile::FileExtension);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeProfile();

    MCNAPI void $shutdownProfile();

    MCNAPI void $profileFlip();

    MCNAPI uint $getMaxTokens() const;

    MCNAPI void $onThreadCreate(char const*);

    MCNAPI void $onThreadDestroy();

    MCNAPI void $onMainThreadCreate();

    MCNAPI void $onHeapAllocation(void const*, uint64, ::Memory::MemoryCategory, char const*);

    MCNAPI void $onHeapFree(void const*, uint64, ::Memory::MemoryCategory, char const*);

    MCNAPI void $enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::CPUProfileToken const&);

    MCNAPI void $leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::CPUProfileToken const&);

    MCNAPI uchar $createGPUContext(char const*, int64, float, bool, bool);

    MCNAPI uint
    $enterGPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::GPUProfileToken const&, uchar);

    MCNAPI void $leaveGPUProfile(::Bedrock::Profile::ScopeStackStorage&, uint);

    MCNAPI void $emitGPUTiming(uint, int64, int64);

    MCNAPI void $syncGPUTiming(uchar, int64, int64, int64);

    MCNAPI void $counterAdd(::Core::Profile::CounterToken const&, int64);

    MCNAPI void $counterSet(::Core::Profile::CounterToken const&, int64);

    MCNAPI void $beginCapture(char const*);

    MCNAPI void $endCapture(bool);

    MCNAPI void $logCaptureResults();

    MCNAPI bool $isCaptureEnding();

    MCNAPI void $setMarker(char const*, uint) const;

    MCNAPI void $generateCPUProfileToken(
        ::Core::Profile::CPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void $generateCPUProfileTokenDynamic(
        ::Core::Profile::CPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void $generateGPUProfileToken(
        ::Core::Profile::GPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void $generateGPUProfileTokenDynamic(
        ::Core::Profile::GPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void $generateCounterToken(::Core::Profile::CounterToken& target, char const* label);

    MCNAPI void $generateCounterTokenWithConfig(
        ::Core::Profile::CounterToken&,
        char const*,
        ::Core::Profile::CounterDisplayFormat,
        int64,
        ::Core::Profile::LegacyCounterFlags
    );

    MCNAPI int64 $getProfilerTimestamp();

    MCNAPI void $dumpFile(char const*, ::Core::Profile::FileExtension);


    // NOLINTEND
};

} // namespace Core::Profile
