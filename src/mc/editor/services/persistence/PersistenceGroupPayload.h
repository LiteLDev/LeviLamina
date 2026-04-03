#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class PersistenceGroupPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::PersistenceGroupPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk8881a1;
    ::ll::UntypedStorage<4, 4>   mUnke00fc5;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupPayload& operator=(PersistenceGroupPayload const&);
    PersistenceGroupPayload(PersistenceGroupPayload const&);
    PersistenceGroupPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersistenceGroupPayload() /*override*/;
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
