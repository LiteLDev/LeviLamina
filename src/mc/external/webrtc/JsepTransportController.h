#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/IceRole.h"
#include "mc/external/webrtc/PayloadTypeSuggester.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/SSLRole.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncDnsResolverFactoryInterface; }
namespace webrtc { class Candidate; }
namespace webrtc { class ContentGroup; }
namespace webrtc { class ContentInfo; }
namespace webrtc { class DataChannelTransportInterface; }
namespace webrtc { class DtlsTransport; }
namespace webrtc { class DtlsTransportInternal; }
namespace webrtc { class Environment; }
namespace webrtc { class IceCandidate; }
namespace webrtc { class IceTransportInterface; }
namespace webrtc { class IceTransportInternal; }
namespace webrtc { class LocalNetworkAccessPermissionFactoryInterface; }
namespace webrtc { class PacketTransportInternal; }
namespace webrtc { class PayloadType; }
namespace webrtc { class PayloadTypePicker; }
namespace webrtc { class PortAllocator; }
namespace webrtc { class RTCCertificate; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class SSLCertChain; }
namespace webrtc { class SctpTransport; }
namespace webrtc { class SessionDescription; }
namespace webrtc { class Thread; }
namespace webrtc { struct Codec; }
namespace webrtc { struct IceConfig; }
namespace webrtc { struct JsepTransportDescription; }
namespace webrtc { struct TransportInfo; }
namespace webrtc { struct TransportStats; }
// clang-format on

namespace webrtc {

class JsepTransportController : public ::webrtc::PayloadTypeSuggester,
                                public ::sigslot::has_slots<::sigslot::single_threaded> {
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
            ::std::string const&                             mid,
            ::webrtc::RtpTransportInternal*                  rtp_transport,
            ::webrtc::scoped_refptr<::webrtc::DtlsTransport> dtls_transport,
            ::webrtc::DataChannelTransportInterface*         data_channel_transport
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
        ::ll::UntypedStorage<4, 4>  mUnk534267;
        ::ll::UntypedStorage<8, 32> mUnkaf6c65;
        ::ll::UntypedStorage<4, 4>  mUnk83e2cc;
        ::ll::UntypedStorage<4, 4>  mUnke2745e;
        ::ll::UntypedStorage<1, 1>  mUnk256b96;
        ::ll::UntypedStorage<1, 1>  mUnkb68702;
        ::ll::UntypedStorage<8, 8>  mUnkeb626e;
        ::ll::UntypedStorage<8, 8>  mUnkfea93f;
        ::ll::UntypedStorage<8, 8>  mUnkce62af;
        ::ll::UntypedStorage<8, 32> mUnka1407d;
        ::ll::UntypedStorage<8, 32> mUnkb9d025;
        ::ll::UntypedStorage<1, 1>  mUnk6e8c50;
        ::ll::UntypedStorage<8, 8>  mUnk34eb41;
        ::ll::UntypedStorage<8, 64> mUnk6e724c;
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
    ::ll::UntypedStorage<8, 32>  mUnk4eab10;
    ::ll::UntypedStorage<8, 32>  mUnk44e644;
    ::ll::UntypedStorage<8, 32>  mUnkb04fa7;
    ::ll::UntypedStorage<8, 32>  mUnk4586e7;
    ::ll::UntypedStorage<8, 32>  mUnkbc4032;
    ::ll::UntypedStorage<8, 32>  mUnkf19a55;
    ::ll::UntypedStorage<8, 32>  mUnk3317b0;
    ::ll::UntypedStorage<8, 32>  mUnk216f04;
    ::ll::UntypedStorage<8, 40>  mUnk91f719;
    ::ll::UntypedStorage<8, 8>   mUnkffafaa;
    ::ll::UntypedStorage<8, 8>   mUnk8b06dc;
    ::ll::UntypedStorage<8, 8>   mUnk6ef715;
    ::ll::UntypedStorage<8, 8>   mUnk76cd20;
    ::ll::UntypedStorage<8, 184> mUnkab16cc;
    ::ll::UntypedStorage<4, 4>   mUnk3d8ad9;
    ::ll::UntypedStorage<4, 4>   mUnkbc0dee;
    ::ll::UntypedStorage<4, 4>   mUnk1421b4;
    ::ll::UntypedStorage<4, 4>   mUnkc5d9fe;
    ::ll::UntypedStorage<8, 224> mUnk3426a0;
    ::ll::UntypedStorage<1, 1>   mUnk61c871;
    ::ll::UntypedStorage<1, 2>   mUnk7f49fc;
    ::ll::UntypedStorage<4, 128> mUnkb5a54d;
    ::ll::UntypedStorage<4, 4>   mUnk4768e6;
    ::ll::UntypedStorage<8, 8>   mUnk1bef03;
    ::ll::UntypedStorage<8, 72>  mUnk16053a;
    ::ll::UntypedStorage<8, 8>   mUnk5ae4f0;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepTransportController& operator=(JsepTransportController const&);
    JsepTransportController(JsepTransportController const&);
    JsepTransportController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsepTransportController() /*override*/ = default;

    virtual ::webrtc::RTCErrorOr<::webrtc::PayloadType>
    SuggestPayloadType(::std::string const& mid, ::webrtc::Codec codec) /*override*/;

    virtual ::webrtc::RTCError AddLocalMapping(
        ::std::string const&   mid,
        ::webrtc::PayloadType  payload_type,
        ::webrtc::Codec const& codec
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError
    AddRemoteCandidates(::std::string const& transport_name, ::std::vector<::webrtc::Candidate> const& candidates);

    MCNAPI ::webrtc::RTCError ApplyDescription_n(
        bool                                local,
        ::webrtc::SdpType                   type,
        ::webrtc::SessionDescription const* local_desc,
        ::webrtc::SessionDescription const* remote_desc
    );

    MCNAPI ::std::unique_ptr<::webrtc::DtlsTransportInternal>
    CreateDtlsTransport(::webrtc::ContentInfo const& content_info, ::webrtc::IceTransportInternal* ice);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::IceTransportInterface>
    CreateIceTransport(::std::string const& transport_name, bool rtcp);

    MCNAPI ::webrtc::JsepTransportDescription CreateJsepTransportDescription(
        ::webrtc::ContentInfo const&   content_info,
        ::webrtc::TransportInfo const& transport_info,
        ::std::vector<int> const&      encrypted_extension_ids,
        int                            rtp_abs_sendtime_extn_id
    );

    MCNAPI ::std::vector<::webrtc::DtlsTransportInternal*> GetActiveDtlsTransports();

    MCNAPI ::webrtc::DataChannelTransportInterface* GetDataChannelTransport(::std::string const& mid) const;

    MCNAPI ::std::optional<::webrtc::SSLRole> GetDtlsRole(::std::string const& mid) const;

    MCNAPI ::webrtc::DtlsTransportInternal* GetDtlsTransport(::std::string const& mid);

    MCNAPI ::std::vector<::webrtc::DtlsTransportInternal*> GetDtlsTransports();

    MCNAPI ::std::vector<int> GetEncryptedHeaderExtensionIds(::webrtc::ContentInfo const& content_info);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RTCCertificate>
    GetLocalCertificate(::std::string const& transport_name) const;

    MCNAPI ::std::unique_ptr<::webrtc::SSLCertChain> GetRemoteSSLCertChain(::std::string const& transport_name) const;

    MCNAPI ::webrtc::RtpTransportInternal* GetRtpTransport(::std::string_view mid) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::SctpTransport> GetSctpTransport(::std::string const& mid) const;

    MCNAPI bool GetStats(::std::string const& transport_name, ::webrtc::TransportStats* stats) const;

    MCNAPI JsepTransportController(
        ::webrtc::Environment const&                            env,
        ::webrtc::Thread*                                       network_thread,
        ::webrtc::PortAllocator*                                port_allocator,
        ::webrtc::AsyncDnsResolverFactoryInterface*             async_dns_resolver_factory,
        ::webrtc::LocalNetworkAccessPermissionFactoryInterface* lna_permission_factory,
        ::webrtc::PayloadTypePicker&                            payload_type_picker,
        ::webrtc::JsepTransportController::Config               config
    );

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransport> LookupDtlsTransportByMid(::std::string const& mid);

    MCNAPI ::webrtc::RTCError MaybeCreateJsepTransport(
        bool                                local,
        ::webrtc::ContentInfo const&        content_info,
        ::webrtc::SessionDescription const& description
    );

    MCNAPI void MaybeStartGathering();

    MCNAPI ::std::map<::webrtc::ContentGroup const*, ::std::vector<int>>
    MergeEncryptedHeaderExtensionIdsForBundles(::webrtc::SessionDescription const* description);

    MCNAPI bool NeedsIceRestart(::std::string const& transport_name) const;

    MCNAPI void
    OnTransportCandidateGathered_n(::webrtc::IceTransportInternal* transport, ::webrtc::Candidate const& candidate);

    MCNAPI void OnTransportReceivingState_n(::webrtc::PacketTransportInternal* transport);

    MCNAPI void OnTransportRoleConflict_n(::webrtc::IceTransportInternal* transport);

    MCNAPI void OnTransportStateChanged_n(::webrtc::IceTransportInternal* transport);

    MCNAPI void OnTransportWritableState_n(::webrtc::PacketTransportInternal* transport);

    MCNAPI bool RemoveRemoteCandidate(::webrtc::IceCandidate const* c);

    MCNAPI ::webrtc::RTCError RollbackTransports();

    MCNAPI void SetActiveResetSrtpParams(bool active_reset_srtp_params);

    MCNAPI void SetIceConfig(::webrtc::IceConfig const& config);

    MCNAPI void SetIceRole_n(::webrtc::IceRole ice_role);

    MCNAPI bool SetLocalCertificate(::webrtc::scoped_refptr<::webrtc::RTCCertificate> const& certificate);

    MCNAPI ::webrtc::RTCError SetLocalDescription(
        ::webrtc::SdpType                   type,
        ::webrtc::SessionDescription const* local_desc,
        ::webrtc::SessionDescription const* remote_desc
    );

    MCNAPI void SetNeedsIceRestartFlag();

    MCNAPI ::webrtc::RTCError SetRemoteDescription(
        ::webrtc::SdpType                   type,
        ::webrtc::SessionDescription const* local_desc,
        ::webrtc::SessionDescription const* remote_desc
    );

    MCNAPI void UpdateAggregateStates_n();

    MCNAPI ::webrtc::RTCError ValidateAndMaybeUpdateBundleGroups(
        bool                                local,
        ::webrtc::SdpType                   type,
        ::webrtc::SessionDescription const* local_desc,
        ::webrtc::SessionDescription const* remote_desc
    );

    MCNAPI ::webrtc::RTCError ValidateContent(::webrtc::ContentInfo const& content_info);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&                            env,
        ::webrtc::Thread*                                       network_thread,
        ::webrtc::PortAllocator*                                port_allocator,
        ::webrtc::AsyncDnsResolverFactoryInterface*             async_dns_resolver_factory,
        ::webrtc::LocalNetworkAccessPermissionFactoryInterface* lna_permission_factory,
        ::webrtc::PayloadTypePicker&                            payload_type_picker,
        ::webrtc::JsepTransportController::Config               config
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCErrorOr<::webrtc::PayloadType>
    $SuggestPayloadType(::std::string const& mid, ::webrtc::Codec codec);

    MCNAPI ::webrtc::RTCError
    $AddLocalMapping(::std::string const& mid, ::webrtc::PayloadType payload_type, ::webrtc::Codec const& codec);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForPayloadTypeSuggester();
    // NOLINTEND
};

} // namespace webrtc
