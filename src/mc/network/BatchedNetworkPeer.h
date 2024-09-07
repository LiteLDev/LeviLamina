#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/external/spsc_queue/SPSCQueue.h"

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

        std::string           data;         // this+0x0
        Compressibility       compressible; // this+0x20
        std::function<void()> callback;     // this+0x28

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


    BinaryStream                                     mOutgoingData;       // this+0x18
    uint64_t                                         mCompressibleBytes;  // this+0x80
    std::string                                      mIncomingDataBuffer; // this+0x88
    std::unique_ptr<ReadOnlyBinaryStream>            mIncomingData;       // this+0xA8
    std::unique_ptr<TaskGroup>                       mTaskGroup;          // this+0xB0
    SPSCQueue<BatchedNetworkPeer::DataCallback, 512> mSendQueue;          // this+0xB8
    std::atomic_bool                                 mTaskRunning;        // this+0x108
    std::atomic_uint64_t                             mQueuedPackets;      // this+0x110
    uint64                                           mSentPackets;        // this+0x118
    bool                                             mAsyncEnabled;       // this+0x120

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
