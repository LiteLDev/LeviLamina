#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class KeyBindingStatePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::KeyBindingStatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk4b85c8;
    ::ll::UntypedStorage<8, 48> mUnk95b3b0;
    ::ll::UntypedStorage<4, 8>  mUnkfd7467;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyBindingStatePayload& operator=(KeyBindingStatePayload const&);
    KeyBindingStatePayload(KeyBindingStatePayload const&);
    KeyBindingStatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~KeyBindingStatePayload() /*override*/;
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
