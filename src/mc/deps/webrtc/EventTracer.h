#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class EventTracer {
public:
    // prevent constructor by default
    EventTracer& operator=(EventTracer const&);
    EventTracer(EventTracer const&);
    EventTracer();

public:
    // NOLINTBEGIN
    // symbol: ?AddTraceEvent@EventTracer@webrtc@@SAXDPEBEPEBD_KHPEAPEBD0PEB_KE@Z
    MCAPI static void
    AddTraceEvent(char, uchar const*, char const*, uint64, int, char const**, uchar const*, uint64 const*, uchar);

    // symbol: ?GetCategoryEnabled@EventTracer@webrtc@@SAPEBEPEBD@Z
    MCAPI static uchar const* GetCategoryEnabled(char const*);

    // NOLINTEND
};

}; // namespace webrtc
