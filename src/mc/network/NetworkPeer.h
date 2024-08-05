#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Compressibility.h"

class NetworkPeer {
public:
    // NetworkPeer inner types declare
    // clang-format off
    struct NetworkStatus;
    // clang-format on

    // NetworkPeer inner types define
    enum class DataStatus {};

    enum class Reliability {};

    struct NetworkStatus {
    public:
        // prevent constructor by default
        NetworkStatus& operator=(NetworkStatus const&);
        NetworkStatus(NetworkStatus const&);
        NetworkStatus();
    };

public:
    // prevent constructor by default
    NetworkPeer& operator=(NetworkPeer const&);
    NetworkPeer(NetworkPeer const&);
    NetworkPeer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkPeer();

    // vIndex: 1
    virtual void
    sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible) = 0;

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const&) = 0;

    // vIndex: 3
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const = 0;

    // vIndex: 4
    virtual void update();

    // vIndex: 5
    virtual void flush(std::function<void()>&& callback);

    // vIndex: 6
    virtual bool isLocal() const;

    // vIndex: 7
    virtual bool isEncrypted() const;

    // NOLINTEND
};
