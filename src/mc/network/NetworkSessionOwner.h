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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkSessionOwner() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkSessionOwner();

    MCAPI void createNetworkSession(::TransportLayer transportLayer);

    MCAPI void destroyNetworkSession();

    MCAPI bool hasNetworkSession() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
