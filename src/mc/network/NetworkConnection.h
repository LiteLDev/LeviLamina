#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/NetworkPeer.h"

class NetworkConnection {
public:
    // NetworkConnection inner types declare
    // clang-format off
    struct PausedPacket;
    // clang-format on

    // NetworkConnection inner types define
    struct PausedPacket {
    public:
        // prevent constructor by default
        PausedPacket& operator=(PausedPacket const&);
        PausedPacket(PausedPacket const&);
        PausedPacket();

    public:
        // NOLINTBEGIN
        MCAPI ~PausedPacket();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetworkConnection& operator=(NetworkConnection const&);
    NetworkConnection(NetworkConnection const&);
    NetworkConnection();

public:
    // NOLINTBEGIN
    MCAPI NetworkConnection(
        class NetworkIdentifier const&,
        std::shared_ptr<class NetworkPeer>,
        std::chrono::steady_clock::time_point,
        bool,
        class Bedrock::NonOwnerPointer<class IPacketObserver>,
        class Scheduler&,
        bool,
        bool
    );

    MCAPI ::NetworkPeer::DataStatus
    receivePacket(std::string&, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

    MCAPI ~NetworkConnection();

    // NOLINTEND
};
