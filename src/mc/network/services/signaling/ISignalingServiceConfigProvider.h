#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/services/signaling/SignalingServiceConfig.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class ISignalingServiceConfigProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISignalingServiceConfigProvider() /*override*/ = default;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Url>>
        getUrl(::NetherNet::NetworkID) = 0;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::SignalingServiceConfig::Token>> getAuthToken() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
