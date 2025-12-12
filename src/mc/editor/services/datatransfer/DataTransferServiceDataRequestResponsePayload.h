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
#ifdef LL_PLAT_S
    virtual ~DataTransferServiceDataRequestResponsePayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~DataTransferServiceDataRequestResponsePayload() /*override*/;
#endif

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
