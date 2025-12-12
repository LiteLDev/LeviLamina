#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class AppPlatformNetworkSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatformNetworkSettings() /*override*/ = default;

    virtual bool requiresNetworkOutageMessaging() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $requiresNetworkOutageMessaging() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
