#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiler::details { struct Category; }
// clang-format on

namespace ProfCat {
// static variables
// NOLINTBEGIN
MCNAPI ::Bedrock::Profiler::details::Category const& BASELINE_CREATOR();

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Profiler::details::Category const& BASELINE_RESOURCELOAD();

MCNAPI ::Bedrock::Profiler::details::Category const& BURST();

MCNAPI ::Bedrock::Profiler::details::Category const& FRAME_BUILDER();

MCNAPI ::Bedrock::Profiler::details::Category const& GRAPHICS_TASKS();

MCNAPI ::Bedrock::Profiler::details::Category const& JSON_UI_SYSTEM();

MCNAPI ::Bedrock::Profiler::details::Category const& MULTIPLAYER_LEVEL();

MCNAPI ::Bedrock::Profiler::details::Category const& ORCHESTRATOR();
#endif

MCNAPI ::Bedrock::Profiler::details::Category const& WHISKER_INTERNAL();
// NOLINTEND

} // namespace ProfCat
