#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"

class NetworkPeer {
public:
    // NetworkPeer inner types declare
    // clang-format off
    struct NetworkStatus;
    // clang-format on

    // NetworkPeer inner types define
    enum class DataStatus : int {
        HasData    = 0,
        NoData     = 1,
        BrokenData = 2,
    };

    enum class NetworkLoad : int {
        Unrestricted = 0,
        Low          = 1,
        Medium       = 2,
        High         = 3,
    };

    enum class Reliability : int {
        Reliable            = 0,
        ReliableOrdered     = 1,
        Unreliable          = 2,
        UnreliableSequenced = 3,
    };

    struct NetworkStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::NetworkPeer::NetworkLoad> mLoad;
        ::ll::TypedStorage<4, 4, int>                        mCurrentPing;
        ::ll::TypedStorage<4, 4, int>                        mAveragePing;
        ::ll::TypedStorage<4, 4, int>                        mApproximateMaxBps;
        ::ll::TypedStorage<4, 4, float>                      mCurrentPacketLoss;
        ::ll::TypedStorage<4, 4, float>                      mAveragePacketLoss;
        ::ll::TypedStorage<8, 8, uint64>                     mTotalBytesReceived;
        ::ll::TypedStorage<8, 8, uint64>                     mTotalBytesSent;
        ::ll::TypedStorage<8, 8, uint64>                     mCurrentBytesSendBuffer;
        ::ll::TypedStorage<4, 4, int>                        mICEState;
        ::ll::TypedStorage<1, 1, bool>                       mUsingRelays;
        // NOLINTEND
    };

    using PacketRecvTimepoint = ::std::chrono::steady_clock::time_point;

    using PacketRecvTimepointPtr = ::std::shared_ptr<::std::chrono::steady_clock::time_point>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::NetworkPeer>> mPeer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkPeer();

    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) = 0;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const = 0;

    virtual void update();

    virtual void flush(::std::function<void()>&& callback);

    virtual bool isLocal() const;

    virtual bool isEncrypted() const;

    virtual ::NetworkPeer::DataStatus
    _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update();

    MCNAPI void $flush(::std::function<void()>&& callback);

    MCNAPI bool $isLocal() const;

    MCNAPI bool $isEncrypted() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
