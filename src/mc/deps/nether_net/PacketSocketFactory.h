#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BasicPacketSocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketFactory; }
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace NetherNet {

class PacketSocketFactory : public ::rtc::BasicPacketSocketFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk765ab2;
    ::ll::UntypedStorage<8, 16> mUnkbbc50e;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSocketFactory& operator=(PacketSocketFactory const&);
    PacketSocketFactory(PacketSocketFactory const&);
    PacketSocketFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketSocketFactory() /*override*/ = default;

    // vIndex: 4
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketSocketFactory(::rtc::SocketFactory* socketFactory, ::webrtc::TaskQueueBase* workerThread);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::SocketFactory* socketFactory, ::webrtc::TaskQueueBase* workerThread);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> $CreateAsyncDnsResolver();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
