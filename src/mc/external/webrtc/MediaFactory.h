#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Call; }
namespace webrtc { class Environment; }
namespace webrtc { class MediaEngineInterface; }
namespace webrtc { struct CallConfig; }
namespace webrtc { struct PeerConnectionFactoryDependencies; }
// clang-format on

namespace webrtc {

class MediaFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaFactory() = default;

    virtual ::std::unique_ptr<::webrtc::Call> CreateCall(::webrtc::CallConfig) = 0;

    virtual ::std::unique_ptr<::webrtc::MediaEngineInterface>
    CreateMediaEngine(::webrtc::Environment const&, ::webrtc::PeerConnectionFactoryDependencies&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
