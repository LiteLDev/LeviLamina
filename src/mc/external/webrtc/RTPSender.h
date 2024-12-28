#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpRtcpInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketHistory; }
namespace webrtc { class RtpPacketSender; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct RtpExtensionSize; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class RTPSender {
public:
    // prevent constructor by default
    RTPSender& operator=(RTPSender const&);
    RTPSender(RTPSender const&);
    RTPSender();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> AllocatePacket(::rtc::ArrayView<uint const>);

    MCAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> BuildRtxPacket(::webrtc::RtpPacketToSend const&);

    MCAPI void DeregisterRtpHeaderExtension(::std::string_view);

    MCAPI void EnqueuePackets(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>>);

    MCAPI uint64 ExpectedPerPacketOverhead() const;

    MCAPI uint64 FecOrPaddingPacketMaxRtpHeaderLength() const;

    MCAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> GeneratePadding(uint64, bool, bool);

    MCAPI ::webrtc::RtpState GetRtpState() const;

    MCAPI ::webrtc::RtpState GetRtxRtpState() const;

    MCAPI bool IsAudioConfigured() const;

    MCAPI uint64 MaxRtpPacketSize() const;

    MCAPI void OnReceivedAckOnRtxSsrc(int64);

    MCAPI void OnReceivedAckOnSsrc(int64);

    MCAPI void OnReceivedNack(::std::vector<ushort> const&, int64);

    MCAPI
    RTPSender(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::RtpPacketHistory*, ::webrtc::RtpPacketSender*);

    MCAPI int ReSendPacket(ushort);

    MCAPI bool RegisterRtpHeaderExtension(::std::string_view, int);

    MCAPI uint64 RtxPacketOverhead() const;

    MCAPI int RtxStatus() const;

    MCAPI bool SendingMedia() const;

    MCAPI void SetExtmapAllowMixed(bool);

    MCAPI void SetMaxRtpPacketSize(uint64);

    MCAPI void SetMid(::std::string_view);

    MCAPI void SetRtpState(::webrtc::RtpState const&);

    MCAPI void SetRtxPayloadType(int, int);

    MCAPI void SetRtxRtpState(::webrtc::RtpState const&);

    MCAPI void SetRtxStatus(int);

    MCAPI void SetSendingMediaStatus(bool);

    MCAPI void SetTimestampOffset(uint);

    MCAPI bool SupportsPadding() const;

    MCAPI bool SupportsRtxPayloadPadding() const;

    MCAPI uint TimestampOffset() const;

    MCAPI void UpdateHeaderSizes();

    MCAPI ~RTPSender();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::rtc::ArrayView<::webrtc::RtpExtensionSize const> AudioExtensionSizes();

    MCAPI static ::rtc::ArrayView<::webrtc::RtpExtensionSize const> FecExtensionSizes();

    MCAPI static ::rtc::ArrayView<::webrtc::RtpExtensionSize const> VideoExtensionSizes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::RtpPacketHistory*, ::webrtc::RtpPacketSender*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
