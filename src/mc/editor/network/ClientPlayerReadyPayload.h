#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ClientPlayerReadyPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::ClientPlayerReadyPayload> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientPlayerReadyPayload() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
