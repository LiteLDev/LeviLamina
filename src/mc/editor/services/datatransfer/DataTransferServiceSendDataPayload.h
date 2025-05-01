#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class DataTransferServiceSendDataPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceSendDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2a34f2;
    ::ll::UntypedStorage<8, 32> mUnk56e017;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceSendDataPayload& operator=(DataTransferServiceSendDataPayload const&);
    DataTransferServiceSendDataPayload(DataTransferServiceSendDataPayload const&);
    DataTransferServiceSendDataPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataTransferServiceSendDataPayload() /*override*/;
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
