#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/TransportLayer.h"

class NetworkSessionOwner : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka7bd76;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSessionOwner& operator=(NetworkSessionOwner const&);
    NetworkSessionOwner(NetworkSessionOwner const&);
    NetworkSessionOwner();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkSessionOwner() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void createNetworkSession(::TransportLayer transportLayer);

    MCAPI void destroyNetworkSession();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
