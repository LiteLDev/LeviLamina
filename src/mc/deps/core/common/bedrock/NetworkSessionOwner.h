#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/TransportLayer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class NetworkSessionOwner : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    NetworkSessionOwner& operator=(NetworkSessionOwner const&);
    NetworkSessionOwner(NetworkSessionOwner const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkSessionOwner() = default;

    MCAPI NetworkSessionOwner();

    MCAPI void createNetworkSession(::TransportLayer);

    MCAPI void destroyNetworkSession();

    MCAPI ::TransportLayer getTransportLayer() const;

    MCAPI bool hasNetworkSession() const;

    // NOLINTEND
};
