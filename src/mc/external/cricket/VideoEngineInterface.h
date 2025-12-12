#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/RtpHeaderExtensionQueryInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { struct Codec; }
namespace cricket { struct MediaConfig; }
namespace cricket { struct VideoOptions; }
namespace webrtc { class Call; }
namespace webrtc { class VideoBitrateAllocatorFactory; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace cricket {

class VideoEngineInterface : public ::cricket::RtpHeaderExtensionQueryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoEngineInterface() /*override*/ = default;

    virtual ::std::unique_ptr<::cricket::VideoMediaSendChannelInterface> CreateSendChannel(
        ::webrtc::Call*,
        ::cricket::MediaConfig const&,
        ::cricket::VideoOptions const&,
        ::webrtc::CryptoOptions const&,
        ::webrtc::VideoBitrateAllocatorFactory*
    );

    virtual ::std::unique_ptr<::cricket::VideoMediaReceiveChannelInterface> CreateReceiveChannel(
        ::webrtc::Call*,
        ::cricket::MediaConfig const&,
        ::cricket::VideoOptions const&,
        ::webrtc::CryptoOptions const&
    );

    virtual ::std::vector<::cricket::Codec> send_codecs() const = 0;

    virtual ::std::vector<::cricket::Codec> send_codecs(bool) const;

    virtual ::std::vector<::cricket::Codec> recv_codecs() const = 0;

    virtual ::std::vector<::cricket::Codec> recv_codecs(bool) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
