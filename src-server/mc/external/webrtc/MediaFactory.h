#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaEngineInterface; }
namespace webrtc { class Call; }
namespace webrtc { class Environment; }
namespace webrtc { struct CallConfig; }
namespace webrtc { struct PeerConnectionFactoryDependencies; }
// clang-format on

namespace webrtc {

class MediaFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MediaFactory() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::Call> CreateCall(::webrtc::CallConfig const&) = 0;

    // vIndex: 2
    virtual ::std::unique_ptr<::cricket::MediaEngineInterface> CreateMediaEngine(::webrtc::Environment const&, ::webrtc::PeerConnectionFactoryDependencies&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
