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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb8c322;
    ::ll::UntypedStorage<8, 8> mUnk82998e;
    ::ll::UntypedStorage<1, 1> mUnk3529d4;
    ::ll::UntypedStorage<4, 4> mUnk81b43f;
    ::ll::UntypedStorage<4, 8> mUnkf173b1;
    ::ll::UntypedStorage<4, 8> mUnk4ef568;
    ::ll::UntypedStorage<8, 8> mUnkab67c9;
    ::ll::UntypedStorage<8, 8> mUnk10a5d8;
    ::ll::UntypedStorage<8, 40> mUnkd12327;
    ::ll::UntypedStorage<1, 1> mUnkf05150;
    ::ll::UntypedStorage<8, 8> mUnke60a01;
    ::ll::UntypedStorage<1, 22> mUnkbb36b0;
    ::ll::UntypedStorage<8, 8> mUnk1283be;
    ::ll::UntypedStorage<8, 8> mUnk5fcfe2;
    ::ll::UntypedStorage<4, 4> mUnk6d952f;
    ::ll::UntypedStorage<8, 32> mUnk384645;
    ::ll::UntypedStorage<8, 32> mUnk7b3749;
    ::ll::UntypedStorage<1, 1> mUnk84766b;
    ::ll::UntypedStorage<1, 1> mUnk4e9458;
    ::ll::UntypedStorage<1, 1> mUnk749893;
    ::ll::UntypedStorage<8, 8> mUnk898527;
    ::ll::UntypedStorage<4, 4> mUnka63a43;
    ::ll::UntypedStorage<8, 16> mUnk4ba1f1;
    ::ll::UntypedStorage<1, 1> mUnk101f40;
    ::ll::UntypedStorage<8, 8> mUnk701427;
    // NOLINTEND

public:
    // prevent constructor by default
    RTPSender& operator=(RTPSender const&);
    RTPSender(RTPSender const&);
    RTPSender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> AllocatePacket(::rtc::ArrayView<uint const> csrcs);

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> BuildRtxPacket(::webrtc::RtpPacketToSend const& packet);

    MCNAPI void DeregisterRtpHeaderExtension(::std::string_view uri);

    MCNAPI void EnqueuePackets(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> packets);

    MCNAPI uint64 ExpectedPerPacketOverhead() const;

    MCNAPI uint64 FecOrPaddingPacketMaxRtpHeaderLength() const;

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> GeneratePadding(uint64 target_size_bytes, bool media_has_been_sent, bool can_send_padding_on_media_ssrc);

    MCNAPI ::webrtc::RtpState GetRtpState() const;

    MCNAPI ::webrtc::RtpState GetRtxRtpState() const;

    MCNAPI bool IsAudioConfigured() const;

    MCNAPI uint64 MaxRtpPacketSize() const;

    MCNAPI void OnReceivedAckOnRtxSsrc(int64 extended_highest_sequence_number);

    MCNAPI void OnReceivedAckOnSsrc(int64 extended_highest_sequence_number);

    MCNAPI void OnReceivedNack(::std::vector<ushort> const& nack_sequence_numbers, int64 avg_rtt);

    MCNAPI RTPSender(::webrtc::RtpRtcpInterface::Configuration const& config, ::webrtc::RtpPacketHistory* packet_history, ::webrtc::RtpPacketSender* packet_sender);

    MCNAPI int ReSendPacket(ushort packet_id);

    MCNAPI bool RegisterRtpHeaderExtension(::std::string_view uri, int id);

    MCNAPI uint64 RtxPacketOverhead() const;

    MCNAPI int RtxStatus() const;

    MCNAPI bool SendingMedia() const;

    MCNAPI void SetExtmapAllowMixed(bool extmap_allow_mixed);

    MCNAPI void SetMaxRtpPacketSize(uint64 max_packet_size);

    MCNAPI void SetMid(::std::string_view mid);

    MCNAPI void SetRtpState(::webrtc::RtpState const& rtp_state);

    MCNAPI void SetRtxPayloadType(int payload_type, int associated_payload_type);

    MCNAPI void SetRtxRtpState(::webrtc::RtpState const& rtp_state);

    MCNAPI void SetRtxStatus(int mode);

    MCNAPI void SetSendingMediaStatus(bool enabled);

    MCNAPI void SetTimestampOffset(uint timestamp);

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
    MCNAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const& config, ::webrtc::RtpPacketHistory* packet_history, ::webrtc::RtpPacketSender* packet_sender);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
