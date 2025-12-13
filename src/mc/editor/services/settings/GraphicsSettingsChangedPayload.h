#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class GraphicsSettingsChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::GraphicsSettingsChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 11> mUnkfa4646;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsSettingsChangedPayload& operator=(GraphicsSettingsChangedPayload const&);
    GraphicsSettingsChangedPayload(GraphicsSettingsChangedPayload const&);
    GraphicsSettingsChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GraphicsSettingsChangedPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
