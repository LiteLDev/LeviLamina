#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class NetworkPacketRecorder : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastPacketTime;
    ::ll::TypedStorage<1, 1, bool>                                    mRecordingToFile;
    ::ll::TypedStorage<8, 16, ::Core::File>                           mFile;
    ::ll::TypedStorage<1, 1, bool>                                    mIncludeSentPackets;
    ::ll::TypedStorage<1, 1, bool>                                    mIncludeReceivedPackets;
    ::ll::TypedStorage<1, 1, bool>                                    mToBase64;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                     mAllowList;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    virtual ::NetworkPeer::DataStatus
    _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

    virtual ~NetworkPacketRecorder() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
