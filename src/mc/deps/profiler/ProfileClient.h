#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"
#include "mc/deps/profiler/CounterDisplayFormat.h"
#include "mc/deps/profiler/FileExtension.h"
#include "mc/deps/profiler/LegacyCounterFlags.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/platform/brstd/basic_cstring_view.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Bedrock::Profiler::details { struct DynamicProfLabel; }
namespace Bedrock::Profiler::details { struct StaticProfLabel; }
namespace Core::Profile { class CPUProfileToken; }
namespace Core::Profile { class CounterToken; }
namespace Core::Profile { class GPUProfileToken; }
namespace Core::Profile { class LogMessageToken; }
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

    virtual void setProfileStamp(::std::string_view);

    virtual void onFrameTransition(uchar previousFrameType);

    virtual uint getMaxTokens() const;

    virtual void onThreadCreate(
        ::brstd::basic_cstring_view<char, ::std::char_traits<char>> name,
        ::Core::Profile::ThreadFrameType                            frameType
    );

    virtual void onThreadDestroy();

    virtual void onMainThreadCreate();

    virtual void onMainThreadDestroy();

    virtual void onHeapAllocation(void const*, uint64, ::Memory::MemoryCategory, char const*);

    virtual void onHeapFree(void const*, uint64, ::Memory::MemoryCategory, char const*);

    virtual void
    enterCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::CPUProfileToken const& token);

    virtual void enterCPUProfileDynamic(
        ::Bedrock::Profile::ScopeStackStorage&  scope,
        ::Core::Profile::CPUProfileToken const& token,
        ::Bedrock::Profiler::details::DynamicProfLabel
    );

    virtual void
    leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::CPUProfileToken const& token);

    virtual uchar createGPUContext(char const*, int64, float, bool, bool);

    virtual uint
    enterGPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::GPUProfileToken const&, uchar);

    virtual void leaveGPUProfile(::Bedrock::Profile::ScopeStackStorage&, uint);

    virtual void emitGPUTiming(uint, int64, int64);

    virtual void syncGPUTiming(uchar, int64, int64, int64);

    virtual void counterAdd(::Core::Profile::CounterToken const&, int64);

    virtual void counterSet(::Core::Profile::CounterToken const&, int64);

    virtual void emitLogMessage(::Core::Profile::LogMessageToken const&);

    virtual void
    emitLogMessageDynamic(::Core::Profile::LogMessageToken const&, ::Bedrock::Profiler::details::DynamicProfLabel);

    virtual void beginCapture(char const*);

    virtual void endCapture(bool);

    virtual void logCaptureResults();

    virtual bool isCaptureEnding();

    virtual void setMarker(char const*, uint) const;

    virtual void generateCPUProfileTokenStatic(
        ::Core::Profile::CPUProfileToken&,
        char const*,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    );

    virtual void generateCPUProfileTokenLegacy(
        ::Core::Profile::CPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    virtual void generateCPUProfileTokenDynamic(
        ::Core::Profile::CPUProfileToken&,
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

    virtual void generateLogMessageTokenStatic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    );

    virtual void generateLogMessageTokenDynamic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    virtual int64 getProfilerTimestamp();

    virtual void dumpFile(char const*, ::Core::Profile::FileExtension);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeProfile();

    MCNAPI void $shutdownProfile();

    MCNAPI void $setProfileStamp(::std::string_view);

    MCNAPI void $onFrameTransition(uchar previousFrameType);

    MCNAPI uint $getMaxTokens() const;

    MCNAPI void $onThreadCreate(
        ::brstd::basic_cstring_view<char, ::std::char_traits<char>> name,
        ::Core::Profile::ThreadFrameType                            frameType
    );

    MCNAPI void $onThreadDestroy();

    MCNAPI void $onMainThreadCreate();

    MCNAPI void $onMainThreadDestroy();

    MCNAPI void $onHeapAllocation(void const*, uint64, ::Memory::MemoryCategory, char const*);

    MCNAPI void $onHeapFree(void const*, uint64, ::Memory::MemoryCategory, char const*);

    MCNAPI void $enterCPUProfileDynamic(
        ::Bedrock::Profile::ScopeStackStorage&  scope,
        ::Core::Profile::CPUProfileToken const& token,
        ::Bedrock::Profiler::details::DynamicProfLabel
    );

    MCNAPI uchar $createGPUContext(char const*, int64, float, bool, bool);

    MCNAPI uint
    $enterGPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::GPUProfileToken const&, uchar);

    MCNAPI void $leaveGPUProfile(::Bedrock::Profile::ScopeStackStorage&, uint);

    MCNAPI void $emitGPUTiming(uint, int64, int64);

    MCNAPI void $syncGPUTiming(uchar, int64, int64, int64);

    MCNAPI void $counterAdd(::Core::Profile::CounterToken const&, int64);

    MCNAPI void $counterSet(::Core::Profile::CounterToken const&, int64);

    MCNAPI void $emitLogMessage(::Core::Profile::LogMessageToken const&);

    MCNAPI void
    $emitLogMessageDynamic(::Core::Profile::LogMessageToken const&, ::Bedrock::Profiler::details::DynamicProfLabel);

    MCNAPI void $beginCapture(char const*);

    MCNAPI void $endCapture(bool);

    MCNAPI void $logCaptureResults();

    MCNAPI bool $isCaptureEnding();

    MCNAPI void $setMarker(char const*, uint) const;

    MCNAPI void $generateCPUProfileTokenLegacy(
        ::Core::Profile::CPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void $generateCPUProfileTokenDynamic(
        ::Core::Profile::CPUProfileToken&,
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

    MCNAPI void $generateLogMessageTokenStatic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void $generateLogMessageTokenDynamic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI int64 $getProfilerTimestamp();

    MCNAPI void $dumpFile(char const*, ::Core::Profile::FileExtension);


    // NOLINTEND
};

} // namespace Core::Profile
