#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TransportFeedbackObserver {
public:
    // prevent constructor by default
    TransportFeedbackObserver& operator=(TransportFeedbackObserver const&);
    TransportFeedbackObserver(TransportFeedbackObserver const&);
    TransportFeedbackObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TransportFeedbackObserver@webrtc@@UEAA@XZ
    virtual ~TransportFeedbackObserver();

    // NOLINTEND
};

}; // namespace webrtc
