#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class RetryPolicy {

public:
    // prevent constructor by default
    RetryPolicy& operator=(RetryPolicy const&) = delete;
    RetryPolicy(RetryPolicy const&)            = delete;
    RetryPolicy()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getDelay\@RetryPolicy\@Http\@Bedrock\@\@QEBA?AV?$optional\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@std\@\@AEBVResponse\@23\@\@Z
     */
    MCAPI std::optional<std::chrono::seconds> getDelay(class Bedrock::Http::Response const&) const;
    // NOLINTEND
};

}; // namespace Bedrock::Http
