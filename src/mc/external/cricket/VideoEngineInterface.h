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
    // prevent constructor by default
    VideoEngineInterface& operator=(VideoEngineInterface const&);
    VideoEngineInterface(VideoEngineInterface const&);
    VideoEngineInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoEngineInterface() /*override*/ = default;

    // vIndex: 2
    virtual ::std::unique_ptr<::cricket::VideoMediaSendChannelInterface>
    CreateSendChannel(::webrtc::Call*, ::cricket::MediaConfig const&, ::cricket::VideoOptions const&, ::webrtc::CryptoOptions const&, ::webrtc::VideoBitrateAllocatorFactory*);

    // vIndex: 3
    virtual ::std::unique_ptr<::cricket::VideoMediaReceiveChannelInterface>
    CreateReceiveChannel(::webrtc::Call*, ::cricket::MediaConfig const&, ::cricket::VideoOptions const&, ::webrtc::CryptoOptions const&);

    // vIndex: 5
    virtual ::std::vector<::cricket::Codec> send_codecs() const = 0;

    // vIndex: 4
    virtual ::std::vector<::cricket::Codec> send_codecs(bool) const;

    // vIndex: 7
    virtual ::std::vector<::cricket::Codec> recv_codecs() const = 0;

    // vIndex: 6
    virtual ::std::vector<::cricket::Codec> recv_codecs(bool) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
