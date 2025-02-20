#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ReloadEditorClientPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ReloadEditorClientPayload> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReloadEditorClientPayload() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
