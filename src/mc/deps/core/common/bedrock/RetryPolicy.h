#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class RetryPolicy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_RETRYPOLICY
public:
    RetryPolicy& operator=(RetryPolicy const&) = delete;
    RetryPolicy(RetryPolicy const&)            = delete;
    RetryPolicy()                              = delete;
#endif

public:
    /**
     * @symbol
     * ?getDelay\@RetryPolicy\@Http\@Bedrock\@\@QEBA?AV?$optional\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@std\@\@AEBVResponse\@23\@\@Z
     */
    MCAPI class std::optional<class std::chrono::duration<__int64, struct std::ratio<1, 1>>>
    getDelay(class Bedrock::Http::Response const&) const;
};

}; // namespace Bedrock::Http
