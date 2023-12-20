#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NetworkControllerInterface; }
namespace webrtc { class NetworkStatePredictorFactoryInterface; }
namespace webrtc { class TimeDelta; }
namespace webrtc { struct NetworkControllerConfig; }
// clang-format on

namespace webrtc {

class GoogCcNetworkControllerFactory {
public:
    // prevent constructor by default
    GoogCcNetworkControllerFactory& operator=(GoogCcNetworkControllerFactory const&);
    GoogCcNetworkControllerFactory(GoogCcNetworkControllerFactory const&);
    GoogCcNetworkControllerFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GoogCcNetworkControllerFactory@webrtc@@UEAA@XZ
    virtual ~GoogCcNetworkControllerFactory() = default;

    // vIndex: 1, symbol:
    // ?Create@GoogCcNetworkControllerFactory@webrtc@@UEAA?AV?$unique_ptr@VNetworkControllerInterface@webrtc@@U?$default_delete@VNetworkControllerInterface@webrtc@@@std@@@std@@UNetworkControllerConfig@2@@Z
    virtual std::unique_ptr<class webrtc::NetworkControllerInterface> Create(struct webrtc::NetworkControllerConfig);

    // vIndex: 2, symbol: ?GetProcessInterval@GoogCcNetworkControllerFactory@webrtc@@UEBA?AVTimeDelta@2@XZ
    virtual class webrtc::TimeDelta GetProcessInterval() const;

    // symbol: ??0GoogCcNetworkControllerFactory@webrtc@@QEAA@PEAVNetworkStatePredictorFactoryInterface@1@@Z
    MCAPI explicit GoogCcNetworkControllerFactory(class webrtc::NetworkStatePredictorFactoryInterface*);

    // NOLINTEND
};

}; // namespace webrtc
