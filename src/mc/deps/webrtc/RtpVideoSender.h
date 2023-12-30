#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/EncodedImageCallback.h"
#include "mc/deps/webrtc/RtpSequenceNumberMap.h"
#include "mc/deps/webrtc/StreamFeedbackObserver.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class EncodedImage; }
namespace webrtc { class FecController; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class Frequency; }
namespace webrtc { class RateLimiter; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class RtpTransportControllerSendInterface; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class Transport; }
namespace webrtc { class VideoBitrateAllocation; }
namespace webrtc { struct BitrateAllocationUpdate; }
namespace webrtc { struct CodecSpecificInfo; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct RtpConfig; }
namespace webrtc { struct RtpPayloadState; }
namespace webrtc { struct RtpSenderObservers; }
namespace webrtc { struct RtpState; }
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RtpVideoSender {
public:
    // prevent constructor by default
    RtpVideoSender& operator=(RtpVideoSender const&);
    RtpVideoSender(RtpVideoSender const&);
    RtpVideoSender();

public:
    // NOLINTBEGIN
    // symbol: ?DeliverRtcp@RtpVideoSender@webrtc@@UEAAXPEBE_K@Z
    MCVAPI void DeliverRtcp(uchar const*, uint64);

    // symbol: ?GetPayloadBitrateBps@RtpVideoSender@webrtc@@UEBAIXZ
    MCVAPI uint GetPayloadBitrateBps() const;

    // symbol: ?GetProtectionBitrateBps@RtpVideoSender@webrtc@@UEBAIXZ
    MCVAPI uint GetProtectionBitrateBps() const;

    // symbol:
    // ?GetRtpPayloadStates@RtpVideoSender@webrtc@@UEBA?AV?$map@IURtpPayloadState@webrtc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURtpPayloadState@webrtc@@@std@@@4@@std@@XZ
    MCVAPI std::map<uint, struct webrtc::RtpPayloadState> GetRtpPayloadStates() const;

    // symbol:
    // ?GetRtpStates@RtpVideoSender@webrtc@@UEBA?AV?$map@IURtpState@webrtc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURtpState@webrtc@@@std@@@4@@std@@XZ
    MCVAPI std::map<uint, struct webrtc::RtpState> GetRtpStates() const;

    // symbol:
    // ?GetSentRtpPacketInfos@RtpVideoSender@webrtc@@UEBA?AV?$vector@UInfo@RtpSequenceNumberMap@webrtc@@V?$allocator@UInfo@RtpSequenceNumberMap@webrtc@@@std@@@std@@IV?$ArrayView@$$CBG$0?BCGH@@rtc@@@Z
    MCVAPI std::vector<struct webrtc::RtpSequenceNumberMap::Info>
           GetSentRtpPacketInfos(uint, class rtc::ArrayView<ushort const, -4711>) const;

    // symbol: ?IsActive@RtpVideoSender@webrtc@@UEAA_NXZ
    MCVAPI bool IsActive();

    // symbol: ?OnBitrateAllocationUpdated@RtpVideoSender@webrtc@@UEAAXAEBVVideoBitrateAllocation@2@@Z
    MCVAPI void OnBitrateAllocationUpdated(class webrtc::VideoBitrateAllocation const&);

    // symbol: ?OnBitrateUpdated@RtpVideoSender@webrtc@@UEAAXUBitrateAllocationUpdate@2@H@Z
    MCVAPI void OnBitrateUpdated(struct webrtc::BitrateAllocationUpdate, int);

    // symbol:
    // ?OnEncodedImage@RtpVideoSender@webrtc@@UEAA?AUResult@EncodedImageCallback@2@AEBVEncodedImage@2@PEBUCodecSpecificInfo@2@@Z
    MCVAPI struct webrtc::EncodedImageCallback::Result
    OnEncodedImage(class webrtc::EncodedImage const&, struct webrtc::CodecSpecificInfo const*);

    // symbol: ?OnNetworkAvailability@RtpVideoSender@webrtc@@UEAAX_N@Z
    MCVAPI void OnNetworkAvailability(bool);

    // symbol:
    // ?OnPacketFeedbackVector@RtpVideoSender@webrtc@@UEAAXV?$vector@UStreamPacketInfo@StreamFeedbackObserver@webrtc@@V?$allocator@UStreamPacketInfo@StreamFeedbackObserver@webrtc@@@std@@@std@@@Z
    MCVAPI void OnPacketFeedbackVector(std::vector<struct webrtc::StreamFeedbackObserver::StreamPacketInfo>);

    // symbol: ?OnTransportOverheadChanged@RtpVideoSender@webrtc@@UEAAX_K@Z
    MCVAPI void OnTransportOverheadChanged(uint64);

    // symbol: ?OnVideoLayersAllocationUpdated@RtpVideoSender@webrtc@@UEAAXAEBUVideoLayersAllocation@2@@Z
    MCVAPI void OnVideoLayersAllocationUpdated(struct webrtc::VideoLayersAllocation const&);

    // symbol: ?ProtectionRequest@RtpVideoSender@webrtc@@UEAAHPEBUFecProtectionParams@2@0PEAI11@Z
    MCVAPI int
    ProtectionRequest(struct webrtc::FecProtectionParams const*, struct webrtc::FecProtectionParams const*, uint*, uint*, uint*);

    // symbol: ?SetActiveModules@RtpVideoSender@webrtc@@UEAAXAEBV?$vector@_NV?$allocator@_N@std@@@std@@@Z
    MCVAPI void SetActiveModules(std::vector<bool> const&);

    // symbol: ?SetEncodingData@RtpVideoSender@webrtc@@UEAAX_K00@Z
    MCVAPI void SetEncodingData(uint64, uint64, uint64);

    // symbol: ?SetFecAllowed@RtpVideoSender@webrtc@@UEAAX_N@Z
    MCVAPI void SetFecAllowed(bool);

    // symbol: ?Stop@RtpVideoSender@webrtc@@UEAAXXZ
    MCVAPI void Stop();

    // symbol: ??1RtpVideoSender@webrtc@@UEAA@XZ
    MCVAPI ~RtpVideoSender();

    // symbol:
    // ??0RtpVideoSender@webrtc@@QEAA@PEAVClock@1@AEBV?$map@IURtpState@webrtc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURtpState@webrtc@@@std@@@4@@std@@AEBV?$map@IURtpPayloadState@webrtc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURtpPayloadState@webrtc@@@std@@@4@@4@AEBURtpConfig@1@HPEAVTransport@1@AEBURtpSenderObservers@1@PEAVRtpTransportControllerSendInterface@1@PEAVRtcEventLog@1@PEAVRateLimiter@1@V?$unique_ptr@VFecController@webrtc@@U?$default_delete@VFecController@webrtc@@@std@@@4@PEAVFrameEncryptorInterface@1@AEBUCryptoOptions@1@V?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@AEBVFieldTrialsView@1@PEAVTaskQueueFactory@1@@Z
    MCAPI RtpVideoSender(class webrtc::Clock*, std::map<uint, struct webrtc::RtpState> const&, std::map<uint, struct webrtc::RtpPayloadState> const&, struct webrtc::RtpConfig const&, int, class webrtc::Transport*, struct webrtc::RtpSenderObservers const&, class webrtc::RtpTransportControllerSendInterface*, class webrtc::RtcEventLog*, class webrtc::RateLimiter*, std::unique_ptr<class webrtc::FecController>, class webrtc::FrameEncryptorInterface*, struct webrtc::CryptoOptions const&, class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>, class webrtc::FieldTrialsView const&, class webrtc::TaskQueueFactory*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CalculateOverheadRate@RtpVideoSender@webrtc@@AEBA?AVDataRate@2@V32@VDataSize@2@1VFrequency@2@@Z
    MCAPI class webrtc::DataRate CalculateOverheadRate(
        class webrtc::DataRate,
        class webrtc::DataSize,
        class webrtc::DataSize,
        class webrtc::Frequency
    ) const;

    // symbol:
    // ?ConfigureSsrcs@RtpVideoSender@webrtc@@AEAAXAEBV?$map@IURtpState@webrtc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURtpState@webrtc@@@std@@@4@@std@@@Z
    MCAPI void ConfigureSsrcs(std::map<uint, struct webrtc::RtpState> const&);

    // symbol: ?GetPacketizationOverheadRate@RtpVideoSender@webrtc@@AEBAIXZ
    MCAPI uint GetPacketizationOverheadRate() const;

    // symbol: ?IsActiveLocked@RtpVideoSender@webrtc@@AEAA_NXZ
    MCAPI bool IsActiveLocked();

    // symbol: ?NackEnabled@RtpVideoSender@webrtc@@AEBA_NXZ
    MCAPI bool NackEnabled() const;

    // symbol: ?SetActiveModulesLocked@RtpVideoSender@webrtc@@AEAAXAEBV?$vector@_NV?$allocator@_N@std@@@std@@@Z
    MCAPI void SetActiveModulesLocked(std::vector<bool> const&);

    // NOLINTEND
};

}; // namespace webrtc
