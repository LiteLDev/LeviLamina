#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

class LatencyNetworkPeer : public ::NetworkPeer {
public:
    // LatencyNetworkPeer inner types define
    using Content = ::Bedrock::Threading::Async<void>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> mLatency;
    ::ll::TypedStorage<
        8,
        96,
        ::Bedrock::Threading::BasicLockbox<::Bedrock::Threading::Async<void>, ::Bedrock::Threading::Mutex>>
                                                             mPredecessor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LatencyNetworkPeer() /*override*/ = default;

    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    virtual ::NetworkPeer::DataStatus
    _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
