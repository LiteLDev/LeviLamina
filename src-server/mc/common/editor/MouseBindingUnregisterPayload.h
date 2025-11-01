#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class MouseBindingUnregisterPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MouseBindingUnregisterPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk80d815;
    ::ll::UntypedStorage<8, 48> mUnk9979ae;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseBindingUnregisterPayload& operator=(MouseBindingUnregisterPayload const&);
    MouseBindingUnregisterPayload(MouseBindingUnregisterPayload const&);
    MouseBindingUnregisterPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MouseBindingUnregisterPayload() /*override*/;
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
