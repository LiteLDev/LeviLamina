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
    ::ll::UntypedStorage<8, 24> mUnk4d6870;
    ::ll::UntypedStorage<8, 24> mUnkf984a5;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBServerVisibilityUpdatePayload& operator=(PrefabDBServerVisibilityUpdatePayload const&);
    PrefabDBServerVisibilityUpdatePayload(PrefabDBServerVisibilityUpdatePayload const&);
    PrefabDBServerVisibilityUpdatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBServerVisibilityUpdatePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
