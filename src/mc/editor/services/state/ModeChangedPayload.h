#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ModeChangedPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::ModeChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4341bb;
    // NOLINTEND

public:
    // prevent constructor by default
    ModeChangedPayload& operator=(ModeChangedPayload const&);
    ModeChangedPayload(ModeChangedPayload const&);
    ModeChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ModeChangedPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
