#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class EncryptedNetworkPeer : public ::NetworkPeer {
public:
    // prevent constructor by default
    EncryptedNetworkPeer& operator=(EncryptedNetworkPeer const&);
    EncryptedNetworkPeer(EncryptedNetworkPeer const&);
    EncryptedNetworkPeer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EncryptedNetworkPeer();

    // vIndex: 1
    virtual void
    sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

    // vIndex: 3
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

    // vIndex: 7
    virtual bool isEncrypted() const;

    MCAPI void enableEncryption(std::string const& symmetricKey);

    // NOLINTEND
};
