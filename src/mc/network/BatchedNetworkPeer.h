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
        // symbol: ??0DataCallback@BatchedNetworkPeer@@QEAA@$$QEAU01@@Z
        MCAPI DataCallback(struct BatchedNetworkPeer::DataCallback&&);

        // symbol: ??4DataCallback@BatchedNetworkPeer@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct BatchedNetworkPeer::DataCallback& operator=(struct BatchedNetworkPeer::DataCallback&&);

        // symbol: ??1DataCallback@BatchedNetworkPeer@@QEAA@XZ
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
    std::atomic<bool>                                mTaskRunning;        // this+0x108
    std::atomic<uint64_t>                            mQueuedPackets;      // this+0x110
    uint64_t                                         mSentPackets;        // this+0x118
    bool                                             mAsyncEnabled;       // this+0x120

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BatchedNetworkPeer@@UEAA@XZ
    virtual ~BatchedNetworkPeer() = default;

    // vIndex: 1, symbol:
    // ?sendPacket@BatchedNetworkPeer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@W4Compressibility@@@Z
    virtual void
    sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    // vIndex: 2, symbol:
    // ?receivePacket@BatchedNetworkPeer@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

    // vIndex: 3, symbol: ?getNetworkStatus@BatchedNetworkPeer@@UEBA?AUNetworkStatus@NetworkPeer@@XZ
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

    // vIndex: 4, symbol: ?update@BatchedNetworkPeer@@UEAAXXZ
    virtual void update();

    // vIndex: 5, symbol: ?flush@BatchedNetworkPeer@@UEAAX$$QEAV?$function@$$A6AXXZ@std@@@Z
    virtual void flush(std::function<void()>&& callback);

    // symbol: ??0BatchedNetworkPeer@@QEAA@V?$shared_ptr@VNetworkPeer@@@std@@AEAVScheduler@@@Z
    MCAPI BatchedNetworkPeer(std::shared_ptr<class NetworkPeer> peer, class Scheduler& scheduler);

    // symbol: ?setAsyncEnabled@BatchedNetworkPeer@@QEAAX_N@Z
    MCAPI void setAsyncEnabled(bool val);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_startSendTask@BatchedNetworkPeer@@AEAAXXZ
    MCAPI void _startSendTask();

    // NOLINTEND
};
