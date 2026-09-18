#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiling::Control { struct CSVRequestArgs; }
namespace ECS::Profiling { class EntitySystemProfiler; }
namespace ECS::Profiling::Diagnostics { struct EntitySystemDiagnosticSummary; }
namespace ECS::Profiling::Diagnostics { struct EntitySystemDiagnosticsDataProvider; }
// clang-format on

namespace ECS::Profiling::Diagnostics {

class EntitySystemDiagnosticSummarizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk58a7ef;
    ::ll::UntypedStorage<1, 1>  mUnk82932e;
    ::ll::UntypedStorage<8, 32> mUnkdb5436;
    ::ll::UntypedStorage<8, 32> mUnkf4420d;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemDiagnosticSummarizer& operator=(EntitySystemDiagnosticSummarizer const&);
    EntitySystemDiagnosticSummarizer(EntitySystemDiagnosticSummarizer const&);
    EntitySystemDiagnosticSummarizer();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticsDataProvider
    createDataProviderFromProfilerData(::ECS::Profiling::EntitySystemProfiler const* profiler) const;

    MCNAPI ::std::optional<::std::string> generateEntitySystemTimingsCSV(
        ::ECS::Profiling::EntitySystemProfiler const* profiler,
        ::Bedrock::Profiling::Control::CSVRequestArgs args
    ) const;

    MCNAPI ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary
    summarizeEntitySystemDiagnostics(::ECS::Profiling::Diagnostics::EntitySystemDiagnosticsDataProvider dataProvider);
#endif
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
