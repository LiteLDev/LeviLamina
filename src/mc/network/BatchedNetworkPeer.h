#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/SPSCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/BinaryStream.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SPSCQueue.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI DataCallback(::BatchedNetworkPeer::DataCallback&&);

        MCNAPI ::BatchedNetworkPeer::DataCallback& operator=(::BatchedNetworkPeer::DataCallback&&);

        MCNAPI ~DataCallback();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::BatchedNetworkPeer::DataCallback&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    BatchedNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BatchedNetworkPeer() /*override*/;

    // vIndex: 4
    virtual void flush(::std::function<void()>&& callback) /*override*/;

    // vIndex: 1
    virtual void sendPacket(
        ::std::string const&       data,
        ::NetworkPeer::Reliability reliability,
        ::Compressibility          compressible
    ) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    // vIndex: 3
    virtual void update() /*override*/;

    // vIndex: 7
    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BatchedNetworkPeer(::std::shared_ptr<::NetworkPeer> peer, ::Scheduler& scheduler);

    MCAPI void _startSendTask();
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

    MCFOLD ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCAPI void $update();

    MCAPI ::NetworkPeer::DataStatus $_receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
