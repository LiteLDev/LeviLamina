#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ProfileClient.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Bedrock::Profiler::details { struct StaticProfLabel; }
namespace Core::Profile { class CPUProfileToken; }
namespace brstd { struct source_location; }
// clang-format on

namespace Core::Profile {

class Whisker_ProfileClient : public ::Core::Profile::ProfileClient {
public:
    // Whisker_ProfileClient inner types declare
    // clang-format off
    struct KeepAlive;
    // clang-format on

    // Whisker_ProfileClient inner types define
    struct KeepAlive {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk671c1d;
        // NOLINTEND

    public:
        // prevent constructor by default
        KeepAlive& operator=(KeepAlive const&);
        KeepAlive(KeepAlive const&);
        KeepAlive();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Whisker_ProfileClient() /*override*/ = default;

    virtual void profileFlip() /*override*/;

    virtual void
    enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::CPUProfileToken const&) /*override*/;

    virtual void
    leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::CPUProfileToken const&) /*override*/;

    virtual void generateCPUProfileTokenStatic(
        ::Core::Profile::CPUProfileToken&             target,
        char const*                                   group,
        ::Bedrock::Profiler::details::StaticProfLabel label,
        uint                                          color,
        ::brstd::source_location const&               location
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core::Profile
