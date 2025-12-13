#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class UndoOperationPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::UndoOperationPayload> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UndoOperationPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
