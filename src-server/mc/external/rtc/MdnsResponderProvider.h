#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MdnsResponderInterface; }
// clang-format on

namespace rtc {

class MdnsResponderProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MdnsResponderProvider() = default;

    // vIndex: 1
    virtual ::webrtc::MdnsResponderInterface* GetMdnsResponder() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
