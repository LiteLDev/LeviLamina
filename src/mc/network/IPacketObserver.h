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
    virtual void packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint) = 0;

    virtual void packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint) = 0;

    virtual void dataSentTo(::NetworkIdentifier const&, ::std::string_view) = 0;

    virtual void dataReceivedFrom(::NetworkIdentifier const&, ::std::string const&) = 0;

    virtual ~IPacketObserver() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
