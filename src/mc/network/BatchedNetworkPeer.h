#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/SPSCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/BinaryStream.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SPSCQueue.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class Scheduler;
class TaskGroup;
// clang-format on

class BatchedNetworkPeer : public ::NetworkPeer {
public:
    // BatchedNetworkPeer inner types declare
    // clang-format off
    struct DataCallback;
    // clang-format on

    // BatchedNetworkPeer inner types define
    struct DataCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>           data;
        ::ll::TypedStorage<4, 4, ::Compressibility>        compressible;
        ::ll::TypedStorage<8, 64, ::std::function<void()>> callback;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataCallback& operator=(DataCallback const&);
        DataCallback(DataCallback const&);
        DataCallback();

        std::string           data;         // this+0x0
        Compressibility       compressible; // this+0x20
        std::function<void()> callback;     // this+0x28

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI DataCallback(::BatchedNetworkPeer::DataCallback&&);

        MCAPI ::BatchedNetworkPeer::DataCallback& operator=(::BatchedNetworkPeer::DataCallback&&);

        MCAPI ~DataCallback();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::BatchedNetworkPeer::DataCallback&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::BinaryStream>                                       mOutgoingData;
    ::ll::TypedStorage<8, 8, uint64>                                                mCompressibleBytes;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mIncomingDataBuffer;
    ::ll::TypedStorage<8, 80, ::std::optional<::ReadOnlyBinaryStream>>              mIncomingData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                        mTaskGroup;
    ::ll::TypedStorage<8, 80, ::SPSCQueue<::BatchedNetworkPeer::DataCallback, 512>> mSendQueue;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mTaskRunning;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                                 mQueuedPackets;
    ::ll::TypedStorage<8, 8, uint64>                                                mSentPackets;
    ::ll::TypedStorage<1, 1, bool>                                                  mAsyncEnabled;
    // NOLINTEND

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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BatchedNetworkPeer() /*override*/;

    // vIndex: 5
    virtual void flush(::std::function<void()>&& callback) /*override*/;

    // vIndex: 1
    virtual void sendPacket(
        ::std::string const&       data,
        ::NetworkPeer::Reliability reliability,
        ::Compressibility          compressible
    ) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;

    // vIndex: 3
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    // vIndex: 4
    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BatchedNetworkPeer(::std::shared_ptr<::NetworkPeer> peer, ::Scheduler& scheduler);

    MCAPI void _startSendTask();

    MCAPI void setAsyncEnabled(bool val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::NetworkPeer> peer, ::Scheduler& scheduler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $flush(::std::function<void()>&& callback);

    MCAPI void
    $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    MCAPI ::NetworkPeer::DataStatus $receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );

    MCAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
