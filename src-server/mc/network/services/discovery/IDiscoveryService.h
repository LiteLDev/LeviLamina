#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/CachedAsync.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Status; }
namespace Bedrock::Services { struct EnvironmentQueryResponse; }
// clang-format on

namespace Bedrock::Services {

class IDiscoveryService {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDiscoveryService() = default;

    // vIndex: 1
    virtual ::Bedrock::Threading::CachedAsync<::std::shared_ptr<::Bedrock::Services::EnvironmentQueryResponse const>> getServiceEndpoints() const = 0;

    // vIndex: 2
    virtual void reset() = 0;

    // vIndex: 3
    virtual ::Bedrock::Http::Status const& getStatus() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
