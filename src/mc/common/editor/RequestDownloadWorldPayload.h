#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RequestDownloadWorldPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RequestDownloadWorldPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc6d953;
    ::ll::UntypedStorage<4, 4>  mUnkbce38a;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestDownloadWorldPayload& operator=(RequestDownloadWorldPayload const&);
    RequestDownloadWorldPayload(RequestDownloadWorldPayload const&);
    RequestDownloadWorldPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RequestDownloadWorldPayload() /*override*/;
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
