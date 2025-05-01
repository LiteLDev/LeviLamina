#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RequestUploadWorldPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RequestUploadWorldPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb38101;
    ::ll::UntypedStorage<4, 4>  mUnk61f918;
    ::ll::UntypedStorage<8, 32> mUnk31b2b8;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestUploadWorldPayload(RequestUploadWorldPayload const&);
    RequestUploadWorldPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RequestUploadWorldPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::RequestUploadWorldPayload& operator=(::Editor::Network::RequestUploadWorldPayload const&);
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
