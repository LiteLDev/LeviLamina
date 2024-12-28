#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    // vIndex: 0
    virtual ~DataTransferServiceSendClipboardDataPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
