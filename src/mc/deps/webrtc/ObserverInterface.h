#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ObserverInterface {
public:
    // prevent constructor by default
    ObserverInterface& operator=(ObserverInterface const&);
    ObserverInterface(ObserverInterface const&);
    ObserverInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?OnChanged@MediaStreamObserver@webrtc@@UEAAXXZ
    virtual void OnChanged() = 0;

    // vIndex: 1, symbol: ??1ObserverInterface@webrtc@@MEAA@XZ
    virtual ~ObserverInterface();

    // NOLINTEND
};

}; // namespace webrtc
