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
    // vIndex: 0, symbol: __gen_??1NetworkSessionOwner@@UEAA@XZ
    virtual ~NetworkSessionOwner() = default;

    // symbol: ??0NetworkSessionOwner@@QEAA@XZ
    MCAPI NetworkSessionOwner();

    // symbol: ?createNetworkSession@NetworkSessionOwner@@QEAAXW4TransportLayer@@@Z
    MCAPI void createNetworkSession(::TransportLayer);

    // symbol: ?destroyNetworkSession@NetworkSessionOwner@@QEAAXXZ
    MCAPI void destroyNetworkSession();

    // symbol: ?getTransportLayer@NetworkSessionOwner@@QEBA?AW4TransportLayer@@XZ
    MCAPI ::TransportLayer getTransportLayer() const;

    // symbol: ?hasNetworkSession@NetworkSessionOwner@@QEBA_NXZ
    MCAPI bool hasNetworkSession() const;

    // NOLINTEND
};
