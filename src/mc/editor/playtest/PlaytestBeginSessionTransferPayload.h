#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class PlaytestBeginSessionTransferPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PlaytestBeginSessionTransferPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk808178;
    ::ll::UntypedStorage<8, 32> mUnk6c28c0;
    ::ll::UntypedStorage<8, 32> mUnkd4ac60;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaytestBeginSessionTransferPayload(PlaytestBeginSessionTransferPayload const&);
    PlaytestBeginSessionTransferPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlaytestBeginSessionTransferPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::PlaytestBeginSessionTransferPayload&
    operator=(::Editor::Network::PlaytestBeginSessionTransferPayload const&);
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
