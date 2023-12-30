#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/cricket/IceRole.h"
#include "mc/deps/webrtc/rtc/SSLHandshakeError.h"
#include "mc/deps/webrtc/rtc/SSLRole.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

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
namespace webrtc { class IceTransportInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpTransport; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class SctpTransport; }
namespace webrtc { class SrtpTransport; }
// clang-format on

namespace webrtc {

class JsepTransportController {
public:
    // JsepTransportController inner types declare
    // clang-format off
    struct Config;
    class Observer;
    // clang-format on

    // JsepTransportController inner types define
    struct Config {
    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();

    public:
        // NOLINTBEGIN
        // symbol: ??1Config@JsepTransportController@webrtc@@QEAA@XZ
        MCAPI ~Config();

        // NOLINTEND
    };

    class Observer {
    public:
        // prevent constructor by default
        Observer& operator=(Observer const&);
        Observer(Observer const&);
        Observer();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Observer@JsepTransportController@webrtc@@UEAA@XZ
        virtual ~Observer();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    JsepTransportController& operator=(JsepTransportController const&);
    JsepTransportController(JsepTransportController const&);
    JsepTransportController();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1JsepTransportController@webrtc@@UEAA@XZ
    virtual ~JsepTransportController();

    // symbol:
    // ?AddRemoteCandidates@JsepTransportController@webrtc@@QEAA?AVRTCError@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@5@@Z
    MCAPI class webrtc::RTCError AddRemoteCandidates(std::string const&, std::vector<class cricket::Candidate> const&);

    // symbol:
    // ?GetDataChannelTransport@JsepTransportController@webrtc@@QEBAPEAVDataChannelTransportInterface@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class webrtc::DataChannelTransportInterface* GetDataChannelTransport(std::string const&) const;

    // symbol:
    // ?GetDtlsRole@JsepTransportController@webrtc@@QEBA?AV?$optional@W4SSLRole@rtc@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<::rtc::SSLRole> GetDtlsRole(std::string const&) const;

    // symbol:
    // ?GetDtlsTransport@JsepTransportController@webrtc@@QEAAPEAVDtlsTransportInternal@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::DtlsTransportInternal* GetDtlsTransport(std::string const&);

    // symbol:
    // ?GetLocalCertificate@JsepTransportController@webrtc@@QEBA?AV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class rtc::scoped_refptr<class rtc::RTCCertificate> GetLocalCertificate(std::string const&) const;

    // symbol:
    // ?GetRemoteSSLCertChain@JsepTransportController@webrtc@@QEBA?AV?$unique_ptr@VSSLCertChain@rtc@@U?$default_delete@VSSLCertChain@rtc@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::unique_ptr<class rtc::SSLCertChain> GetRemoteSSLCertChain(std::string const&) const;

    // symbol:
    // ?GetRtpTransport@JsepTransportController@webrtc@@QEBAPEAVRtpTransportInternal@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class webrtc::RtpTransportInternal* GetRtpTransport(std::string_view) const;

    // symbol:
    // ?GetSctpTransport@JsepTransportController@webrtc@@QEBA?AV?$scoped_refptr@VSctpTransport@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::SctpTransport> GetSctpTransport(std::string const&) const;

    // symbol:
    // ?GetStats@JsepTransportController@webrtc@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUTransportStats@cricket@@@Z
    MCAPI bool GetStats(std::string const&, struct cricket::TransportStats*);

    // symbol:
    // ??0JsepTransportController@webrtc@@QEAA@PEAVThread@rtc@@PEAVPortAllocator@cricket@@PEAVAsyncDnsResolverFactoryInterface@1@UConfig@01@@Z
    MCAPI JsepTransportController(
        class rtc::Thread*,
        class cricket::PortAllocator*,
        class webrtc::AsyncDnsResolverFactoryInterface*,
        struct webrtc::JsepTransportController::Config
    );

    // symbol:
    // ?LookupDtlsTransportByMid@JsepTransportController@webrtc@@QEAA?AV?$scoped_refptr@VDtlsTransport@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::DtlsTransport> LookupDtlsTransportByMid(std::string const&);

    // symbol: ?MaybeStartGathering@JsepTransportController@webrtc@@QEAAXXZ
    MCAPI void MaybeStartGathering();

    // symbol:
    // ?NeedsIceRestart@JsepTransportController@webrtc@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool NeedsIceRestart(std::string const&) const;

    // symbol:
    // ?RemoveRemoteCandidates@JsepTransportController@webrtc@@QEAA?AVRTCError@2@AEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI class webrtc::RTCError RemoveRemoteCandidates(std::vector<class cricket::Candidate> const&);

    // symbol: ?RollbackTransports@JsepTransportController@webrtc@@QEAA?AVRTCError@2@XZ
    MCAPI class webrtc::RTCError RollbackTransports();

    // symbol: ?SetActiveResetSrtpParams@JsepTransportController@webrtc@@QEAAX_N@Z
    MCAPI void SetActiveResetSrtpParams(bool);

    // symbol: ?SetIceConfig@JsepTransportController@webrtc@@QEAAXAEBUIceConfig@cricket@@@Z
    MCAPI void SetIceConfig(struct cricket::IceConfig const&);

    // symbol:
    // ?SetLocalCertificate@JsepTransportController@webrtc@@QEAA_NAEBV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@@Z
    MCAPI bool SetLocalCertificate(class rtc::scoped_refptr<class rtc::RTCCertificate> const&);

    // symbol:
    // ?SetLocalDescription@JsepTransportController@webrtc@@QEAA?AVRTCError@2@W4SdpType@2@PEBVSessionDescription@cricket@@@Z
    MCAPI class webrtc::RTCError SetLocalDescription(::webrtc::SdpType, class cricket::SessionDescription const*);

    // symbol: ?SetNeedsIceRestartFlag@JsepTransportController@webrtc@@QEAAXXZ
    MCAPI void SetNeedsIceRestartFlag();

    // symbol:
    // ?SetRemoteDescription@JsepTransportController@webrtc@@QEAA?AVRTCError@2@W4SdpType@2@PEBVSessionDescription@cricket@@@Z
    MCAPI class webrtc::RTCError SetRemoteDescription(::webrtc::SdpType, class cricket::SessionDescription const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?ApplyDescription_n@JsepTransportController@webrtc@@AEAA?AVRTCError@2@_NW4SdpType@2@PEBVSessionDescription@cricket@@@Z
    MCAPI class webrtc::RTCError ApplyDescription_n(bool, ::webrtc::SdpType, class cricket::SessionDescription const*);

    // symbol:
    // ?CreateDtlsSrtpTransport@JsepTransportController@webrtc@@AEAA?AV?$unique_ptr@VDtlsSrtpTransport@webrtc@@U?$default_delete@VDtlsSrtpTransport@webrtc@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@PEAVDtlsTransportInternal@cricket@@1@Z
    MCAPI std::unique_ptr<class webrtc::DtlsSrtpTransport>
    CreateDtlsSrtpTransport(std::string const&, class cricket::DtlsTransportInternal*, class cricket::DtlsTransportInternal*);

    // symbol:
    // ?CreateDtlsTransport@JsepTransportController@webrtc@@AEAA?AV?$unique_ptr@VDtlsTransportInternal@cricket@@U?$default_delete@VDtlsTransportInternal@cricket@@@std@@@std@@AEBVContentInfo@cricket@@PEAVIceTransportInternal@6@@Z
    MCAPI std::unique_ptr<class cricket::DtlsTransportInternal>
          CreateDtlsTransport(class cricket::ContentInfo const&, class cricket::IceTransportInternal*);

    // symbol:
    // ?CreateIceTransport@JsepTransportController@webrtc@@AEAA?AV?$scoped_refptr@VIceTransportInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI class rtc::scoped_refptr<class webrtc::IceTransportInterface> CreateIceTransport(std::string const&, bool);

    // symbol:
    // ?CreateJsepTransportDescription@JsepTransportController@webrtc@@AEAA?AUJsepTransportDescription@cricket@@AEBVContentInfo@4@AEBUTransportInfo@4@AEBV?$vector@HV?$allocator@H@std@@@std@@H@Z
    MCAPI struct cricket::JsepTransportDescription CreateJsepTransportDescription(
        class cricket::ContentInfo const&,
        struct cricket::TransportInfo const&,
        std::vector<int> const&,
        int
    );

    // symbol:
    // ?CreateSdesTransport@JsepTransportController@webrtc@@AEAA?AV?$unique_ptr@VSrtpTransport@webrtc@@U?$default_delete@VSrtpTransport@webrtc@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@PEAVDtlsTransportInternal@cricket@@1@Z
    MCAPI std::unique_ptr<class webrtc::SrtpTransport>
    CreateSdesTransport(std::string const&, class cricket::DtlsTransportInternal*, class cricket::DtlsTransportInternal*);

    // symbol:
    // ?CreateUnencryptedRtpTransport@JsepTransportController@webrtc@@AEAA?AV?$unique_ptr@VRtpTransport@webrtc@@U?$default_delete@VRtpTransport@webrtc@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@PEAVPacketTransportInternal@rtc@@1@Z
    MCAPI std::unique_ptr<class webrtc::RtpTransport>
    CreateUnencryptedRtpTransport(std::string const&, class rtc::PacketTransportInternal*, class rtc::PacketTransportInternal*);

    // symbol: ?DestroyAllJsepTransports_n@JsepTransportController@webrtc@@AEAAXXZ
    MCAPI void DestroyAllJsepTransports_n();

    // symbol:
    // ?DetermineIceRole@JsepTransportController@webrtc@@AEAA?AW4IceRole@cricket@@PEAVJsepTransport@4@AEBUTransportInfo@4@W4SdpType@2@_N@Z
    MCAPI ::cricket::IceRole
    DetermineIceRole(class cricket::JsepTransport*, struct cricket::TransportInfo const&, ::webrtc::SdpType, bool);

    // symbol:
    // ?GetActiveDtlsTransports@JsepTransportController@webrtc@@AEAA?AV?$vector@PEAVDtlsTransportInternal@cricket@@V?$allocator@PEAVDtlsTransportInternal@cricket@@@std@@@std@@XZ
    MCAPI std::vector<class cricket::DtlsTransportInternal*> GetActiveDtlsTransports();

    // symbol:
    // ?GetDtlsTransports@JsepTransportController@webrtc@@AEAA?AV?$vector@PEAVDtlsTransportInternal@cricket@@V?$allocator@PEAVDtlsTransportInternal@cricket@@@std@@@std@@XZ
    MCAPI std::vector<class cricket::DtlsTransportInternal*> GetDtlsTransports();

    // symbol:
    // ?GetEncryptedHeaderExtensionIds@JsepTransportController@webrtc@@AEAA?AV?$vector@HV?$allocator@H@std@@@std@@AEBVContentInfo@cricket@@@Z
    MCAPI std::vector<int> GetEncryptedHeaderExtensionIds(class cricket::ContentInfo const&);

    // symbol:
    // ?GetJsepTransportByName@JsepTransportController@webrtc@@AEAAPEAVJsepTransport@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::JsepTransport* GetJsepTransportByName(std::string const&);

    // symbol:
    // ?GetJsepTransportByName@JsepTransportController@webrtc@@AEBAPEBVJsepTransport@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::JsepTransport const* GetJsepTransportByName(std::string const&) const;

    // symbol:
    // ?GetJsepTransportForMid@JsepTransportController@webrtc@@AEAAPEAVJsepTransport@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::JsepTransport* GetJsepTransportForMid(std::string const&);

    // symbol:
    // ?GetJsepTransportForMid@JsepTransportController@webrtc@@AEBAPEBVJsepTransport@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::JsepTransport const* GetJsepTransportForMid(std::string const&) const;

    // symbol:
    // ?GetJsepTransportForMid@JsepTransportController@webrtc@@AEBAPEBVJsepTransport@cricket@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class cricket::JsepTransport const* GetJsepTransportForMid(std::string_view) const;

    // symbol: ?GetRtpAbsSendTimeHeaderExtensionId@JsepTransportController@webrtc@@AEAAHAEBVContentInfo@cricket@@@Z
    MCAPI int GetRtpAbsSendTimeHeaderExtensionId(class cricket::ContentInfo const&);

    // symbol:
    // ?HandleBundledContent@JsepTransportController@webrtc@@AEAA_NAEBVContentInfo@cricket@@AEBVContentGroup@4@@Z
    MCAPI bool HandleBundledContent(class cricket::ContentInfo const&, class cricket::ContentGroup const&);

    // symbol: ?HandleRejectedContent@JsepTransportController@webrtc@@AEAAXAEBVContentInfo@cricket@@@Z
    MCAPI void HandleRejectedContent(class cricket::ContentInfo const&);

    // symbol:
    // ?MaybeCreateJsepTransport@JsepTransportController@webrtc@@AEAA?AVRTCError@2@_NAEBVContentInfo@cricket@@AEBVSessionDescription@5@@Z
    MCAPI class webrtc::RTCError
    MaybeCreateJsepTransport(bool, class cricket::ContentInfo const&, class cricket::SessionDescription const&);

    // symbol:
    // ?MergeEncryptedHeaderExtensionIdsForBundles@JsepTransportController@webrtc@@AEAA?AV?$map@PEBVContentGroup@cricket@@V?$vector@HV?$allocator@H@std@@@std@@U?$less@PEBVContentGroup@cricket@@@4@V?$allocator@U?$pair@QEBVContentGroup@cricket@@V?$vector@HV?$allocator@H@std@@@std@@@std@@@4@@std@@PEBVSessionDescription@cricket@@@Z
    MCAPI std::map<class cricket::ContentGroup const*, std::vector<int>>
          MergeEncryptedHeaderExtensionIdsForBundles(class cricket::SessionDescription const*);

    // symbol: ?OnDtlsHandshakeError@JsepTransportController@webrtc@@AEAAXW4SSLHandshakeError@rtc@@@Z
    MCAPI void OnDtlsHandshakeError(::rtc::SSLHandshakeError);

    // symbol: ?OnRtcpPacketReceived_n@JsepTransportController@webrtc@@AEAAXPEAVCopyOnWriteBuffer@rtc@@_J@Z
    MCAPI void OnRtcpPacketReceived_n(class rtc::CopyOnWriteBuffer*, int64);

    // symbol:
    // ?OnTransportCandidateError_n@JsepTransportController@webrtc@@AEAAXPEAVIceTransportInternal@cricket@@AEBUIceCandidateErrorEvent@4@@Z
    MCAPI void
    OnTransportCandidateError_n(class cricket::IceTransportInternal*, struct cricket::IceCandidateErrorEvent const&);

    // symbol:
    // ?OnTransportCandidateGathered_n@JsepTransportController@webrtc@@AEAAXPEAVIceTransportInternal@cricket@@AEBVCandidate@4@@Z
    MCAPI void OnTransportCandidateGathered_n(class cricket::IceTransportInternal*, class cricket::Candidate const&);

    // symbol:
    // ?OnTransportCandidatePairChanged_n@JsepTransportController@webrtc@@AEAAXAEBUCandidatePairChangeEvent@cricket@@@Z
    MCAPI void OnTransportCandidatePairChanged_n(struct cricket::CandidatePairChangeEvent const&);

    // symbol:
    // ?OnTransportCandidatesRemoved_n@JsepTransportController@webrtc@@AEAAXPEAVIceTransportInternal@cricket@@AEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI void
    OnTransportCandidatesRemoved_n(class cricket::IceTransportInternal*, std::vector<class cricket::Candidate> const&);

    // symbol:
    // ?OnTransportChanged@JsepTransportController@webrtc@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVJsepTransport@cricket@@@Z
    MCAPI bool OnTransportChanged(std::string const&, class cricket::JsepTransport*);

    // symbol: ?OnTransportGatheringState_n@JsepTransportController@webrtc@@AEAAXPEAVIceTransportInternal@cricket@@@Z
    MCAPI void OnTransportGatheringState_n(class cricket::IceTransportInternal*);

    // symbol: ?OnTransportReceivingState_n@JsepTransportController@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnTransportReceivingState_n(class rtc::PacketTransportInternal*);

    // symbol: ?OnTransportRoleConflict_n@JsepTransportController@webrtc@@AEAAXPEAVIceTransportInternal@cricket@@@Z
    MCAPI void OnTransportRoleConflict_n(class cricket::IceTransportInternal*);

    // symbol: ?OnTransportStateChanged_n@JsepTransportController@webrtc@@AEAAXPEAVIceTransportInternal@cricket@@@Z
    MCAPI void OnTransportStateChanged_n(class cricket::IceTransportInternal*);

    // symbol: ?OnTransportWritableState_n@JsepTransportController@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnTransportWritableState_n(class rtc::PacketTransportInternal*);

    // symbol: ?SetIceRole_n@JsepTransportController@webrtc@@AEAAXW4IceRole@cricket@@@Z
    MCAPI void SetIceRole_n(::cricket::IceRole);

    // symbol: ?UpdateAggregateStates_n@JsepTransportController@webrtc@@AEAAXXZ
    MCAPI void UpdateAggregateStates_n();

    // symbol:
    // ?ValidateAndMaybeUpdateBundleGroups@JsepTransportController@webrtc@@AEAA?AVRTCError@2@_NW4SdpType@2@PEBVSessionDescription@cricket@@@Z
    MCAPI class webrtc::RTCError
    ValidateAndMaybeUpdateBundleGroups(bool, ::webrtc::SdpType, class cricket::SessionDescription const*);

    // symbol: ?ValidateContent@JsepTransportController@webrtc@@AEAA?AVRTCError@2@AEBVContentInfo@cricket@@@Z
    MCAPI class webrtc::RTCError ValidateContent(class cricket::ContentInfo const&);

    // NOLINTEND
};

}; // namespace webrtc
