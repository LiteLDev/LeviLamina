#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CopyOnWriteBuffer; }
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace webrtc {

class RtpTransportInternal : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3ed5db;
    ::ll::UntypedStorage<8, 32> mUnk7ee9ad;
    ::ll::UntypedStorage<8, 32> mUnke96161;
    ::ll::UntypedStorage<8, 32> mUnkf54653;
    ::ll::UntypedStorage<8, 32> mUnk26d9e7;
    ::ll::UntypedStorage<8, 32> mUnk39cfb9;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpTransportInternal& operator=(RtpTransportInternal const&);
    RtpTransportInternal(RtpTransportInternal const&);
    RtpTransportInternal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpTransportInternal() /*override*/;

    virtual void SetRtcpMuxEnabled(bool enable) = 0;

    virtual ::std::string const& transport_name() const = 0;

    virtual int SetRtpOption(::webrtc::Socket::Option opt, int value) = 0;

    virtual int SetRtcpOption(::webrtc::Socket::Option opt, int value) = 0;

    virtual bool rtcp_mux_enabled() const = 0;

    virtual bool IsReadyToSend() const = 0;

    virtual bool IsWritable(bool rtcp) const = 0;

    virtual bool SendRtpPacket(
        ::webrtc::CopyOnWriteBuffer*              packet,
        ::webrtc::AsyncSocketPacketOptions const& options,
        int                                       flags
    ) = 0;

    virtual bool SendRtcpPacket(
        ::webrtc::CopyOnWriteBuffer*              packet,
        ::webrtc::AsyncSocketPacketOptions const& options,
        int                                       flags
    ) = 0;

    virtual void UpdateRtpHeaderExtensionMap(::std::vector<::webrtc::RtpExtension> const& header_extensions) = 0;

    virtual bool IsSrtpActive() const = 0;

    virtual bool
    RegisterRtpDemuxerSink(::webrtc::RtpDemuxerCriteria const& criteria, ::webrtc::RtpPacketSinkInterface* sink) = 0;

    virtual bool UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface* sink) = 0;
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
