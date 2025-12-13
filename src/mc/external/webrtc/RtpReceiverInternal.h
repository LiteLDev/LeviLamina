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
    // vIndex: 17
    virtual void Stop() = 0;

    // vIndex: 18
    virtual void SetMediaChannel(::cricket::MediaReceiveChannelInterface*) = 0;

    // vIndex: 19
    virtual void SetupMediaChannel(uint) = 0;

    // vIndex: 20
    virtual void SetupUnsignaledMediaChannel() = 0;

    // vIndex: 21
    virtual void set_transport(::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface>) = 0;

    // vIndex: 22
    virtual ::std::optional<uint> ssrc() const = 0;

    // vIndex: 23
    virtual void NotifyFirstPacketReceived() = 0;

    // vIndex: 24
    virtual void set_stream_ids(::std::vector<::std::string>) = 0;

    // vIndex: 25
    virtual void SetStreams(::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&) = 0;

    // vIndex: 26
    virtual int AttachmentId() const = 0;

    // vIndex: 1
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
