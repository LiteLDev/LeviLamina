#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiler::details { struct Category; }
// clang-format on

namespace ProfCat {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Profiler::details::Category const& ACTOR_RENDER_SYSTEM();
#endif

MCNAPI ::Bedrock::Profiler::details::Category const& ACTOR_SYSTEM();

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Profiler::details::Category const& BASELINE();
#endif

MCNAPI ::Bedrock::Profiler::details::Category const& BASELINE_CREATOR();

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Profiler::details::Category const& BASELINE_RESOURCELOAD();

MCNAPI ::Bedrock::Profiler::details::Category const& BURST();

MCNAPI ::Bedrock::Profiler::details::Category const& JSON_UI_SYSTEM();

MCNAPI ::Bedrock::Profiler::details::Category const& LEVEL_RENDERER();
#endif

MCNAPI ::Bedrock::Profiler::details::Category const& MAIN_APP();

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Profiler::details::Category const& MAIN_LOOP();

MCNAPI ::Bedrock::Profiler::details::Category const& MULTIPLAYER_LEVEL();
#endif

MCNAPI ::Bedrock::Profiler::details::Category const& NETWORK_SYSTEM();

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Profiler::details::Category const& ORCHESTRATOR();
#endif

MCNAPI ::Bedrock::Profiler::details::Category const& SCHEDULER();

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Profiler::details::Category const& UISCENE();
#endif
// NOLINTEND

} // namespace ProfCat
