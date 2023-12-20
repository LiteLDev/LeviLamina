#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PeerConnectionObserver; }
// clang-format on

namespace webrtc {

struct PeerConnectionDependencies {
public:
    // prevent constructor by default
    PeerConnectionDependencies& operator=(PeerConnectionDependencies const&);
    PeerConnectionDependencies(PeerConnectionDependencies const&);
    PeerConnectionDependencies();

public:
    // NOLINTBEGIN
    // symbol: ??0PeerConnectionDependencies@webrtc@@QEAA@PEAVPeerConnectionObserver@1@@Z
    MCAPI explicit PeerConnectionDependencies(class webrtc::PeerConnectionObserver*);

    // symbol: ??0PeerConnectionDependencies@webrtc@@QEAA@$$QEAU01@@Z
    MCAPI PeerConnectionDependencies(struct webrtc::PeerConnectionDependencies&&);

    // symbol: ??1PeerConnectionDependencies@webrtc@@QEAA@XZ
    MCAPI ~PeerConnectionDependencies();

    // NOLINTEND
};

}; // namespace webrtc
