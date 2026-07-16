#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiler::details { struct Category; }
namespace Bedrock::Profiler::details { struct ScopeConfig; }
namespace Bedrock::Profiler::details { struct StaticProfLabel; }
namespace Core::Profile { class AnnotationToken; }
namespace brstd { struct source_location; }
// clang-format on

namespace Bedrock::Profiler::details {
// functions
// NOLINTBEGIN
MCNAPI ::Core::Profile::AnnotationToken CreateScopeToken(
    ::Bedrock::Profiler::details::Category        category,
    uchar                                         flags,
    ::Bedrock::Profiler::details::StaticProfLabel label,
    ::Bedrock::Profiler::details::ScopeConfig     config,
    ::brstd::source_location const&               location
);
// NOLINTEND

} // namespace Bedrock::Profiler::details
