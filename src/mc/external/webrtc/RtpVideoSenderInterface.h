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
    // vIndex: 3
    virtual void SetSending(bool) = 0;

    // vIndex: 4
    virtual bool IsActive() = 0;

    // vIndex: 5
    virtual void OnNetworkAvailability(bool) = 0;

    // vIndex: 6
    virtual ::std::map<uint, ::webrtc::RtpState> GetRtpStates() const = 0;

    // vIndex: 7
    virtual ::std::map<uint, ::webrtc::RtpPayloadState> GetRtpPayloadStates() const = 0;

    // vIndex: 8
    virtual void DeliverRtcp(uchar const*, uint64) = 0;

    // vIndex: 9
    virtual void OnBitrateAllocationUpdated(::webrtc::VideoBitrateAllocation const&) = 0;

    // vIndex: 10
    virtual void OnVideoLayersAllocationUpdated(::webrtc::VideoLayersAllocation const&) = 0;

    // vIndex: 11
    virtual void OnBitrateUpdated(::webrtc::BitrateAllocationUpdate, int) = 0;

    // vIndex: 12
    virtual void OnTransportOverheadChanged(uint64) = 0;

    // vIndex: 13
    virtual uint GetPayloadBitrateBps() const = 0;

    // vIndex: 14
    virtual uint GetProtectionBitrateBps() const = 0;

    // vIndex: 15
    virtual void SetEncodingData(uint64, uint64, uint64) = 0;

    // vIndex: 16
    virtual ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
        GetSentRtpPacketInfos(uint, ::rtc::ArrayView<ushort const>) const = 0;

    // vIndex: 0
    virtual void SetFecAllowed(bool) = 0;

    // vIndex: 0
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
