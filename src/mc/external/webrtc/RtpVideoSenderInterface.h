#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/EncodedImageCallback.h"
#include "mc/external/webrtc/FecControllerOverride.h"
#include "mc/external/webrtc/RtpSequenceNumberMap.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoBitrateAllocation; }
namespace webrtc { struct BitrateAllocationUpdate; }
namespace webrtc { struct RtpPayloadState; }
namespace webrtc { struct RtpState; }
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RtpVideoSenderInterface : public ::webrtc::EncodedImageCallback, public ::webrtc::FecControllerOverride {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetSending(bool enabled) = 0;

    virtual bool IsActive() = 0;

    virtual void OnNetworkAvailability(bool network_available) = 0;

    virtual ::std::map<uint, ::webrtc::RtpState> GetRtpStates() const = 0;

    virtual ::std::map<uint, ::webrtc::RtpPayloadState> GetRtpPayloadStates() const = 0;

    virtual void DeliverRtcp(uchar const* packet, uint64 length) = 0;

    virtual void OnBitrateAllocationUpdated(::webrtc::VideoBitrateAllocation const& bitrate) = 0;

    virtual void OnVideoLayersAllocationUpdated(::webrtc::VideoLayersAllocation const& allocation) = 0;

    virtual void OnBitrateUpdated(::webrtc::BitrateAllocationUpdate update, int framerate) = 0;

    virtual void OnTransportOverheadChanged(uint64 transport_overhead_bytes_per_packet) = 0;

    virtual uint GetPayloadBitrateBps() const = 0;

    virtual uint GetProtectionBitrateBps() const = 0;

    virtual void SetEncodingData(uint64 width, uint64 height, uint64 num_temporal_layers) = 0;

    virtual ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
    GetSentRtpPacketInfos(uint ssrc, ::rtc::ArrayView<ushort const> sequence_numbers) const = 0;

    virtual void SetFecAllowed(bool fec_allowed) = 0;

    virtual ~RtpVideoSenderInterface() /*override*/;
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
