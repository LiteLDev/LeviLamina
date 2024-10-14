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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForConnector();

    MCAPI static void** $vftableForNetworkEnableDisableListener();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
