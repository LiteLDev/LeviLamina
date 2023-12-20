#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PeerConnectionFactoryDependencies {
public:
    // prevent constructor by default
    PeerConnectionFactoryDependencies& operator=(PeerConnectionFactoryDependencies const&);
    PeerConnectionFactoryDependencies(PeerConnectionFactoryDependencies const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PeerConnectionFactoryDependencies@webrtc@@QEAA@XZ
    MCAPI PeerConnectionFactoryDependencies();

    // symbol: ??0PeerConnectionFactoryDependencies@webrtc@@QEAA@$$QEAU01@@Z
    MCAPI PeerConnectionFactoryDependencies(struct webrtc::PeerConnectionFactoryDependencies&&);

    // symbol: ??1PeerConnectionFactoryDependencies@webrtc@@QEAA@XZ
    MCAPI ~PeerConnectionFactoryDependencies();

    // NOLINTEND
};

}; // namespace webrtc
