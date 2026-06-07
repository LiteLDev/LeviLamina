#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Bedrock::Profiler::details { struct DynamicProfLabel; }
namespace Core::Profile { class CPUProfileToken; }
namespace Core::Profile { class GPUProfileToken; }
namespace Core::Profile { class ProfileGroup; }
namespace Core::Profile { struct FileCounters; }
namespace brstd { struct source_location; }
// clang-format on

namespace Core::Profile {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI uchar createGPUContext(
    char const* name,
    int64       gpuTimestamp,
    float       gpuPeriod,
    bool        supportsMultithreadedRendering,
    bool        allowContextCallibration
);

MCNAPI void emitGPUTiming(uint gpuEvent, int64 beginTime, int64 endTime);

MCNAPI void
enterCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::CPUProfileToken const& token);
#endif

MCNAPI void enterCPUProfileDynamic(
    ::Bedrock::Profile::ScopeStackStorage&         scope,
    ::Core::Profile::CPUProfileToken const&        token,
    ::Bedrock::Profiler::details::DynamicProfLabel dynamicLabel
);

#ifdef LL_PLAT_C
MCNAPI uint enterGPUProfile(
    ::Bedrock::Profile::ScopeStackStorage&  scope,
    ::Core::Profile::GPUProfileToken const& token,
    uchar                                   context
);
#endif

MCNAPI ::Core::Profile::ProfileGroup& findOrCreateGroup(::std::string_view name, uint color);

#ifdef LL_PLAT_C
MCNAPI ::Core::Profile::CPUProfileToken
generateCPUProfileToken(char const* group, char const* label, uint color, ::brstd::source_location const& location);

MCNAPI ::Core::Profile::GPUProfileToken generateGPUProfileTokenDynamic(
    char const*                     group,
    char const*                     label,
    uint                            color,
    ::brstd::source_location const& location
);

MCNAPI void getFileOpenStats(::Core::Profile::FileCounters& reads, ::Core::Profile::FileCounters& writes);

MCNAPI int64 getProfilerTimestamp();
#endif

MCNAPI void initializeProfile();

#ifdef LL_PLAT_C
MCNAPI void
leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::CPUProfileToken const& token);

MCNAPI void leaveGPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, uint gpuEvent);
#endif

MCNAPI void onFileOpenFailed(bool isReadOnly);

MCNAPI void onFileOpenRequest(bool isReadOnly);

MCNAPI void onFrameTransition(uchar previousFrameType);

#ifdef LL_PLAT_C
MCNAPI void
onHeapAllocation(void const* pointer, uint64 size, ::Memory::MemoryCategory category, char const* categoryName);

MCNAPI void onHeapFree(void const* pointer, uint64 size, ::Memory::MemoryCategory category, char const* categoryName);
#endif

MCNAPI void onMainThreadCreate();

MCNAPI void onMainThreadDestroy();

MCNAPI void shutdownProfile();

#ifdef LL_PLAT_C
MCNAPI void syncGPUTiming(uchar contextId, int64 cpuTimestamp, int64 gpuTimestamp, int64 cpuDeltaNS);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI bool& ProfilerInitialized();
// NOLINTEND

} // namespace Core::Profile
