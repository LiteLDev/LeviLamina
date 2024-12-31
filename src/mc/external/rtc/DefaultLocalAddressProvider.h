#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
// clang-format on

namespace rtc {

class DefaultLocalAddressProvider {
public:
    // prevent constructor by default
    DefaultLocalAddressProvider& operator=(DefaultLocalAddressProvider const&);
    DefaultLocalAddressProvider(DefaultLocalAddressProvider const&);
    DefaultLocalAddressProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefaultLocalAddressProvider() = default;

    // vIndex: 1
    virtual bool GetDefaultLocalAddress(int, ::rtc::IPAddress*) const = 0;
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
