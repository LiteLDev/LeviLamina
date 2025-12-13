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
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPacketHandlerDispatcher() = default;

    virtual void handle(::NetworkIdentifier const&, ::NetEventCallback&, ::std::shared_ptr<::Packet>&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
