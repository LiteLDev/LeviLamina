#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfProviderInterface {
public:
    // prevent constructor by default
    DtmfProviderInterface& operator=(DtmfProviderInterface const&);
    DtmfProviderInterface(DtmfProviderInterface const&);
    DtmfProviderInterface();
};

} // namespace webrtc
