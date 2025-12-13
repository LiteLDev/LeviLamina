#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceRole.h"
#include "mc/external/rtc/SSLHandshakeError.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
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

class JsepTransportController : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // JsepTransportController inner types declare
    // clang-format off
    class Observer;
    struct Config;
    // clang-format on

    // JsepTransportController inner types define
    class Observer {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Observer();

        virtual bool OnTransportChanged(
            ::std::string const&,
            ::webrtc::RtpTransportInternal*,
            ::webrtc::scoped_refptr<::webrtc::DtlsTransport>,
            ::webrtc::DataChannelTransportInterface*
        ) = 0;
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

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkb7548b;
        ::ll::UntypedStorage<4, 4>  mUnk32ee3d;
        ::ll::UntypedStorage<1, 5>  mUnkaf6c65;
        ::ll::UntypedStorage<4, 4>  mUnk83e2cc;
        ::ll::UntypedStorage<4, 4>  mUnke2745e;
        ::ll::UntypedStorage<1, 1>  mUnk256b96;
        ::ll::UntypedStorage<1, 1>  mUnkb68702;
        ::ll::UntypedStorage<8, 8>  mUnkeb626e;
        ::ll::UntypedStorage<8, 8>  mUnkf39509;
        ::ll::UntypedStorage<8, 8>  mUnkce62af;
        ::ll::UntypedStorage<8, 32> mUnk1ace17;
        ::ll::UntypedStorage<8, 32> mUnkb9d025;
        ::ll::UntypedStorage<1, 1>  mUnk6e8c50;
        ::ll::UntypedStorage<8, 8>  mUnk609fae;
        ::ll::UntypedStorage<8, 8>  mUnk34eb41;
        ::ll::UntypedStorage<8, 64> mUnk8ce806;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();

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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk2ff759;
    ::ll::UntypedStorage<8, 32>  mUnk44e644;
    ::ll::UntypedStorage<8, 32>  mUnkb04fa7;
    ::ll::UntypedStorage<8, 32>  mUnk1e5f87;
    ::ll::UntypedStorage<8, 32>  mUnk3200cc;
    ::ll::UntypedStorage<8, 32>  mUnk8ca4f9;
    ::ll::UntypedStorage<8, 32>  mUnk9eec63;
    ::ll::UntypedStorage<8, 32>  mUnk241760;
    ::ll::UntypedStorage<8, 40>  mUnk91f719;
    ::ll::UntypedStorage<8, 8>   mUnk444c91;
    ::ll::UntypedStorage<8, 8>   mUnk4c8ff8;
    ::ll::UntypedStorage<8, 8>   mUnk6ef715;
    ::ll::UntypedStorage<8, 184> mUnkab16cc;
    ::ll::UntypedStorage<4, 4>   mUnkabc128;
    ::ll::UntypedStorage<4, 4>   mUnkbc0dee;
    ::ll::UntypedStorage<4, 4>   mUnk1421b4;
    ::ll::UntypedStorage<4, 4>   mUnkdbc56d;
    ::ll::UntypedStorage<8, 208> mUnk3426a0;
    ::ll::UntypedStorage<1, 1>   mUnk61c871;
    ::ll::UntypedStorage<1, 2>   mUnk7f49fc;
    ::ll::UntypedStorage<4, 124> mUnkfbcd56;
    ::ll::UntypedStorage<4, 4>   mUnk81d8ea;
    ::ll::UntypedStorage<8, 8>   mUnkb5b6fe;
    ::ll::UntypedStorage<8, 8>   mUnk849e7d;
    ::ll::UntypedStorage<8, 72>  mUnk16053a;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepTransportController& operator=(JsepTransportController const&);
    JsepTransportController(JsepTransportController const&);
    JsepTransportController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsepTransportController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError
    AddRemoteCandidates(::std::string const& transport_name, ::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI ::webrtc::RTCError ApplyDescription_n(
        bool                                 local,
        ::webrtc::SdpType                    type,
        ::cricket::SessionDescription const* local_desc,
        ::cricket::SessionDescription const* remote_desc
    );

    MCNAPI ::std::unique_ptr<::webrtc::DtlsSrtpTransport> CreateDtlsSrtpTransport(
        ::std::string const&              transport_name,
        ::cricket::DtlsTransportInternal* rtp_dtls_transport,
        ::cricket::DtlsTransportInternal* rtcp_dtls_transport
    );

    MCNAPI ::std::unique_ptr<::cricket::DtlsTransportInternal>
    CreateDtlsTransport(::cricket::ContentInfo const& content_info, ::cricket::IceTransportInternal* ice);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::IceTransportInterface>
    CreateIceTransport(::std::string const& transport_name, bool rtcp);

    MCNAPI ::cricket::JsepTransportDescription CreateJsepTransportDescription(
        ::cricket::ContentInfo const&   content_info,
        ::cricket::TransportInfo const& transport_info,
        ::std::vector<int> const&       encrypted_extension_ids,
        int                             rtp_abs_sendtime_extn_id
    );

    MCNAPI ::std::unique_ptr<::webrtc::RtpTransport> CreateUnencryptedRtpTransport(
        ::std::string const&            transport_name,
        ::rtc::PacketTransportInternal* rtp_packet_transport,
        ::rtc::PacketTransportInternal* rtcp_packet_transport
    );

    MCNAPI void DestroyAllJsepTransports_n();

    MCNAPI ::cricket::IceRole DetermineIceRole(
        ::cricket::JsepTransport*       jsep_transport,
        ::cricket::TransportInfo const& transport_info,
        ::webrtc::SdpType               type,
        bool                            local
    );

    MCNAPI ::std::vector<::cricket::DtlsTransportInternal*> GetActiveDtlsTransports();

    MCNAPI ::webrtc::DataChannelTransportInterface* GetDataChannelTransport(::std::string const& mid) const;

    MCNAPI ::std::optional<::rtc::SSLRole> GetDtlsRole(::std::string const& mid) const;

    MCNAPI ::cricket::DtlsTransportInternal* GetDtlsTransport(::std::string const& mid);

    MCNAPI ::std::vector<::cricket::DtlsTransportInternal*> GetDtlsTransports();

    MCNAPI ::std::vector<int> GetEncryptedHeaderExtensionIds(::cricket::ContentInfo const& content_info);

    MCNAPI ::cricket::JsepTransport const* GetJsepTransportByName(::std::string const&) const;

    MCNAPI ::cricket::JsepTransport* GetJsepTransportByName(::std::string const& transport_name);

    MCNAPI ::cricket::JsepTransport const* GetJsepTransportForMid(::std::string const&) const;

    MCNAPI ::cricket::JsepTransport const* GetJsepTransportForMid(::std::string_view mid) const;

    MCNAPI ::cricket::JsepTransport* GetJsepTransportForMid(::std::string const& mid);

    MCNAPI ::webrtc::scoped_refptr<::rtc::RTCCertificate>
    GetLocalCertificate(::std::string const& transport_name) const;

    MCNAPI ::std::unique_ptr<::rtc::SSLCertChain> GetRemoteSSLCertChain(::std::string const& transport_name) const;

    MCNAPI int GetRtpAbsSendTimeHeaderExtensionId(::cricket::ContentInfo const& content_info);

    MCNAPI ::webrtc::RtpTransportInternal* GetRtpTransport(::std::string_view mid) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::SctpTransport> GetSctpTransport(::std::string const& mid) const;

    MCNAPI bool GetStats(::std::string const& transport_name, ::cricket::TransportStats* stats);

    MCNAPI bool
    HandleBundledContent(::cricket::ContentInfo const& content_info, ::cricket::ContentGroup const& bundle_group);

    MCNAPI void HandleRejectedContent(::cricket::ContentInfo const& content_info);

    MCNAPI JsepTransportController(
        ::webrtc::Environment const&                env,
        ::rtc::Thread*                              network_thread,
        ::cricket::PortAllocator*                   port_allocator,
        ::webrtc::AsyncDnsResolverFactoryInterface* async_dns_resolver_factory,
        ::webrtc::JsepTransportController::Config   config
    );

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransport> LookupDtlsTransportByMid(::std::string const& mid);

    MCNAPI ::webrtc::RTCError MaybeCreateJsepTransport(
        bool                                 local,
        ::cricket::ContentInfo const&        content_info,
        ::cricket::SessionDescription const& description
    );

    MCNAPI void MaybeStartGathering();

    MCNAPI ::std::map<::cricket::ContentGroup const*, ::std::vector<int>>
    MergeEncryptedHeaderExtensionIdsForBundles(::cricket::SessionDescription const* description);

    MCNAPI bool NeedsIceRestart(::std::string const& transport_name) const;

    MCNAPI void OnDtlsHandshakeError(::rtc::SSLHandshakeError error);

    MCNAPI void OnRtcpPacketReceived_n(::rtc::CopyOnWriteBuffer* packet, int64 packet_time_us);

    MCNAPI void OnTransportCandidateError_n(
        ::cricket::IceTransportInternal*         transport,
        ::cricket::IceCandidateErrorEvent const& event
    );

    MCNAPI void
    OnTransportCandidateGathered_n(::cricket::IceTransportInternal* transport, ::cricket::Candidate const& candidate);

    MCNAPI void OnTransportCandidatePairChanged_n(::cricket::CandidatePairChangeEvent const& event);

    MCNAPI void OnTransportCandidatesRemoved_n(
        ::cricket::IceTransportInternal*           transport,
        ::std::vector<::cricket::Candidate> const& candidates
    );

    MCNAPI bool OnTransportChanged(::std::string const& mid, ::cricket::JsepTransport* jsep_transport);

    MCNAPI void OnTransportGatheringState_n(::cricket::IceTransportInternal* transport);

    MCNAPI void OnTransportReceivingState_n(::rtc::PacketTransportInternal* transport);

    MCNAPI void OnTransportRoleConflict_n(::cricket::IceTransportInternal* transport);

    MCNAPI void OnTransportStateChanged_n(::cricket::IceTransportInternal* transport);

    MCNAPI void OnTransportWritableState_n(::rtc::PacketTransportInternal* transport);

    MCNAPI void OnUnDemuxableRtpPacketReceived_n(::webrtc::RtpPacketReceived const& packet);

    MCNAPI ::webrtc::RTCError RemoveRemoteCandidates(::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI ::webrtc::RTCError RollbackTransports();

    MCNAPI void SetActiveResetSrtpParams(bool active_reset_srtp_params);

    MCNAPI void SetIceConfig(::cricket::IceConfig const& config);

    MCNAPI void SetIceRole_n(::cricket::IceRole ice_role);

    MCNAPI bool SetLocalCertificate(::webrtc::scoped_refptr<::rtc::RTCCertificate> const& certificate);

    MCNAPI ::webrtc::RTCError SetLocalDescription(
        ::webrtc::SdpType                    type,
        ::cricket::SessionDescription const* local_desc,
        ::cricket::SessionDescription const* remote_desc
    );

    MCNAPI void SetNeedsIceRestartFlag();

    MCNAPI ::webrtc::RTCError SetRemoteDescription(
        ::webrtc::SdpType                    type,
        ::cricket::SessionDescription const* local_desc,
        ::cricket::SessionDescription const* remote_desc
    );

    MCNAPI void UpdateAggregateStates_n();

    MCNAPI ::webrtc::RTCError ValidateAndMaybeUpdateBundleGroups(
        bool                                 local,
        ::webrtc::SdpType                    type,
        ::cricket::SessionDescription const* local_desc,
        ::cricket::SessionDescription const* remote_desc
    );

    MCNAPI ::webrtc::RTCError ValidateContent(::cricket::ContentInfo const& content_info);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&                env,
        ::rtc::Thread*                              network_thread,
        ::cricket::PortAllocator*                   port_allocator,
        ::webrtc::AsyncDnsResolverFactoryInterface* async_dns_resolver_factory,
        ::webrtc::JsepTransportController::Config   config
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
