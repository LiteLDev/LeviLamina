#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/CounterDisplayFormat.h"
#include "mc/deps/profiler/LegacyCounterFlags.h"
#include "mc/deps/profiler/ProfileClient.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Bedrock::Profiler::details { struct DynamicProfLabel; }
namespace Bedrock::Profiler::details { struct StaticProfLabel; }
namespace Core::Profile { class CPUProfileToken; }
namespace Core::Profile { class CounterToken; }
namespace Core::Profile { class LogMessageToken; }
namespace brstd { struct source_location; }
// clang-format on

namespace Core::Profile {

class TestProf_ProfileClient : public ::Core::Profile::ProfileClient {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TestProf_ProfileClient() /*override*/ = default;

    virtual void
    enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::CPUProfileToken const&) /*override*/;

    virtual void enterCPUProfileDynamic(
        ::Bedrock::Profile::ScopeStackStorage&,
        ::Core::Profile::CPUProfileToken const&,
        ::Bedrock::Profiler::details::DynamicProfLabel
    ) /*override*/;

    virtual void
    leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::CPUProfileToken const&) /*override*/;

    virtual void counterSet(::Core::Profile::CounterToken const&, int64) /*override*/;

    virtual void emitLogMessage(::Core::Profile::LogMessageToken const&) /*override*/;

    virtual void emitLogMessageDynamic(
        ::Core::Profile::LogMessageToken const&,
        ::Bedrock::Profiler::details::DynamicProfLabel
    ) /*override*/;

    virtual void generateCPUProfileTokenStatic(
        ::Core::Profile::CPUProfileToken&             target,
        char const*                                   group,
        ::Bedrock::Profiler::details::StaticProfLabel label,
        uint                                          color,
        ::brstd::source_location const&               location
    ) /*override*/;

    virtual void generateCPUProfileTokenLegacy(
        ::Core::Profile::CPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    ) /*override*/;

    virtual void generateCPUProfileTokenDynamic(
        ::Core::Profile::CPUProfileToken&,
        char const*,
        uint,
        ::brstd::source_location const&
    ) /*override*/;

    virtual void generateCounterTokenWithConfig(
        ::Core::Profile::CounterToken&,
        char const*,
        ::Core::Profile::CounterDisplayFormat,
        int64,
        ::Core::Profile::LegacyCounterFlags
    ) /*override*/;

    virtual void generateLogMessageTokenStatic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    ) /*override*/;

    virtual void generateLogMessageTokenDynamic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        uint,
        ::brstd::source_location const&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core::Profile
