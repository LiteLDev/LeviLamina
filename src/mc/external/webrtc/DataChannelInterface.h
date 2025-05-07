#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/Priority.h"
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataChannelObserver; }
namespace webrtc { class RTCError; }
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace webrtc {

class DataChannelInterface : public ::webrtc::RefCountInterface {
public:
    // DataChannelInterface inner types define
    enum class DataState : int {
        KConnecting = 0,
        KOpen       = 1,
        KClosing    = 2,
        KClosed     = 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void RegisterObserver(::webrtc::DataChannelObserver*) = 0;

    // vIndex: 4
    virtual void UnregisterObserver() = 0;

    // vIndex: 5
    virtual ::std::string label() const = 0;

    // vIndex: 6
    virtual bool reliable() const = 0;

    // vIndex: 7
    virtual bool ordered() const;

    // vIndex: 8
    virtual ushort maxRetransmitTime() const;

    // vIndex: 9
    virtual ushort maxRetransmits() const;

    // vIndex: 10
    virtual ::std::optional<int> maxRetransmitsOpt() const;

    // vIndex: 11
    virtual ::std::optional<int> maxPacketLifeTime() const;

    // vIndex: 12
    virtual ::std::string protocol() const;

    // vIndex: 13
    virtual bool negotiated() const;

    // vIndex: 14
    virtual int id() const = 0;

    // vIndex: 15
    virtual ::webrtc::Priority priority() const;

    // vIndex: 16
    virtual ::webrtc::DataChannelInterface::DataState state() const = 0;

    // vIndex: 17
    virtual ::webrtc::RTCError error() const;

    // vIndex: 18
    virtual uint messages_sent() const = 0;

    // vIndex: 19
    virtual uint64 bytes_sent() const = 0;

    // vIndex: 20
    virtual uint64 bytes_send_buffer() const = 0;

    // vIndex: 21
    virtual uint messages_received() const = 0;

    // vIndex: 22
    virtual uint64 bytes_received() const = 0;

    // vIndex: 23
    virtual uint64 buffered_amount() const = 0;

    // vIndex: 24
    virtual void Close() = 0;

    // vIndex: 25
    virtual bool Send(::webrtc::DataBuffer const&);

    // vIndex: 26
    virtual void SendAsync(::webrtc::DataBuffer, ::absl::AnyInvocable<void(::webrtc::RTCError) &&>);

    // vIndex: 2
    virtual ~DataChannelInterface() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 MaxSendQueueSize();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
