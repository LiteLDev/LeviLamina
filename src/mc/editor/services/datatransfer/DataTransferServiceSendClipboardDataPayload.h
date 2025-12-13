#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class DataTransferServiceSendClipboardDataPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceSendClipboardDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk954eed;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceSendClipboardDataPayload& operator=(DataTransferServiceSendClipboardDataPayload const&);
    DataTransferServiceSendClipboardDataPayload(DataTransferServiceSendClipboardDataPayload const&);
    DataTransferServiceSendClipboardDataPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataTransferServiceSendClipboardDataPayload() /*override*/;
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
