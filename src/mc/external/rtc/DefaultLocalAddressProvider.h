#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
// clang-format on

namespace rtc {

class DefaultLocalAddressProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultLocalAddressProvider() = default;

    virtual bool GetDefaultLocalAddress(int, ::rtc::IPAddress*) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
