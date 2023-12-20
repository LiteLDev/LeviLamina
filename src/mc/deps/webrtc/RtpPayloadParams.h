#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTPVideoHeader.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class EncodedImage; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { struct CodecSpecificInfo; }
namespace webrtc { struct CodecSpecificInfoH264; }
namespace webrtc { struct CodecSpecificInfoVP8; }
namespace webrtc { struct CodecSpecificInfoVP9; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct GenericFrameInfo; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct RtpPayloadState; }
// clang-format on

namespace webrtc {

class RtpPayloadParams {
public:
    // prevent constructor by default
    RtpPayloadParams& operator=(RtpPayloadParams const&);
    RtpPayloadParams();

public:
    // NOLINTBEGIN
    // symbol:
    // ?GenericStructure@RtpPayloadParams@webrtc@@QEAA?AV?$optional@UFrameDependencyStructure@webrtc@@@std@@PEBUCodecSpecificInfo@2@@Z
    MCAPI std::optional<struct webrtc::FrameDependencyStructure>
          GenericStructure(struct webrtc::CodecSpecificInfo const*);

    // symbol:
    // ?GetRtpVideoHeader@RtpPayloadParams@webrtc@@QEAA?AURTPVideoHeader@2@AEBVEncodedImage@2@PEBUCodecSpecificInfo@2@_J@Z
    MCAPI struct webrtc::RTPVideoHeader
    GetRtpVideoHeader(class webrtc::EncodedImage const&, struct webrtc::CodecSpecificInfo const*, int64);

    // symbol: ??0RtpPayloadParams@webrtc@@QEAA@AEBV01@@Z
    MCAPI RtpPayloadParams(class webrtc::RtpPayloadParams const&);

    // symbol: ??0RtpPayloadParams@webrtc@@QEAA@IPEBURtpPayloadState@1@AEBVFieldTrialsView@1@@Z
    MCAPI RtpPayloadParams(uint, struct webrtc::RtpPayloadState const*, class webrtc::FieldTrialsView const&);

    // symbol: ?ssrc@RtpPayloadParams@webrtc@@QEBAIXZ
    MCAPI uint ssrc() const;

    // symbol: ?state@RtpPayloadParams@webrtc@@QEBA?AURtpPayloadState@2@XZ
    MCAPI struct webrtc::RtpPayloadState state() const;

    // symbol: ??1RtpPayloadParams@webrtc@@QEAA@XZ
    MCAPI ~RtpPayloadParams();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?GenericDescriptorFromFrameInfo@RtpPayloadParams@webrtc@@AEAA?AUGenericDescriptorInfo@RTPVideoHeader@2@AEBUGenericFrameInfo@2@_J@Z
    MCAPI struct webrtc::RTPVideoHeader::GenericDescriptorInfo
    GenericDescriptorFromFrameInfo(struct webrtc::GenericFrameInfo const&, int64);

    // symbol: ?GenericToGeneric@RtpPayloadParams@webrtc@@AEAAX_J_NPEAURTPVideoHeader@2@@Z
    MCAPI void GenericToGeneric(int64, bool, struct webrtc::RTPVideoHeader*);

    // symbol: ?H264ToGeneric@RtpPayloadParams@webrtc@@AEAAXAEBUCodecSpecificInfoH264@2@_J_NPEAURTPVideoHeader@2@@Z
    MCAPI void H264ToGeneric(struct webrtc::CodecSpecificInfoH264 const&, int64, bool, struct webrtc::RTPVideoHeader*);

    // symbol: ?SetCodecSpecific@RtpPayloadParams@webrtc@@AEAAXPEAURTPVideoHeader@2@_N@Z
    MCAPI void SetCodecSpecific(struct webrtc::RTPVideoHeader*, bool);

    // symbol:
    // ?SetDependenciesVp8Deprecated@RtpPayloadParams@webrtc@@AEAAXAEBUCodecSpecificInfoVP8@2@_J_NHH2PEAUGenericDescriptorInfo@RTPVideoHeader@2@@Z
    MCAPI void
    SetDependenciesVp8Deprecated(struct webrtc::CodecSpecificInfoVP8 const&, int64, bool, int, int, bool, struct webrtc::RTPVideoHeader::GenericDescriptorInfo*);

    // symbol:
    // ?SetDependenciesVp8New@RtpPayloadParams@webrtc@@AEAAXAEBUCodecSpecificInfoVP8@2@_J_N2PEAUGenericDescriptorInfo@RTPVideoHeader@2@@Z
    MCAPI void
    SetDependenciesVp8New(struct webrtc::CodecSpecificInfoVP8 const&, int64, bool, bool, struct webrtc::RTPVideoHeader::GenericDescriptorInfo*);

    // symbol: ?SetGeneric@RtpPayloadParams@webrtc@@AEAAXPEBUCodecSpecificInfo@2@_J_NPEAURTPVideoHeader@2@@Z
    MCAPI void SetGeneric(struct webrtc::CodecSpecificInfo const*, int64, bool, struct webrtc::RTPVideoHeader*);

    // symbol: ?Vp8ToGeneric@RtpPayloadParams@webrtc@@AEAAXAEBUCodecSpecificInfoVP8@2@_J_NPEAURTPVideoHeader@2@@Z
    MCAPI void Vp8ToGeneric(struct webrtc::CodecSpecificInfoVP8 const&, int64, bool, struct webrtc::RTPVideoHeader*);

    // symbol: ?Vp9ToGeneric@RtpPayloadParams@webrtc@@AEAAXAEBUCodecSpecificInfoVP9@2@_JAEAURTPVideoHeader@2@@Z
    MCAPI void Vp9ToGeneric(struct webrtc::CodecSpecificInfoVP9 const&, int64, struct webrtc::RTPVideoHeader&);

    // NOLINTEND
};

}; // namespace webrtc
