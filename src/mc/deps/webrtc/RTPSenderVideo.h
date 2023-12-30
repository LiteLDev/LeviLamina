#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VideoCodecType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class EncodedImage; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RTPSenderVideo {
public:
    // RTPSenderVideo inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // RTPSenderVideo inner types define
    struct Config {
    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();

    public:
        // NOLINTBEGIN
        // symbol: ??1Config@RTPSenderVideo@webrtc@@QEAA@XZ
        MCAPI ~Config();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RTPSenderVideo& operator=(RTPSenderVideo const&);
    RTPSenderVideo(RTPSenderVideo const&);
    RTPSenderVideo();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTPSenderVideo@webrtc@@UEAA@XZ
    virtual ~RTPSenderVideo();

    // symbol: ?PacketizationOverheadBps@RTPSenderVideo@webrtc@@QEBAIXZ
    MCAPI uint PacketizationOverheadBps() const;

    // symbol: ??0RTPSenderVideo@webrtc@@QEAA@AEBUConfig@01@@Z
    MCAPI explicit RTPSenderVideo(struct webrtc::RTPSenderVideo::Config const&);

    // symbol:
    // ?SendEncodedImage@RTPSenderVideo@webrtc@@QEAA_NHV?$optional@W4VideoCodecType@webrtc@@@std@@IAEBVEncodedImage@2@URTPVideoHeader@2@V?$optional@_J@4@@Z
    MCAPI bool
    SendEncodedImage(int, std::optional<::webrtc::VideoCodecType>, uint, class webrtc::EncodedImage const&, struct webrtc::RTPVideoHeader, std::optional<int64>);

    // symbol:
    // ?SendVideo@RTPSenderVideo@webrtc@@QEAA_NHV?$optional@W4VideoCodecType@webrtc@@@std@@I_JV?$ArrayView@$$CBE$0?BCGH@@rtc@@URTPVideoHeader@2@V?$optional@_J@4@@Z
    MCAPI bool
    SendVideo(int, std::optional<::webrtc::VideoCodecType>, uint, int64, class rtc::ArrayView<uchar const, -4711>, struct webrtc::RTPVideoHeader, std::optional<int64>);

    // symbol: ?SetVideoLayersAllocation@RTPSenderVideo@webrtc@@QEAAXUVideoLayersAllocation@2@@Z
    MCAPI void SetVideoLayersAllocation(struct webrtc::VideoLayersAllocation);

    // symbol: ?SetVideoLayersAllocationAfterTransformation@RTPSenderVideo@webrtc@@QEAAXUVideoLayersAllocation@2@@Z
    MCAPI void SetVideoLayersAllocationAfterTransformation(struct webrtc::VideoLayersAllocation);

    // symbol: ?SetVideoStructure@RTPSenderVideo@webrtc@@QEAAXPEBUFrameDependencyStructure@2@@Z
    MCAPI void SetVideoStructure(struct webrtc::FrameDependencyStructure const*);

    // symbol: ?SetVideoStructureAfterTransformation@RTPSenderVideo@webrtc@@QEAAXPEBUFrameDependencyStructure@2@@Z
    MCAPI void SetVideoStructureAfterTransformation(struct webrtc::FrameDependencyStructure const*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?AllowRetransmission@RTPSenderVideo@webrtc@@IEAA_NEH_J@Z
    MCAPI bool AllowRetransmission(uchar, int, int64);

    // symbol: ?GetTemporalId@RTPSenderVideo@webrtc@@KAEAEBURTPVideoHeader@2@@Z
    MCAPI static uchar GetTemporalId(struct webrtc::RTPVideoHeader const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AddRtpHeaderExtensions@RTPSenderVideo@webrtc@@AEBAXAEBURTPVideoHeader@2@_N1PEAVRtpPacketToSend@2@@Z
    MCAPI void
    AddRtpHeaderExtensions(struct webrtc::RTPVideoHeader const&, bool, bool, class webrtc::RtpPacketToSend*) const;

    // symbol: ?FecPacketOverhead@RTPSenderVideo@webrtc@@AEBA_KXZ
    MCAPI uint64 FecPacketOverhead() const;

    // symbol:
    // ?LogAndSendToNetwork@RTPSenderVideo@webrtc@@AEAAXV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@_K@Z
    MCAPI void LogAndSendToNetwork(std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>>, uint64);

    // symbol: ?MaybeUpdateCurrentPlayoutDelay@RTPSenderVideo@webrtc@@AEAAXAEBURTPVideoHeader@2@@Z
    MCAPI void MaybeUpdateCurrentPlayoutDelay(struct webrtc::RTPVideoHeader const&);

    // symbol: ?SetVideoLayersAllocationInternal@RTPSenderVideo@webrtc@@AEAAXUVideoLayersAllocation@2@@Z
    MCAPI void SetVideoLayersAllocationInternal(struct webrtc::VideoLayersAllocation);

    // symbol: ?SetVideoStructureInternal@RTPSenderVideo@webrtc@@AEAAXPEBUFrameDependencyStructure@2@@Z
    MCAPI void SetVideoStructureInternal(struct webrtc::FrameDependencyStructure const*);

    // symbol: ?UpdateConditionalRetransmit@RTPSenderVideo@webrtc@@AEAA_NE_J@Z
    MCAPI bool UpdateConditionalRetransmit(uchar, int64);

    // NOLINTEND
};

}; // namespace webrtc
