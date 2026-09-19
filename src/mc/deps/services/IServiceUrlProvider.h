#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
// clang-format on

namespace Bedrock::Services {

class IServiceUrlProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServiceUrlProvider() = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getServiceUrl(::std::string const& serviceName) const = 0;
    // NOLINTEND
};

} // namespace Bedrock::Services
