#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
        class NetworkIdentifier const&                        id,
        std::shared_ptr<class NetworkPeer>                    peer,
        std::chrono::steady_clock::time_point                 lastPacketTime,
        bool                                                  isSafeAndFast,
        class Bedrock::NonOwnerPointer<class IPacketObserver> packetObserver,
        class Scheduler&                                      mainThread,
        bool                                                  isRawRecordingEnabled,
        bool                                                  encryptionDisabled
    );

    MCAPI ::NetworkPeer::DataStatus receivePacket(
        std::string&                                                  receiveBuffer,
        std::shared_ptr<std::chrono::steady_clock::time_point> const& timepointPtr
    );

    MCAPI ~NetworkConnection();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class NetworkIdentifier const&                        id,
        std::shared_ptr<class NetworkPeer>                    peer,
        std::chrono::steady_clock::time_point                 lastPacketTime,
        bool                                                  isSafeAndFast,
        class Bedrock::NonOwnerPointer<class IPacketObserver> packetObserver,
        class Scheduler&                                      mainThread,
        bool                                                  isRawRecordingEnabled,
        bool                                                  encryptionDisabled
    );

    MCAPI void dtor$();

    // NOLINTEND
};
