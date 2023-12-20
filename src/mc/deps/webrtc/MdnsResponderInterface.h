#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class MdnsResponderInterface {
public:
    // prevent constructor by default
    MdnsResponderInterface& operator=(MdnsResponderInterface const&);
    MdnsResponderInterface(MdnsResponderInterface const&);
    MdnsResponderInterface();
};

}; // namespace webrtc
