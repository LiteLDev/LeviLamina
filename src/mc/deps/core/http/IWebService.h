#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct WebServiceError; }
namespace Bedrock::Threading { struct DelayableTaskGroup; }
// clang-format on

namespace Bedrock::Http {

class IWebService {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response> sendRawRequest(::Bedrock::Http::Request) = 0;

    virtual ::Bedrock::Threading::DelayableTaskGroup& getTaskGroup() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
