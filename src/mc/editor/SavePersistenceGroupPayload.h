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
    ::ll::UntypedStorage<8, 32>  mUnke7e40d;
    ::ll::UntypedStorage<8, 136> mUnkfb714a;
    // NOLINTEND

public:
    // prevent constructor by default
    SavePersistenceGroupPayload& operator=(SavePersistenceGroupPayload const&);
    SavePersistenceGroupPayload(SavePersistenceGroupPayload const&);
    SavePersistenceGroupPayload();
};

} // namespace Editor::Network
