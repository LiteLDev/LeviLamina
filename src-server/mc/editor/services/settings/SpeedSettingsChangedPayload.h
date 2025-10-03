#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class SpeedSettingsChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SpeedSettingsChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk224c84;
    // NOLINTEND

public:
    // prevent constructor by default
    SpeedSettingsChangedPayload& operator=(SpeedSettingsChangedPayload const&);
    SpeedSettingsChangedPayload(SpeedSettingsChangedPayload const&);
    SpeedSettingsChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpeedSettingsChangedPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
