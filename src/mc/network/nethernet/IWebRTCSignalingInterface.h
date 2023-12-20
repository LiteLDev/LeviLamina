#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class IWebRTCSignalingInterface {
public:
    // IWebRTCSignalingInterface inner types declare
    // clang-format off
    struct SignalingConfiguration;
    // clang-format on

    // IWebRTCSignalingInterface inner types define
    struct SignalingConfiguration {
    public:
        // prevent constructor by default
        SignalingConfiguration& operator=(SignalingConfiguration const&);
        SignalingConfiguration(SignalingConfiguration const&);
        SignalingConfiguration();
    };

public:
    // prevent constructor by default
    IWebRTCSignalingInterface& operator=(IWebRTCSignalingInterface const&);
    IWebRTCSignalingInterface(IWebRTCSignalingInterface const&);
    IWebRTCSignalingInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4() = 0;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5() = 0;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6() = 0;

    // vIndex: 7, symbol: ?SetTurnCredentialExpiry@IWebRTCSignalingInterface@NetherNet@@UEAAXH@Z
    virtual void SetTurnCredentialExpiry(int);

    // NOLINTEND
};

}; // namespace NetherNet
