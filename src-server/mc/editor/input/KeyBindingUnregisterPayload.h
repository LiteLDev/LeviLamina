#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class KeyBindingUnregisterPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::KeyBindingUnregisterPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk45a7ee;
    ::ll::UntypedStorage<8, 48> mUnkde396a;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyBindingUnregisterPayload& operator=(KeyBindingUnregisterPayload const&);
    KeyBindingUnregisterPayload(KeyBindingUnregisterPayload const&);
    KeyBindingUnregisterPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~KeyBindingUnregisterPayload() /*override*/;
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

}
