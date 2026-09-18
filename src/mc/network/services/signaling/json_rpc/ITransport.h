#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Result.h"

namespace JsonRpc {

class ITransport {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITransport() = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Result<void>>
    sendJsonRpc(::std::optional<::std::string> const& messageId, ::std::string const& message) const = 0;
    // NOLINTEND
};

} // namespace JsonRpc
