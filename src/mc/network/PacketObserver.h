#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketObserver.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class Packet;
// clang-format on

class PacketObserver : public ::IPacketObserver {
public:
    // PacketObserver inner types declare
    // clang-format off
    struct PacketStats;
    // clang-format on

    // PacketObserver inner types define
    struct PacketStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk8e1033;
        ::ll::UntypedStorage<4, 4> mUnk1b3300;
        ::ll::UntypedStorage<4, 4> mUnk5d3915;
        ::ll::UntypedStorage<4, 4> mUnkc76f5b;
        ::ll::UntypedStorage<4, 4> mUnkf9db13;
        ::ll::UntypedStorage<4, 4> mUnkc40279;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketStats& operator=(PacketStats const&);
        PacketStats(PacketStats const&);
        PacketStats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk78c417;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketObserver& operator=(PacketObserver const&);
    PacketObserver(PacketObserver const&);
    PacketObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint size) /*override*/;

    // vIndex: 2
    virtual void packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint size) /*override*/;

    // vIndex: 3
    virtual void dataSentTo(::NetworkIdentifier const&, ::std::string_view) /*override*/;

    // vIndex: 4
    virtual void dataReceivedFrom(::NetworkIdentifier const&, ::std::string const&) /*override*/;

    // vIndex: 5
    virtual void reset();

    // vIndex: 0
    virtual ~PacketObserver() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint size);

    MCNAPI void $packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint size);

    MCNAPI void $dataSentTo(::NetworkIdentifier const&, ::std::string_view);

    MCNAPI void $dataReceivedFrom(::NetworkIdentifier const&, ::std::string const&);

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
