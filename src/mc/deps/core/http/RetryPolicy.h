#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class RetryPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb21c3b;
    // NOLINTEND

public:
    // prevent constructor by default
    RetryPolicy& operator=(RetryPolicy const&);
    RetryPolicy(RetryPolicy const&);
    RetryPolicy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RetryPolicy(
        ::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>&& implementation
    );

    MCNAPI ::std::optional<::std::chrono::seconds> getDelay(::Bedrock::Http::Response const& response) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>
    Always(::std::chrono::seconds delay);

    MCNAPI static ::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)> Chained(
        ::std::initializer_list<
            ::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>>&& retryChain
    );

#ifdef LL_PLAT_C
    MCNAPI static ::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>
    Count(int attempts, ::std::chrono::seconds retryDelay);
#endif

    MCNAPI static ::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>
    ExponentialBackOff(::std::chrono::seconds baseDelay, ::std::chrono::seconds maxDelay);

#ifdef LL_PLAT_C
    MCNAPI static ::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>
    RetryAfterHeader(int maxAttempts);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>&& implementation);
    // NOLINTEND
};

} // namespace Bedrock::Http
