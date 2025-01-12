#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
