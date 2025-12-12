#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/PacingController.h"
#include "mc/external/webrtc/RtpRtcpInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class RtcpFeedbackSenderInterface; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct PacedPacketInfo; }
// clang-format on

namespace webrtc {

class PacketRouter : public ::webrtc::PacingController::PacketSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3e3400;
    ::ll::UntypedStorage<8, 64> mUnk621066;
    ::ll::UntypedStorage<8, 16> mUnke6b6cb;
    ::ll::UntypedStorage<8, 8>  mUnkd321a7;
    ::ll::UntypedStorage<8, 24> mUnkf3edee;
    ::ll::UntypedStorage<8, 24> mUnk61f8d8;
    ::ll::UntypedStorage<8, 24> mUnkb30e09;
    ::ll::UntypedStorage<8, 8>  mUnk7b2465;
    ::ll::UntypedStorage<8, 8>  mUnk678034;
    ::ll::UntypedStorage<8, 32> mUnkd39471;
    ::ll::UntypedStorage<8, 24> mUnkb01db3;
    ::ll::UntypedStorage<8, 16> mUnk199a69;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketRouter& operator=(PacketRouter const&);
    PacketRouter(PacketRouter const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketRouter() /*override*/;

    virtual void SendPacket(
        ::std::unique_ptr<::webrtc::RtpPacketToSend> packet,
        ::webrtc::PacedPacketInfo const&             cluster_info
    ) /*override*/;

    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> FetchFec() /*override*/;

    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>>
    GeneratePadding(::webrtc::DataSize size) /*override*/;

    virtual void OnAbortedRetransmissions(uint ssrc, ::rtc::ArrayView<ushort const> sequence_numbers) /*override*/;

    virtual ::std::optional<uint> GetRtxSsrcForMedia(uint ssrc) const /*override*/;

    virtual void OnBatchComplete() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddRembModuleCandidate(::webrtc::RtcpFeedbackSenderInterface* candidate_module, bool media_sender);

    MCNAPI void AddSendRtpModule(::webrtc::RtpRtcpInterface* rtp_module, bool remb_candidate);

    MCNAPI void AddSendRtpModuleToMap(::webrtc::RtpRtcpInterface* rtp_module, uint ssrc);

    MCNAPI void DetermineActiveRembModule();

    MCNAPI void
    MaybeRemoveRembModuleCandidate(::webrtc::RtcpFeedbackSenderInterface* candidate_module, bool media_sender);

    MCNAPI PacketRouter();

    MCNAPI void RegisterNotifyBweCallback(
        ::absl::AnyInvocable<void(::webrtc::RtpPacketToSend const&, ::webrtc::PacedPacketInfo const&)> callback
    );

    MCNAPI void RemoveSendRtpModule(::webrtc::RtpRtcpInterface* rtp_module);

    MCNAPI void RemoveSendRtpModuleFromMap(uint ssrc);

    MCNAPI bool SupportsRtxPayloadPadding() const;

    MCNAPI void UnsetActiveRembModule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $SendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend> packet, ::webrtc::PacedPacketInfo const& cluster_info);

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> $FetchFec();

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> $GeneratePadding(::webrtc::DataSize size);

    MCNAPI void $OnAbortedRetransmissions(uint ssrc, ::rtc::ArrayView<ushort const> sequence_numbers);

    MCNAPI ::std::optional<uint> $GetRtxSsrcForMedia(uint ssrc) const;

    MCNAPI void $OnBatchComplete();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
