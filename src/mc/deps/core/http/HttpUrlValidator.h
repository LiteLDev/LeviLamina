#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class DispatcherProcess; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class HttpUrlValidator : public ::Bedrock::Http::DispatcherProcess {
public:
    // prevent constructor by default
    HttpUrlValidator& operator=(HttpUrlValidator const&);
    HttpUrlValidator(HttpUrlValidator const&);
    HttpUrlValidator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HttpUrlValidator() = default;

    // vIndex: 1
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&& request);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
          send$(class Bedrock::Http::Request&& request);

    // NOLINTEND
};

}; // namespace Bedrock::Http
