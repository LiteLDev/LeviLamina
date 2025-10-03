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
    MCNAPI ~RetryPolicy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)> Chained(
        ::std::initializer_list<
            ::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>>&& retryChain
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
