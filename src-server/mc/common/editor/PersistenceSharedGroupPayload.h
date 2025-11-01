#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class PersistenceSharedGroupPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::PersistenceSharedGroupPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk35b459;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceSharedGroupPayload& operator=(PersistenceSharedGroupPayload const&);
    PersistenceSharedGroupPayload(PersistenceSharedGroupPayload const&);
    PersistenceSharedGroupPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PersistenceSharedGroupPayload() /*override*/;
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
