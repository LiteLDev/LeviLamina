#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class DispatcherInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DispatcherInterface() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response> send(::Bedrock::Http::Request&&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
