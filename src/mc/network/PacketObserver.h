#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketObserver.h"

class PacketObserver : public ::IPacketObserver {
public:
    // PacketObserver inner types declare
    // clang-format off
    struct PacketStats;
    // clang-format on

    // PacketObserver inner types define
    struct PacketStats {
    public:
        // prevent constructor by default
        PacketStats& operator=(PacketStats const&);
        PacketStats(PacketStats const&);
        PacketStats();

    public:
        // NOLINTBEGIN
        MCAPI explicit PacketStats(uint id);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PacketObserver& operator=(PacketObserver const&);
    PacketObserver(PacketObserver const&);
    PacketObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketObserver();

    // vIndex: 1
    virtual void packetSentTo(class NetworkIdentifier const&, class Packet const&, uint size);

    // vIndex: 2
    virtual void packetReceivedFrom(class NetworkIdentifier const&, class Packet const&, uint size);

    // vIndex: 3
    virtual void dataSentTo(class NetworkIdentifier const&, std::string_view);

    // vIndex: 4
    virtual void dataReceivedFrom(class NetworkIdentifier const&, std::string const&);

    // vIndex: 5
    virtual void reset();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void dataReceivedFrom$(class NetworkIdentifier const&, std::string const&);

    MCAPI void dataSentTo$(class NetworkIdentifier const&, std::string_view);

    MCAPI void packetReceivedFrom$(class NetworkIdentifier const&, class Packet const&, uint size);

    MCAPI void packetSentTo$(class NetworkIdentifier const&, class Packet const&, uint size);

    MCAPI void reset$();

    // NOLINTEND
};
