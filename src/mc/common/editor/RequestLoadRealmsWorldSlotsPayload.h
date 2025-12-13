#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RequestLoadRealmsWorldSlotsPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RequestLoadRealmsWorldSlotsPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk25f716;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestLoadRealmsWorldSlotsPayload& operator=(RequestLoadRealmsWorldSlotsPayload const&);
    RequestLoadRealmsWorldSlotsPayload(RequestLoadRealmsWorldSlotsPayload const&);
    RequestLoadRealmsWorldSlotsPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RequestLoadRealmsWorldSlotsPayload() /*override*/;
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
