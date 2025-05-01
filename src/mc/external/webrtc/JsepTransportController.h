#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceRole.h"
#include "mc/external/rtc/SSLHandshakeError.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class ContentGroup; }
namespace cricket { class ContentInfo; }
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class IceTransportInternal; }
namespace cricket { class JsepTransport; }
namespace cricket { class PortAllocator; }
namespace cricket { class SessionDescription; }
namespace cricket { struct CandidatePairChangeEvent; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct IceConfig; }
namespace cricket { struct JsepTransportDescription; }
namespace cricket { struct TransportInfo; }
namespace cricket { struct TransportStats; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class RTCCertificate; }
namespace rtc { class SSLCertChain; }
namespace rtc { class Thread; }
namespace webrtc { class AsyncDnsResolverFactoryInterface; }
namespace webrtc { class DataChannelTransportInterface; }
namespace webrtc { class DtlsSrtpTransport; }
namespace webrtc { class DtlsTransport; }
namespace webrtc { class Environment; }
namespace webrtc { class IceTransportInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpTransport; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class SctpTransport; }
// clang-format on

namespace webrtc {

class JsepTransportController {
public:
    // JsepTransportController inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // JsepTransportController inner types define
    struct Config {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Config();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError AddRemoteCandidates(::std::string const&, ::std::vector<::cricket::Candidate> const&);

    MCNAPI ::webrtc::RTCError
    ApplyDescription_n(bool, ::webrtc::SdpType, ::cricket::SessionDescription const*, ::cricket::SessionDescription const*);

    MCNAPI ::std::unique_ptr<::webrtc::DtlsSrtpTransport>
    CreateDtlsSrtpTransport(::std::string const&, ::cricket::DtlsTransportInternal*, ::cricket::DtlsTransportInternal*);

    MCNAPI ::std::unique_ptr<::cricket::DtlsTransportInternal>
    CreateDtlsTransport(::cricket::ContentInfo const&, ::cricket::IceTransportInternal*);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> CreateIceTransport(::std::string const&, bool);

    MCNAPI ::cricket::JsepTransportDescription CreateJsepTransportDescription(
        ::cricket::ContentInfo const&,
        ::cricket::TransportInfo const&,
        ::std::vector<int> const&,
        int
    );

    MCNAPI ::std::unique_ptr<::webrtc::RtpTransport>
    CreateUnencryptedRtpTransport(::std::string const&, ::rtc::PacketTransportInternal*, ::rtc::PacketTransportInternal*);

    MCNAPI void DestroyAllJsepTransports_n();

    MCNAPI ::cricket::IceRole
    DetermineIceRole(::cricket::JsepTransport*, ::cricket::TransportInfo const&, ::webrtc::SdpType, bool);

    MCNAPI ::std::vector<::cricket::DtlsTransportInternal*> GetActiveDtlsTransports();

    MCNAPI ::webrtc::DataChannelTransportInterface* GetDataChannelTransport(::std::string const&) const;

    MCNAPI ::std::optional<::rtc::SSLRole> GetDtlsRole(::std::string const&) const;

    MCNAPI ::cricket::DtlsTransportInternal* GetDtlsTransport(::std::string const&);

    MCNAPI ::std::vector<::cricket::DtlsTransportInternal*> GetDtlsTransports();

    MCNAPI ::std::vector<int> GetEncryptedHeaderExtensionIds(::cricket::ContentInfo const&);

    MCNAPI ::cricket::JsepTransport const* GetJsepTransportByName(::std::string const&) const;

    MCNAPI ::cricket::JsepTransport* GetJsepTransportByName(::std::string const&);

    MCNAPI ::cricket::JsepTransport const* GetJsepTransportForMid(::std::string const&) const;

    MCNAPI ::cricket::JsepTransport const* GetJsepTransportForMid(::std::string_view) const;

    MCNAPI ::cricket::JsepTransport* GetJsepTransportForMid(::std::string const&);

    MCNAPI ::webrtc::scoped_refptr<::rtc::RTCCertificate> GetLocalCertificate(::std::string const&) const;

    MCNAPI ::std::unique_ptr<::rtc::SSLCertChain> GetRemoteSSLCertChain(::std::string const&) const;

    MCNAPI int GetRtpAbsSendTimeHeaderExtensionId(::cricket::ContentInfo const&);

    MCNAPI ::webrtc::RtpTransportInternal* GetRtpTransport(::std::string_view) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::SctpTransport> GetSctpTransport(::std::string const&) const;

    MCNAPI bool GetStats(::std::string const&, ::cricket::TransportStats*);

    MCNAPI bool HandleBundledContent(::cricket::ContentInfo const&, ::cricket::ContentGroup const&);

    MCNAPI void HandleRejectedContent(::cricket::ContentInfo const&);

    MCNAPI JsepTransportController(
        ::webrtc::Environment const&,
        ::rtc::Thread*,
        ::cricket::PortAllocator*,
        ::webrtc::AsyncDnsResolverFactoryInterface*,
        ::webrtc::JsepTransportController::Config
    );

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransport> LookupDtlsTransportByMid(::std::string const&);

    MCNAPI ::webrtc::RTCError
    MaybeCreateJsepTransport(bool, ::cricket::ContentInfo const&, ::cricket::SessionDescription const&);

    MCNAPI void MaybeStartGathering();

    MCNAPI ::std::map<::cricket::ContentGroup const*, ::std::vector<int>>
    MergeEncryptedHeaderExtensionIdsForBundles(::cricket::SessionDescription const*);

    MCNAPI bool NeedsIceRestart(::std::string const&) const;

    MCNAPI void OnDtlsHandshakeError(::rtc::SSLHandshakeError);

    MCNAPI void OnRtcpPacketReceived_n(::rtc::CopyOnWriteBuffer*, int64);

    MCNAPI void OnTransportCandidateError_n(::cricket::IceTransportInternal*, ::cricket::IceCandidateErrorEvent const&);

    MCNAPI void OnTransportCandidateGathered_n(::cricket::IceTransportInternal*, ::cricket::Candidate const&);

    MCNAPI void OnTransportCandidatePairChanged_n(::cricket::CandidatePairChangeEvent const&);

    MCNAPI void
    OnTransportCandidatesRemoved_n(::cricket::IceTransportInternal*, ::std::vector<::cricket::Candidate> const&);

    MCNAPI bool OnTransportChanged(::std::string const&, ::cricket::JsepTransport*);

    MCNAPI void OnTransportGatheringState_n(::cricket::IceTransportInternal*);

    MCNAPI void OnTransportReceivingState_n(::rtc::PacketTransportInternal*);

    MCNAPI void OnTransportRoleConflict_n(::cricket::IceTransportInternal*);

    MCNAPI void OnTransportStateChanged_n(::cricket::IceTransportInternal*);

    MCNAPI void OnTransportWritableState_n(::rtc::PacketTransportInternal*);

    MCNAPI void OnUnDemuxableRtpPacketReceived_n(::webrtc::RtpPacketReceived const&);

    MCNAPI ::webrtc::RTCError RemoveRemoteCandidates(::std::vector<::cricket::Candidate> const&);

    MCNAPI ::webrtc::RTCError RollbackTransports();

    MCNAPI void SetActiveResetSrtpParams(bool);

    MCNAPI void SetIceConfig(::cricket::IceConfig const&);

    MCNAPI void SetIceRole_n(::cricket::IceRole);

    MCNAPI bool SetLocalCertificate(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&);

    MCNAPI ::webrtc::RTCError
    SetLocalDescription(::webrtc::SdpType, ::cricket::SessionDescription const*, ::cricket::SessionDescription const*);

    MCNAPI void SetNeedsIceRestartFlag();

    MCNAPI ::webrtc::RTCError
    SetRemoteDescription(::webrtc::SdpType, ::cricket::SessionDescription const*, ::cricket::SessionDescription const*);

    MCNAPI void UpdateAggregateStates_n();

    MCNAPI ::webrtc::RTCError
    ValidateAndMaybeUpdateBundleGroups(bool, ::webrtc::SdpType, ::cricket::SessionDescription const*, ::cricket::SessionDescription const*);

    MCNAPI ::webrtc::RTCError ValidateContent(::cricket::ContentInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&,
        ::rtc::Thread*,
        ::cricket::PortAllocator*,
        ::webrtc::AsyncDnsResolverFactoryInterface*,
        ::webrtc::JsepTransportController::Config
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
