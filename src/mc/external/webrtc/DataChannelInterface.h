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
    virtual void RegisterObserver(::webrtc::DataChannelObserver*) = 0;

    virtual void UnregisterObserver() = 0;

    virtual ::std::string label() const = 0;

    virtual bool reliable() const = 0;

    virtual bool ordered() const;

    virtual ushort maxRetransmitTime() const;

    virtual ushort maxRetransmits() const;

    virtual ::std::optional<int> maxRetransmitsOpt() const;

    virtual ::std::optional<int> maxPacketLifeTime() const;

    virtual ::std::string protocol() const;

    virtual bool negotiated() const;

    virtual int id() const = 0;

    virtual ::webrtc::Priority priority() const;

    virtual ::webrtc::DataChannelInterface::DataState state() const = 0;

    virtual ::webrtc::RTCError error() const;

    virtual uint messages_sent() const = 0;

    virtual uint64 bytes_sent() const = 0;

    virtual uint64 bytes_send_buffer() const = 0;

    virtual uint messages_received() const = 0;

    virtual uint64 bytes_received() const = 0;

    virtual uint64 buffered_amount() const = 0;

    virtual void Close() = 0;

    virtual bool Send(::webrtc::DataBuffer const&);

    virtual void SendAsync(::webrtc::DataBuffer, ::absl::AnyInvocable<void(::webrtc::RTCError) &&>);

    virtual ~DataChannelInterface() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 MaxSendQueueSize();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
