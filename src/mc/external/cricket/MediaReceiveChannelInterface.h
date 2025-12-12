#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaChannelNetworkInterface; }
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { struct StreamParams; }
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class RtpPacketReceived; }
// clang-format on

namespace cricket {

class MediaReceiveChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaReceiveChannelInterface() = default;

    virtual ::cricket::VideoMediaReceiveChannelInterface* AsVideoReceiveChannel() = 0;

    virtual ::cricket::VoiceMediaReceiveChannelInterface* AsVoiceReceiveChannel() = 0;

    virtual ::cricket::MediaType media_type() const = 0;

    virtual bool AddRecvStream(::cricket::StreamParams const&) = 0;

    virtual bool RemoveRecvStream(uint) = 0;

    virtual void ResetUnsignaledRecvStream() = 0;

    virtual void SetInterface(::cricket::MediaChannelNetworkInterface*) = 0;

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

} // namespace cricket
