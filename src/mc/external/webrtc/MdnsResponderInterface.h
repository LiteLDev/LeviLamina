#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IPAddress; }
// clang-format on

namespace webrtc {

class MdnsResponderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MdnsResponderInterface() = default;

    virtual void CreateNameForAddress(
        ::webrtc::IPAddress const&,
        ::std::function<void(::webrtc::IPAddress const&, ::std::string_view)>
    ) = 0;

    virtual void RemoveNameForAddress(::webrtc::IPAddress const&, ::std::function<void(bool)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
