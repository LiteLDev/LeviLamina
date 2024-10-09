#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/Connector.h"

class RemoteConnector {
public:
    // prevent constructor by default
    RemoteConnector& operator=(RemoteConnector const&);
    RemoteConnector(RemoteConnector const&);
    RemoteConnector();

public:
    // NOLINTBEGIN
    MCVAPI ~RemoteConnector();

    MCAPI
    RemoteConnector(struct Connector::ConnectionCallbacks&, class Bedrock::NonOwnerPointer<class AppPlatform> const&);

    // NOLINTEND
};
