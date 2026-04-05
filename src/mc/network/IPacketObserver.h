#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class Packet;
// clang-format on

class IPacketObserver : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void packetSentTo(::NetworkIdentifier const& target, ::Packet const& packet, uint size) = 0;

    virtual void packetReceivedFrom(::NetworkIdentifier const& source, ::Packet const& packet, uint size) = 0;

    virtual void dataSentTo(::NetworkIdentifier const& target, ::std::string_view data) = 0;

    virtual void dataReceivedFrom(::NetworkIdentifier const& source, ::std::string const& data) = 0;

    virtual ~IPacketObserver() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
