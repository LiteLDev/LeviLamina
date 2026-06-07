#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ProfileClient.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/platform/brstd/basic_cstring_view.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Bedrock::Profile::Whisker { struct ScopeData; }
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

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~KeepAlive();
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~Whisker_ProfileClient() /*override*/ = default;

    virtual void onFrameTransition(uchar previousFrameType) /*override*/;

    virtual void onThreadCreate(
        ::brstd::basic_cstring_view<char, ::std::char_traits<char>> name,
        ::Core::Profile::ThreadFrameType                            frameType
    ) /*override*/;

    virtual void onThreadDestroy() /*override*/;

    virtual void onMainThreadCreate() /*override*/;

    virtual void onMainThreadDestroy() /*override*/;

    virtual void enterCPUProfile(
        ::Bedrock::Profile::ScopeStackStorage&  scope,
        ::Core::Profile::CPUProfileToken const& token
    ) /*override*/;

    virtual void leaveCPUProfile(
        ::Bedrock::Profile::ScopeStackStorage&  scope,
        ::Core::Profile::CPUProfileToken const& token
    ) /*override*/;

    virtual void generateCPUProfileTokenStatic(
        ::Core::Profile::CPUProfileToken&             target,
        char const*                                   group,
        ::Bedrock::Profiler::details::StaticProfLabel label,
        uint                                          color,
        ::brstd::source_location const&               location
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void fetchData(::gsl::span<::Bedrock::Profile::Whisker::ScopeData> output, ::std::thread::id thread) const;

    MCNAPI ::std::shared_ptr<::Core::Profile::Whisker_ProfileClient::KeepAlive const>
    makeActive(::std::string_view consumerName);

    MCNAPI void prepareForFetch(::Bedrock::Profile::Whisker::ScopeData& output, void const* key) const;

    MCNAPI void
    queryThreadIDsByType(::std::vector<::std::thread::id>& output, ::Core::Profile::ThreadFrameType threadType) const;

    MCNAPI void resolveUniqueKeysByName(
        ::gsl::span<void const*>              output,
        ::gsl::span<::std::string_view const> names,
        ::std::thread::id                     thread
    ) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Core::Profile::Whisker_ProfileClient getInterface();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onFrameTransition(uchar previousFrameType);

    MCNAPI void $onThreadCreate(
        ::brstd::basic_cstring_view<char, ::std::char_traits<char>> name,
        ::Core::Profile::ThreadFrameType                            frameType
    );

    MCNAPI void $onThreadDestroy();

    MCNAPI void $onMainThreadCreate();

    MCNAPI void $onMainThreadDestroy();

    MCNAPI void
    $enterCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::CPUProfileToken const& token);

    MCNAPI void
    $leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::CPUProfileToken const& token);

    MCNAPI void $generateCPUProfileTokenStatic(
        ::Core::Profile::CPUProfileToken&             target,
        char const*                                   group,
        ::Bedrock::Profiler::details::StaticProfLabel label,
        uint                                          color,
        ::brstd::source_location const&               location
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::Profile
