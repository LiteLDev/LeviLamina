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
    // vIndex: 0
    virtual ~MediaReceiveChannelInterface() = default;

    // vIndex: 1
    virtual ::cricket::VideoMediaReceiveChannelInterface* AsVideoReceiveChannel() = 0;

    // vIndex: 2
    virtual ::cricket::VoiceMediaReceiveChannelInterface* AsVoiceReceiveChannel() = 0;

    // vIndex: 3
    virtual ::cricket::MediaType media_type() const = 0;

    // vIndex: 4
    virtual bool AddRecvStream(::cricket::StreamParams const&) = 0;

    // vIndex: 5
    virtual bool RemoveRecvStream(uint) = 0;

    // vIndex: 6
    virtual void ResetUnsignaledRecvStream() = 0;

    // vIndex: 7
    virtual void SetInterface(::cricket::MediaChannelNetworkInterface*) = 0;

    // vIndex: 8
    virtual void OnPacketReceived(::webrtc::RtpPacketReceived const&) = 0;

    // vIndex: 9
    virtual ::std::optional<uint> GetUnsignaledSsrc() const = 0;

    // vIndex: 10
    virtual void ChooseReceiverReportSsrc(::std::set<uint> const&) = 0;

    // vIndex: 11
    virtual void OnDemuxerCriteriaUpdatePending() = 0;

    // vIndex: 12
    virtual void OnDemuxerCriteriaUpdateComplete() = 0;

    // vIndex: 13
    virtual void SetFrameDecryptor(uint, ::webrtc::scoped_refptr<::webrtc::FrameDecryptorInterface>) = 0;

    // vIndex: 14
    virtual void
        SetDepacketizerToDecoderFrameTransformer(uint, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>) = 0;

    // vIndex: 15
    virtual bool SetBaseMinimumPlayoutDelayMs(uint, int) = 0;

    // vIndex: 16
    virtual ::std::optional<int> GetBaseMinimumPlayoutDelayMs(uint) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
