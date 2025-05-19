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
    RTPSender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> AllocatePacket(::rtc::ArrayView<uint const>);

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> BuildRtxPacket(::webrtc::RtpPacketToSend const&);

    MCNAPI void DeregisterRtpHeaderExtension(::std::string_view);

    MCNAPI void EnqueuePackets(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>>);

    MCNAPI uint64 ExpectedPerPacketOverhead() const;

    MCNAPI uint64 FecOrPaddingPacketMaxRtpHeaderLength() const;

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> GeneratePadding(uint64, bool, bool);

    MCNAPI ::webrtc::RtpState GetRtpState() const;

    MCNAPI ::webrtc::RtpState GetRtxRtpState() const;

    MCNAPI bool IsAudioConfigured() const;

    MCNAPI uint64 MaxRtpPacketSize() const;

    MCNAPI void OnReceivedAckOnRtxSsrc(int64);

    MCNAPI void OnReceivedAckOnSsrc(int64);

    MCNAPI void OnReceivedNack(::std::vector<ushort> const&, int64);

    MCNAPI RTPSender(
        ::webrtc::RtpRtcpInterface::Configuration const&,
        ::webrtc::RtpPacketHistory*,
        ::webrtc::RtpPacketSender*
    );

    MCNAPI int ReSendPacket(ushort);

    MCNAPI bool RegisterRtpHeaderExtension(::std::string_view, int);

    MCNAPI uint64 RtxPacketOverhead() const;

    MCNAPI int RtxStatus() const;

    MCNAPI bool SendingMedia() const;

    MCNAPI void SetExtmapAllowMixed(bool);

    MCNAPI void SetMaxRtpPacketSize(uint64);

    MCNAPI void SetMid(::std::string_view);

    MCNAPI void SetRtpState(::webrtc::RtpState const&);

    MCNAPI void SetRtxPayloadType(int, int);

    MCNAPI void SetRtxRtpState(::webrtc::RtpState const&);

    MCNAPI void SetRtxStatus(int);

    MCNAPI void SetSendingMediaStatus(bool);

    MCNAPI void SetTimestampOffset(uint);

    MCNAPI bool SupportsPadding() const;

    MCNAPI bool SupportsRtxPayloadPadding() const;

    MCNAPI uint TimestampOffset() const;

    MCNAPI void UpdateHeaderSizes();

    MCNAPI ~RTPSender();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::rtc::ArrayView<::webrtc::RtpExtensionSize const> AudioExtensionSizes();

    MCNAPI static ::rtc::ArrayView<::webrtc::RtpExtensionSize const> FecExtensionSizes();

    MCNAPI static ::rtc::ArrayView<::webrtc::RtpExtensionSize const> VideoExtensionSizes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::RtpPacketHistory*, ::webrtc::RtpPacketSender*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
