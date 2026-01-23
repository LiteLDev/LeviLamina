#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class SavePersistenceGroupPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SavePersistenceGroupPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnka8777e;
    ::ll::UntypedStorage<8, 136> mUnkfb714a;
    // NOLINTEND

public:
    // prevent constructor by default
    SavePersistenceGroupPayload& operator=(SavePersistenceGroupPayload const&);
    SavePersistenceGroupPayload(SavePersistenceGroupPayload const&);
    SavePersistenceGroupPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SavePersistenceGroupPayload() /*override*/;
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
