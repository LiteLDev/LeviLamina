#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MediaChannelNetworkInterface; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class VideoMediaReceiveChannelInterface; }
namespace webrtc { class VoiceMediaReceiveChannelInterface; }
namespace webrtc { struct StreamParams; }
// clang-format on

namespace webrtc {

class MediaReceiveChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaReceiveChannelInterface() = default;

    virtual ::webrtc::VideoMediaReceiveChannelInterface* AsVideoReceiveChannel() = 0;

    virtual ::webrtc::VoiceMediaReceiveChannelInterface* AsVoiceReceiveChannel() = 0;

    virtual ::webrtc::MediaType media_type() const = 0;

    virtual bool AddRecvStream(::webrtc::StreamParams const&) = 0;

    virtual bool RemoveRecvStream(uint) = 0;

    virtual void ResetUnsignaledRecvStream() = 0;

    virtual void SetInterface(::webrtc::MediaChannelNetworkInterface*) = 0;

    virtual void OnPacketReceived(::webrtc::RtpPacketReceived const&) = 0;

    virtual ::std::optional<uint> GetUnsignaledSsrc() const = 0;

    virtual void ChooseReceiverReportSsrc(::std::set<uint> const&) = 0;

    virtual void OnDemuxerCriteriaUpdatePending() = 0;

    virtual void OnDemuxerCriteriaUpdateComplete() = 0;

    virtual void SetFrameDecryptor(uint, ::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface>) = 0;

    virtual void SetDepacketizerToDecoderFrameTransformer(
        uint,
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>
    ) = 0;

    virtual bool SetBaseMinimumPlayoutDelayMs(uint, int) = 0;

    virtual ::std::optional<int> GetBaseMinimumPlayoutDelayMs(uint) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
