#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class RpcCallPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::RpcCallPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk77d877;
    ::ll::UntypedStorage<8, 32> mUnke40f81;
    ::ll::UntypedStorage<8, 8>  mUnk845ebb;
    ::ll::UntypedStorage<8, 32> mUnke111e3;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcCallPayload& operator=(RpcCallPayload const&);
    RpcCallPayload(RpcCallPayload const&);
    RpcCallPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RpcCallPayload() /*override*/ = default;
    // NOLINTEND
};

} // namespace Editor::Network
