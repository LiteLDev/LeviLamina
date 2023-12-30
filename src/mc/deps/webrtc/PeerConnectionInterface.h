#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCErrorOr.h"
#include "mc/deps/webrtc/rtc/RefCountInterface.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace rtc { class Thread; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class Resource; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { struct DataChannelInit; }
// clang-format on

namespace webrtc {

class PeerConnectionInterface : public ::rtc::RefCountInterface {
public:
    // PeerConnectionInterface inner types declare
    // clang-format off
    struct IceServer;
    struct RTCConfiguration;
    struct RTCOfferAnswerOptions;
    // clang-format on

    // PeerConnectionInterface inner types define
    enum class IceConnectionState {};

    enum class IceGatheringState {};

    enum class IceTransportsType {};

    enum class PeerConnectionState {};

    enum class SignalingState {};

    enum class StatsOutputLevel {};

    struct IceServer {
    public:
        // prevent constructor by default
        IceServer& operator=(IceServer const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0IceServer@PeerConnectionInterface@webrtc@@QEAA@XZ
        MCAPI IceServer();

        // symbol: ??0IceServer@PeerConnectionInterface@webrtc@@QEAA@AEBU012@@Z
        MCAPI IceServer(struct webrtc::PeerConnectionInterface::IceServer const&);

        // symbol: ??8IceServer@PeerConnectionInterface@webrtc@@QEBA_NAEBU012@@Z
        MCAPI bool operator==(struct webrtc::PeerConnectionInterface::IceServer const&) const;

        // symbol: ??1IceServer@PeerConnectionInterface@webrtc@@QEAA@XZ
        MCAPI ~IceServer();

        // NOLINTEND
    };

    struct RTCConfiguration {
    public:
        // NOLINTBEGIN
        // symbol: ??0RTCConfiguration@PeerConnectionInterface@webrtc@@QEAA@XZ
        MCAPI RTCConfiguration();

        // symbol: ??0RTCConfiguration@PeerConnectionInterface@webrtc@@QEAA@AEBU012@@Z
        MCAPI RTCConfiguration(struct webrtc::PeerConnectionInterface::RTCConfiguration const&);

        // symbol: ??9RTCConfiguration@PeerConnectionInterface@webrtc@@QEBA_NAEBU012@@Z
        MCAPI bool operator!=(struct webrtc::PeerConnectionInterface::RTCConfiguration const&) const;

        // symbol: ??4RTCConfiguration@PeerConnectionInterface@webrtc@@QEAAAEAU012@AEBU012@@Z
        MCAPI struct webrtc::PeerConnectionInterface::RTCConfiguration&
        operator=(struct webrtc::PeerConnectionInterface::RTCConfiguration const&);

        // symbol: ??8RTCConfiguration@PeerConnectionInterface@webrtc@@QEBA_NAEBU012@@Z
        MCAPI bool operator==(struct webrtc::PeerConnectionInterface::RTCConfiguration const&) const;

        // symbol: ??1RTCConfiguration@PeerConnectionInterface@webrtc@@QEAA@XZ
        MCAPI ~RTCConfiguration();

        // NOLINTEND
    };

    struct RTCOfferAnswerOptions {
    public:
        // prevent constructor by default
        RTCOfferAnswerOptions& operator=(RTCOfferAnswerOptions const&);
        RTCOfferAnswerOptions(RTCOfferAnswerOptions const&);
        RTCOfferAnswerOptions();
    };

public:
    // prevent constructor by default
    PeerConnectionInterface& operator=(PeerConnectionInterface const&);
    PeerConnectionInterface(PeerConnectionInterface const&);
    PeerConnectionInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1PeerConnectionInterface@webrtc@@MEAA@XZ
    virtual ~PeerConnectionInterface();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4() = 0;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5() = 0;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6() = 0;

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8() = 0;

    // vIndex: 9, symbol:
    // ?RemoveTrackOrError@PeerConnectionInterface@webrtc@@UEAA?AVRTCError@2@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@@Z
    virtual class webrtc::RTCError RemoveTrackOrError(class rtc::scoped_refptr<class webrtc::RtpSenderInterface>);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11() = 0;

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12() = 0;

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13() = 0;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14() = 0;

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15() = 0;

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16() = 0;

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17() = 0;

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18() = 0;

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19() = 0;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20() = 0;

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21() = 0;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22() = 0;

    // vIndex: 23, symbol:
    // ?CreateDataChannelOrError@PeerConnectionInterface@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VDataChannelInterface@webrtc@@@rtc@@@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUDataChannelInit@2@@Z
    virtual class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::DataChannelInterface>>
    CreateDataChannelOrError(std::string const&, struct webrtc::DataChannelInit const*);

    // vIndex: 24, symbol:
    // ?CreateDataChannel@PeerConnectionInterface@webrtc@@UEAA?AV?$scoped_refptr@VDataChannelInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUDataChannelInit@2@@Z
    virtual class rtc::scoped_refptr<class webrtc::DataChannelInterface>
    CreateDataChannel(std::string const&, struct webrtc::DataChannelInit const*);

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26() = 0;

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28() = 0;

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29() = 0;

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30() = 0;

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31() = 0;

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32() = 0;

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33() = 0;

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34() = 0;

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35() = 0;

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36() = 0;

    // vIndex: 37, symbol:
    // ?SetLocalDescription@PeerConnectionInterface@webrtc@@UEAAXV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@V?$scoped_refptr@VSetLocalDescriptionObserverInterface@webrtc@@@rtc@@@Z
    virtual void
        SetLocalDescription(std::unique_ptr<class webrtc::SessionDescriptionInterface>, class rtc::scoped_refptr<class webrtc::SetLocalDescriptionObserverInterface>);

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38() = 0;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol: ?ShouldFireNegotiationNeededEvent@PeerConnectionInterface@webrtc@@UEAA_NI@Z
    virtual bool ShouldFireNegotiationNeededEvent(uint);

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41() = 0;

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42() = 0;

    // vIndex: 43, symbol:
    // ?AddIceCandidate@PeerConnectionInterface@webrtc@@UEAAXV?$unique_ptr@VIceCandidateInterface@webrtc@@U?$default_delete@VIceCandidateInterface@webrtc@@@std@@@std@@V?$function@$$A6AXVRTCError@webrtc@@@Z@4@@Z
    virtual void
        AddIceCandidate(std::unique_ptr<class webrtc::IceCandidateInterface>, std::function<void(class webrtc::RTCError)>);

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44() = 0;

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45() = 0;

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46() = 0;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47() = 0;

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48() = 0;

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49() = 0;

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50() = 0;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53() = 0;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54() = 0;

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55() = 0;

    // vIndex: 56, symbol: ?can_trickle_ice_candidates@PeerConnectionInterface@webrtc@@UEAA?AV?$optional@_N@std@@XZ
    virtual std::optional<bool> can_trickle_ice_candidates();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57() = 0;

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58() = 0;

    // vIndex: 59, symbol: __unk_vfn_59
    virtual void __unk_vfn_59() = 0;

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60() = 0;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: ?signaling_thread@PeerConnectionInterface@webrtc@@UEBAPEAVThread@rtc@@XZ
    virtual class rtc::Thread* signaling_thread() const;

    // symbol: ?AddAdaptationResource@PeerConnectionInterface@webrtc@@UEAAXV?$scoped_refptr@VResource@webrtc@@@rtc@@@Z
    MCVAPI void AddAdaptationResource(class rtc::scoped_refptr<class webrtc::Resource>);

    // symbol: ?ClearStatsCache@PeerConnectionInterface@webrtc@@UEAAXXZ
    MCVAPI void ClearStatsCache();

    // symbol: ?SetAudioPlayout@PeerConnectionInterface@webrtc@@UEAAX_N@Z
    MCVAPI void SetAudioPlayout(bool);

    // symbol: ?SetAudioRecording@PeerConnectionInterface@webrtc@@UEAAX_N@Z
    MCVAPI void SetAudioRecording(bool);

    // symbol: ?SetLocalDescription@PeerConnectionInterface@webrtc@@UEAAXPEAVSetSessionDescriptionObserver@2@@Z
    MCVAPI void SetLocalDescription(class webrtc::SetSessionDescriptionObserver*);

    // symbol:
    // ?SetLocalDescription@PeerConnectionInterface@webrtc@@UEAAXV?$scoped_refptr@VSetLocalDescriptionObserverInterface@webrtc@@@rtc@@@Z
    MCVAPI void SetLocalDescription(class rtc::scoped_refptr<class webrtc::SetLocalDescriptionObserverInterface>);

    // symbol:
    // ?SetRemoteDescription@PeerConnectionInterface@webrtc@@UEAAXPEAVSetSessionDescriptionObserver@2@PEAVSessionDescriptionInterface@2@@Z
    MCVAPI void
    SetRemoteDescription(class webrtc::SetSessionDescriptionObserver*, class webrtc::SessionDescriptionInterface*);

    // symbol:
    // ?AsString@PeerConnectionInterface@webrtc@@SA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4SignalingState@12@@Z
    MCAPI static std::string_view AsString(::webrtc::PeerConnectionInterface::SignalingState);

    // NOLINTEND
};

}; // namespace webrtc
