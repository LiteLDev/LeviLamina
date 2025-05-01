#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class DataTransferServiceDataRequestResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceDataRequestResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5dce72;
    ::ll::UntypedStorage<8, 32> mUnk78791d;
    ::ll::UntypedStorage<1, 1>  mUnke17ec6;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceDataRequestResponsePayload& operator=(DataTransferServiceDataRequestResponsePayload const&);
    DataTransferServiceDataRequestResponsePayload(DataTransferServiceDataRequestResponsePayload const&);
    DataTransferServiceDataRequestResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataTransferServiceDataRequestResponsePayload() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
