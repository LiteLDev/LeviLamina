#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/IPAddress.h"

namespace rtc {

class InterfaceAddress : public ::rtc::IPAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd066fe;
    ::ll::UntypedStorage<4, 4> mUnk22cc12;
    // NOLINTEND

public:
    // prevent constructor by default
    InterfaceAddress(InterfaceAddress const&);
    InterfaceAddress();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InterfaceAddress() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string ToString() const;

    MCAPI ::rtc::InterfaceAddress const& operator=(::rtc::InterfaceAddress const&);

    MCAPI bool operator==(::rtc::InterfaceAddress const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
