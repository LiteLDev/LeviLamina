#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class PrefabDBServerVisibilityUpdatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PrefabDBServerVisibilityUpdatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcaed7d;
    ::ll::UntypedStorage<8, 24> mUnk59d79f;
    ::ll::UntypedStorage<8, 24> mUnkc30848;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBServerVisibilityUpdatePayload& operator=(PrefabDBServerVisibilityUpdatePayload const&);
    PrefabDBServerVisibilityUpdatePayload(PrefabDBServerVisibilityUpdatePayload const&);
    PrefabDBServerVisibilityUpdatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBServerVisibilityUpdatePayload() /*override*/;
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
