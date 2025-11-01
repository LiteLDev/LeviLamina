#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class PrefabDBClientInitializedPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::PrefabDBClientInitializedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbdfd35;
    ::ll::UntypedStorage<4, 12> mUnkf0e1a6;
    ::ll::UntypedStorage<4, 4> mUnka3ed68;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBClientInitializedPayload& operator=(PrefabDBClientInitializedPayload const&);
    PrefabDBClientInitializedPayload(PrefabDBClientInitializedPayload const&);
    PrefabDBClientInitializedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PrefabDBClientInitializedPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
