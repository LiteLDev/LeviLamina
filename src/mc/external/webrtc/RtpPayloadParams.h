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
    // prevent constructor by default
    RtpPayloadParams& operator=(RtpPayloadParams const&);
    RtpPayloadParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTPVideoHeader::GenericDescriptorInfo
    GenericDescriptorFromFrameInfo(::webrtc::GenericFrameInfo const&, int64);

    MCNAPI ::std::optional<::webrtc::FrameDependencyStructure> GenericStructure(::webrtc::CodecSpecificInfo const*);

    MCNAPI void GenericToGeneric(int64, bool, ::webrtc::RTPVideoHeader*);

    MCNAPI ::webrtc::RTPVideoHeader
    GetRtpVideoHeader(::webrtc::EncodedImage const&, ::webrtc::CodecSpecificInfo const*, ::std::optional<int64>);

    MCNAPI void H264ToGeneric(::webrtc::CodecSpecificInfoH264 const&, int64, bool, ::webrtc::RTPVideoHeader*);

    MCNAPI RtpPayloadParams(::webrtc::RtpPayloadParams const&);

    MCNAPI RtpPayloadParams(uint, ::webrtc::RtpPayloadState const*, ::webrtc::FieldTrialsView const&);

    MCNAPI void SetCodecSpecific(::webrtc::RTPVideoHeader*, bool);

    MCNAPI void SetDependenciesVp8Deprecated(
        ::webrtc::CodecSpecificInfoVP8 const&,
        int64,
        bool,
        int,
        int,
        bool,
        ::webrtc::RTPVideoHeader::GenericDescriptorInfo*
    );

    MCNAPI void SetDependenciesVp8New(
        ::webrtc::CodecSpecificInfoVP8 const&,
        int64,
        bool,
        bool,
        ::webrtc::RTPVideoHeader::GenericDescriptorInfo*
    );

    MCNAPI void SetGeneric(::webrtc::CodecSpecificInfo const*, int64, bool, ::webrtc::RTPVideoHeader*);

    MCNAPI void Vp8ToGeneric(::webrtc::CodecSpecificInfoVP8 const&, int64, bool, ::webrtc::RTPVideoHeader*);

    MCNAPI void Vp9ToGeneric(::webrtc::CodecSpecificInfoVP9 const&, int64, ::webrtc::RTPVideoHeader&);

    MCNAPI uint ssrc() const;

    MCNAPI ::webrtc::RtpPayloadState state() const;

    MCNAPI ~RtpPayloadParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpPayloadParams const&);

    MCNAPI void* $ctor(uint, ::webrtc::RtpPayloadState const*, ::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
