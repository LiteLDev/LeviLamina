#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class BatchedNetworkPeer : public ::NetworkPeer {
public:
    // BatchedNetworkPeer inner types declare
    // clang-format off
    struct DataCallback;
    // clang-format on

    // BatchedNetworkPeer inner types define
    struct DataCallback {
    public:
        // prevent constructor by default
        DataCallback& operator=(DataCallback const&);
        DataCallback(DataCallback const&);
        DataCallback();

    public:
        // NOLINTBEGIN
        MCAPI DataCallback(struct BatchedNetworkPeer::DataCallback&&);

        MCAPI struct BatchedNetworkPeer::DataCallback& operator=(struct BatchedNetworkPeer::DataCallback&&);

        MCAPI ~DataCallback();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BatchedNetworkPeer& operator=(BatchedNetworkPeer const&);
    BatchedNetworkPeer(BatchedNetworkPeer const&);
    BatchedNetworkPeer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BatchedNetworkPeer() = default;

    // vIndex: 1
    virtual void
    sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

    // vIndex: 3
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

    // vIndex: 4
    virtual void update();

    // vIndex: 5
    virtual void flush(std::function<void()>&& callback);

    MCAPI BatchedNetworkPeer(std::shared_ptr<class NetworkPeer> peer, class Scheduler& scheduler);

    MCAPI void setAsyncEnabled(bool val);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _startSendTask();

    // NOLINTEND
};
