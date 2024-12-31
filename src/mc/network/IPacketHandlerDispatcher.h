#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetEventCallback;
class NetworkIdentifier;
class Packet;
// clang-format on

class IPacketHandlerDispatcher {
public:
    // prevent constructor by default
    IPacketHandlerDispatcher& operator=(IPacketHandlerDispatcher const&);
    IPacketHandlerDispatcher(IPacketHandlerDispatcher const&);
    IPacketHandlerDispatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPacketHandlerDispatcher() = default;

    // vIndex: 1
    virtual void handle(::NetworkIdentifier const&, ::NetEventCallback&, ::std::shared_ptr<::Packet>&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
