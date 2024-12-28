#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
// clang-format on

namespace webrtc {

class MdnsResponderInterface {
public:
    // prevent constructor by default
    MdnsResponderInterface& operator=(MdnsResponderInterface const&);
    MdnsResponderInterface(MdnsResponderInterface const&);
    MdnsResponderInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MdnsResponderInterface();

    // vIndex: 1
    virtual void
    CreateNameForAddress(::rtc::IPAddress const&, ::std::function<void(::rtc::IPAddress const&, ::std::string_view)>) = 0;

    // vIndex: 2
    virtual void RemoveNameForAddress(::rtc::IPAddress const&, ::std::function<void(bool)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
