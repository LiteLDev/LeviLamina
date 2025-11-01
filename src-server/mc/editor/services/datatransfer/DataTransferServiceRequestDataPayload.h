#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class DataTransferServiceRequestDataPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceRequestDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk73ce7c;
    ::ll::UntypedStorage<8, 32> mUnk2c41bd;
    ::ll::UntypedStorage<1, 1> mUnke3b760;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceRequestDataPayload& operator=(DataTransferServiceRequestDataPayload const&);
    DataTransferServiceRequestDataPayload(DataTransferServiceRequestDataPayload const&);
    DataTransferServiceRequestDataPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataTransferServiceRequestDataPayload() /*override*/;
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
