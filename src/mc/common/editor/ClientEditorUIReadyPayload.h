#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ClientEditorUIReadyPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ClientEditorUIReadyPayload> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientEditorUIReadyPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
