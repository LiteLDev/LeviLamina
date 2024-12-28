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
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Config();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    JsepTransportController& operator=(JsepTransportController const&);
    JsepTransportController(JsepTransportController const&);
    JsepTransportController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::RTCError AddRemoteCandidates(::std::string const&, ::std::vector<::cricket::Candidate> const&);

    MCAPI ::webrtc::RTCError
    ApplyDescription_n(bool, ::webrtc::SdpType, ::cricket::SessionDescription const*, ::cricket::SessionDescription const*);

    MCAPI ::std::unique_ptr<::webrtc::DtlsSrtpTransport>
    CreateDtlsSrtpTransport(::std::string const&, ::cricket::DtlsTransportInternal*, ::cricket::DtlsTransportInternal*);

    MCAPI ::std::unique_ptr<::cricket::DtlsTransportInternal>
    CreateDtlsTransport(::cricket::ContentInfo const&, ::cricket::IceTransportInternal*);

    MCAPI ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> CreateIceTransport(::std::string const&, bool);

    MCAPI ::cricket::JsepTransportDescription CreateJsepTransportDescription(
        ::cricket::ContentInfo const&,
        ::cricket::TransportInfo const&,
        ::std::vector<int> const&,
        int
    );

    MCAPI ::std::unique_ptr<::webrtc::RtpTransport>
    CreateUnencryptedRtpTransport(::std::string const&, ::rtc::PacketTransportInternal*, ::rtc::PacketTransportInternal*);

    MCAPI void DestroyAllJsepTransports_n();

    MCAPI ::cricket::IceRole
    DetermineIceRole(::cricket::JsepTransport*, ::cricket::TransportInfo const&, ::webrtc::SdpType, bool);

    MCAPI ::std::vector<::cricket::DtlsTransportInternal*> GetActiveDtlsTransports();

    MCAPI ::webrtc::DataChannelTransportInterface* GetDataChannelTransport(::std::string const&) const;

    MCAPI ::std::optional<::rtc::SSLRole> GetDtlsRole(::std::string const&) const;

    MCAPI ::cricket::DtlsTransportInternal* GetDtlsTransport(::std::string const&);

    MCAPI ::std::vector<::cricket::DtlsTransportInternal*> GetDtlsTransports();

    MCAPI ::std::vector<int> GetEncryptedHeaderExtensionIds(::cricket::ContentInfo const&);

    MCAPI ::cricket::JsepTransport const* GetJsepTransportByName(::std::string const&) const;

    MCAPI ::cricket::JsepTransport* GetJsepTransportByName(::std::string const&);

    MCAPI ::cricket::JsepTransport const* GetJsepTransportForMid(::std::string const&) const;

    MCAPI ::cricket::JsepTransport const* GetJsepTransportForMid(::std::string_view) const;

    MCAPI ::cricket::JsepTransport* GetJsepTransportForMid(::std::string const&);

    MCAPI ::webrtc::scoped_refptr<::rtc::RTCCertificate> GetLocalCertificate(::std::string const&) const;

    MCAPI ::std::unique_ptr<::rtc::SSLCertChain> GetRemoteSSLCertChain(::std::string const&) const;

    MCAPI int GetRtpAbsSendTimeHeaderExtensionId(::cricket::ContentInfo const&);

    MCAPI ::webrtc::RtpTransportInternal* GetRtpTransport(::std::string_view) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::SctpTransport> GetSctpTransport(::std::string const&) const;

    MCAPI bool GetStats(::std::string const&, ::cricket::TransportStats*);

    MCAPI bool HandleBundledContent(::cricket::ContentInfo const&, ::cricket::ContentGroup const&);

    MCAPI void HandleRejectedContent(::cricket::ContentInfo const&);

    MCAPI JsepTransportController(
        ::webrtc::Environment const&,
        ::rtc::Thread*,
        ::cricket::PortAllocator*,
        ::webrtc::AsyncDnsResolverFactoryInterface*,
        ::webrtc::JsepTransportController::Config
    );

    MCAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransport> LookupDtlsTransportByMid(::std::string const&);

    MCAPI ::webrtc::RTCError
    MaybeCreateJsepTransport(bool, ::cricket::ContentInfo const&, ::cricket::SessionDescription const&);

    MCAPI void MaybeStartGathering();

    MCAPI ::std::map<::cricket::ContentGroup const*, ::std::vector<int>>
    MergeEncryptedHeaderExtensionIdsForBundles(::cricket::SessionDescription const*);

    MCAPI bool NeedsIceRestart(::std::string const&) const;

    MCAPI void OnDtlsHandshakeError(::rtc::SSLHandshakeError);

    MCAPI void OnRtcpPacketReceived_n(::rtc::CopyOnWriteBuffer*, int64);

    MCAPI void OnTransportCandidateError_n(::cricket::IceTransportInternal*, ::cricket::IceCandidateErrorEvent const&);

    MCAPI void OnTransportCandidateGathered_n(::cricket::IceTransportInternal*, ::cricket::Candidate const&);

    MCAPI void OnTransportCandidatePairChanged_n(::cricket::CandidatePairChangeEvent const&);

    MCAPI void
    OnTransportCandidatesRemoved_n(::cricket::IceTransportInternal*, ::std::vector<::cricket::Candidate> const&);

    MCAPI bool OnTransportChanged(::std::string const&, ::cricket::JsepTransport*);

    MCAPI void OnTransportGatheringState_n(::cricket::IceTransportInternal*);

    MCAPI void OnTransportReceivingState_n(::rtc::PacketTransportInternal*);

    MCAPI void OnTransportRoleConflict_n(::cricket::IceTransportInternal*);

    MCAPI void OnTransportStateChanged_n(::cricket::IceTransportInternal*);

    MCAPI void OnTransportWritableState_n(::rtc::PacketTransportInternal*);

    MCAPI void OnUnDemuxableRtpPacketReceived_n(::webrtc::RtpPacketReceived const&);

    MCAPI ::webrtc::RTCError RemoveRemoteCandidates(::std::vector<::cricket::Candidate> const&);

    MCAPI ::webrtc::RTCError RollbackTransports();

    MCAPI void SetActiveResetSrtpParams(bool);

    MCAPI void SetIceConfig(::cricket::IceConfig const&);

    MCAPI void SetIceRole_n(::cricket::IceRole);

    MCAPI bool SetLocalCertificate(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&);

    MCAPI ::webrtc::RTCError
    SetLocalDescription(::webrtc::SdpType, ::cricket::SessionDescription const*, ::cricket::SessionDescription const*);

    MCAPI void SetNeedsIceRestartFlag();

    MCAPI ::webrtc::RTCError
    SetRemoteDescription(::webrtc::SdpType, ::cricket::SessionDescription const*, ::cricket::SessionDescription const*);

    MCAPI void UpdateAggregateStates_n();

    MCAPI ::webrtc::RTCError
    ValidateAndMaybeUpdateBundleGroups(bool, ::webrtc::SdpType, ::cricket::SessionDescription const*, ::cricket::SessionDescription const*);

    MCAPI ::webrtc::RTCError ValidateContent(::cricket::ContentInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
