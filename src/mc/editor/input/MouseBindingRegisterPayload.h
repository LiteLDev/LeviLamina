#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class MouseBindingRegisterPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::MouseBindingRegisterPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk7135e9;
    ::ll::UntypedStorage<8, 48> mUnk192cd4;
    ::ll::UntypedStorage<4, 4>  mUnkf381c3;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseBindingRegisterPayload& operator=(MouseBindingRegisterPayload const&);
    MouseBindingRegisterPayload(MouseBindingRegisterPayload const&);
    MouseBindingRegisterPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MouseBindingRegisterPayload() /*override*/;
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
