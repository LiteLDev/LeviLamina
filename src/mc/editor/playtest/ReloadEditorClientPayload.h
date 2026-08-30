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
    virtual ~ReloadEditorClientPayload() /*override*/;
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
