#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class EditorSessionLifecyclePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::EditorSessionLifecyclePayload> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorSessionLifecyclePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
