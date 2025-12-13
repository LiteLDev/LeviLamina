#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class PrefabDBClientPositionUpdatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PrefabDBClientPositionUpdatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk6ee4a4;
    ::ll::UntypedStorage<4, 4>  mUnk594eb1;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBClientPositionUpdatePayload& operator=(PrefabDBClientPositionUpdatePayload const&);
    PrefabDBClientPositionUpdatePayload(PrefabDBClientPositionUpdatePayload const&);
    PrefabDBClientPositionUpdatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBClientPositionUpdatePayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
