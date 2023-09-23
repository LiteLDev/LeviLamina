#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/Connector.h"

class RemoteConnector {
public:
    // prevent constructor by default
    RemoteConnector& operator=(RemoteConnector const&);
    RemoteConnector(RemoteConnector const&);
    RemoteConnector();

public:
    // NOLINTBEGIN
    // symbol: ??1RemoteConnector@@UEAA@XZ
    MCVAPI ~RemoteConnector();

    // symbol:
    // ??0RemoteConnector@@QEAA@AEAUConnectionCallbacks@Connector@@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    MCAPI
    RemoteConnector(struct Connector::ConnectionCallbacks&, class Bedrock::NonOwnerPointer<class AppPlatform> const&);

    // NOLINTEND
};
