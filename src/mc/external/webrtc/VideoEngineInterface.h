#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpHeaderExtensionQueryInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Call; }
namespace webrtc { class Environment; }
namespace webrtc { class VideoBitrateAllocatorFactory; }
namespace webrtc { class VideoMediaReceiveChannelInterface; }
namespace webrtc { class VideoMediaSendChannelInterface; }
namespace webrtc { struct Codec; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct MediaConfig; }
namespace webrtc { struct VideoOptions; }
// clang-format on

namespace webrtc {

class VideoEngineInterface : public ::webrtc::RtpHeaderExtensionQueryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoEngineInterface() /*override*/ = default;

    virtual ::std::unique_ptr<::webrtc::VideoMediaSendChannelInterface> CreateSendChannel(
        ::webrtc::Environment const&,
        ::webrtc::Call*,
        ::webrtc::MediaConfig const&,
        ::webrtc::VideoOptions const&,
        ::webrtc::CryptoOptions const&,
        ::webrtc::VideoBitrateAllocatorFactory*
    ) = 0;

    virtual ::std::unique_ptr<::webrtc::VideoMediaReceiveChannelInterface> CreateReceiveChannel(
        ::webrtc::Environment const&,
        ::webrtc::Call*,
        ::webrtc::MediaConfig const&,
        ::webrtc::VideoOptions const&,
        ::webrtc::CryptoOptions const&
    ) = 0;

    virtual ::std::vector<::webrtc::Codec> LegacySendCodecs() const = 0;

    virtual ::std::vector<::webrtc::Codec> LegacySendCodecs(bool) const = 0;

    virtual ::std::vector<::webrtc::Codec> LegacyRecvCodecs() const = 0;

    virtual ::std::vector<::webrtc::Codec> LegacyRecvCodecs(bool) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
