#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class PlayerMovementStatePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::PlayerMovementStatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc15ff6;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMovementStatePayload& operator=(PlayerMovementStatePayload const&);
    PlayerMovementStatePayload(PlayerMovementStatePayload const&);
    PlayerMovementStatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerMovementStatePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
