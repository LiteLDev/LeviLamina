#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class DataTransferServiceSessionOpenClosePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceSessionOpenClosePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3fec24;
    ::ll::UntypedStorage<1, 1>  mUnkfbc158;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceSessionOpenClosePayload& operator=(DataTransferServiceSessionOpenClosePayload const&);
    DataTransferServiceSessionOpenClosePayload(DataTransferServiceSessionOpenClosePayload const&);
    DataTransferServiceSessionOpenClosePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataTransferServiceSessionOpenClosePayload() /*override*/;
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
