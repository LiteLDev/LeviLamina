#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/http/HeaderCollection.h"
#include "mc/deps/core/http/IResponseBody.h"
#include "mc/deps/core/http/Status.h"

namespace Bedrock::Http {

class Response {
public:
    Bedrock::Http::HeaderCollection                                        mHeaders;
    gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IResponseBody>> mBody;
    Bedrock::Http::Status                                                  mStatus;

    ~Response()                          = default;
    Response& operator=(Response const&) = default;
    MCAPI std::string getBodyAsUtf8String() const;
};

} // namespace Bedrock::Http
