#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MdnsResponderInterface; }
// clang-format on

namespace rtc {

class MdnsResponderProvider {
public:
    // prevent constructor by default
    MdnsResponderProvider& operator=(MdnsResponderProvider const&);
    MdnsResponderProvider(MdnsResponderProvider const&);
    MdnsResponderProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MdnsResponderProvider() = default;

    // vIndex: 1
    virtual ::webrtc::MdnsResponderInterface* GetMdnsResponder() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
