#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTPVideoHeader.h"

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
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::RTPVideoHeader::GenericDescriptorInfo
    GenericDescriptorFromFrameInfo(::webrtc::GenericFrameInfo const&, int64);

    MCAPI ::std::optional<::webrtc::FrameDependencyStructure> GenericStructure(::webrtc::CodecSpecificInfo const*);

    MCAPI void GenericToGeneric(int64, bool, ::webrtc::RTPVideoHeader*);

    MCAPI ::webrtc::RTPVideoHeader
    GetRtpVideoHeader(::webrtc::EncodedImage const&, ::webrtc::CodecSpecificInfo const*, ::std::optional<int64>);

    MCAPI void H264ToGeneric(::webrtc::CodecSpecificInfoH264 const&, int64, bool, ::webrtc::RTPVideoHeader*);

    MCAPI RtpPayloadParams(::webrtc::RtpPayloadParams const&);

    MCAPI RtpPayloadParams(uint, ::webrtc::RtpPayloadState const*, ::webrtc::FieldTrialsView const&);

    MCAPI void SetCodecSpecific(::webrtc::RTPVideoHeader*, bool);

    MCAPI void
    SetDependenciesVp8Deprecated(::webrtc::CodecSpecificInfoVP8 const&, int64, bool, int, int, bool, ::webrtc::RTPVideoHeader::GenericDescriptorInfo*);

    MCAPI void
    SetDependenciesVp8New(::webrtc::CodecSpecificInfoVP8 const&, int64, bool, bool, ::webrtc::RTPVideoHeader::GenericDescriptorInfo*);

    MCAPI void SetGeneric(::webrtc::CodecSpecificInfo const*, int64, bool, ::webrtc::RTPVideoHeader*);

    MCAPI void Vp8ToGeneric(::webrtc::CodecSpecificInfoVP8 const&, int64, bool, ::webrtc::RTPVideoHeader*);

    MCAPI void Vp9ToGeneric(::webrtc::CodecSpecificInfoVP9 const&, int64, ::webrtc::RTPVideoHeader&);

    MCAPI uint ssrc() const;

    MCAPI ::webrtc::RtpPayloadState state() const;

    MCAPI ~RtpPayloadParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtpPayloadParams const&);

    MCAPI void* $ctor(uint, ::webrtc::RtpPayloadState const*, ::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
