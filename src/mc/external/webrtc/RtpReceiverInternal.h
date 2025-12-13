#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpReceiverInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaReceiveChannelInterface; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class MediaStreamInterface; }
// clang-format on

namespace webrtc {

class RtpReceiverInternal : public ::webrtc::RtpReceiverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Stop() = 0;

    virtual void SetMediaChannel(::cricket::MediaReceiveChannelInterface*) = 0;

    virtual void SetupMediaChannel(uint) = 0;

    virtual void SetupUnsignaledMediaChannel() = 0;

    virtual void set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface>) = 0;

    virtual ::std::optional<uint> ssrc() const = 0;

    virtual void NotifyFirstPacketReceived() = 0;

    virtual void set_stream_ids(::std::vector<::std::string>) = 0;

    virtual void SetStreams(::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&) = 0;

    virtual int AttachmentId() const = 0;

    virtual ~RtpReceiverInternal() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>
    CreateStreamsFromIds(::std::vector<::std::string> stream_ids);

    MCNAPI static int GenerateUniqueId();
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
