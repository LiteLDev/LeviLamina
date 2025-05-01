#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class DataTransferServiceRegisterCollectionPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceRegisterCollectionPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9c010d;
    ::ll::UntypedStorage<8, 32> mUnkd74638;
    ::ll::UntypedStorage<8, 32> mUnk9e5337;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceRegisterCollectionPayload& operator=(DataTransferServiceRegisterCollectionPayload const&);
    DataTransferServiceRegisterCollectionPayload(DataTransferServiceRegisterCollectionPayload const&);
    DataTransferServiceRegisterCollectionPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataTransferServiceRegisterCollectionPayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::DataTransferServiceRegisterCollectionPayload&
    operator=(::Editor::Network::DataTransferServiceRegisterCollectionPayload&&);
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
