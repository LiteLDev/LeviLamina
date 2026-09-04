#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RestartServiceRequestRestartPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RestartServiceRequestRestartPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk1ff17c;
    // NOLINTEND

public:
    // prevent constructor by default
    RestartServiceRequestRestartPayload& operator=(RestartServiceRequestRestartPayload const&);
    RestartServiceRequestRestartPayload(RestartServiceRequestRestartPayload const&);
    RestartServiceRequestRestartPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RestartServiceRequestRestartPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
